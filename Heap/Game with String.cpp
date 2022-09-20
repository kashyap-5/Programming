Given a string s of lowercase alphabets and a number k, the task is to print the minimum value of the string after removal of ‘k’ characters. The value of a string is defined as the sum of squares of the count of each distinct character.
  
Link : https://practice.geeksforgeeks.org/problems/game-with-string4100/1?page=1&difficulty[]=-1&difficulty[]=0&category[]=Heap&sortBy=submissions

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int> mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        priority_queue<pair<char,int>> maxh;
        for(auto i : mp){
            maxh.push({i.second,i.first});
        }
        while(k--){
            pair<char,int> temp = maxh.top();
            maxh.pop();
            if(temp.first >= 1){
                maxh.push({temp.first-1,temp.second});
            }
        }
        int sum = 0;
        while(maxh.size() > 0){
        int count = maxh.top().first;
        sum += count*count;
        maxh.pop();
        }
        return sum;
    }
};
