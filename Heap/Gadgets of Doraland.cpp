Problem Description : https://practice.geeksforgeeks.org/problems/bbd15e2da95880979ce65acc7360e2c5681664e65520/1?page=1&difficulty[]=-1&difficulty[]=0&category[]=Heap&sortBy=submissions


class Solution{
    public:
    
    static bool comp(pair<int,int>A,pair<int,int>B){
        if(A.second == B.second)
          return A.first > B.first;
          
        else
          return A.second > B.second;
    }
    vector<int> TopK(vector<int>& array, int k)
    {
        // code here
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = array.size();
        for(int i = 0; i < n; i++){
            mp[array[i]]++;
        }
        
        vector<pair<int,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),comp);
        
        for(int i = 0; i < k; i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
