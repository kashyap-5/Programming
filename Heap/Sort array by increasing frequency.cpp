Problem Description: Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.
Return the sorted array.
 Link : https://leetcode.com/problems/sort-array-by-increasing-frequency/description/

#define psi pair<int, int>
// Comparator function to get max element first instead of min element
class myComp{
  public:
    bool operator() (const psi &p1, const psi &p2) {
      if(p1.first == p2.first) return p1.second < p2.second;
      
      return p1.first > p2.first;
    }
};
class Solution {
public:


    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i =0; i < nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        priority_queue<psi,vector<psi>,myComp> minh;
        
        for(auto i = mp.begin(); i != mp.end(); i++){
            minh.push({i->second,i->first});
        }
        
        while(minh.size() > 0){
        int freq = minh.top().first;
        int ele = minh.top().second;
        minh.pop();
        
        for(int i = 0; i < freq; i++){
            ans.push_back(ele);
        }
        }
        
        return ans;
    }
};
