Problem Description : Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
Link : https://leetcode.com/problems/find-k-closest-elements/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> maxh;
        vector<int> ans;
        for(int i =0; i < arr.size(); i++){
            maxh.push({abs(arr[i]-x),arr[i]});
                       if(maxh.size() > k){
                           maxh.pop();
                       }
        }
        while(maxh.size() > 0){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(ans.begin(),ans.end());
         return ans;
                      
    }
};
