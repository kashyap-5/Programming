Description : There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.
Link : https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long>,greater<long long>> minh;
        for(int i = 0; i < n ; i++){
            minh.push(arr[i]);
        }
        long long ans = 0;
        while(minh.size() > 1){
            long long fi = minh.top();
            minh.pop();
            long long sec = minh.top();
            minh.pop();
            minh.push(fi+sec);
            ans = ans + fi + sec;
        }
        return ans;
    }
};
