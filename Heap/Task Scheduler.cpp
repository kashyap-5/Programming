Problem Description: Given a characters array tasks, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle.
However, there is a non-negative integer n that represents the cooldown period between two same tasks (the same letter in the array), that is that there must be at least n units of time between any two same tasks.
Return the least number of units of times that the CPU will take to finish all the given tasks.
Link:https://leetcode.com/problems/task-scheduler/description/

Blog : https://medium.com/@satyem77/task-scheduler-leetcode-39d579f3440

Solution:
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int f = 0;
        int X = 0;
        int tot = tasks.size();
        map<char,int> mp;
        for(auto x : tasks){
            mp[x]++;
            if(f < mp[x])f = mp[x];
        }

        for(auto x : mp){
            if(x.second == f){
                X++;
            }
        }
        return max((f-1)*(n+1)+X,tot);
    }
};
