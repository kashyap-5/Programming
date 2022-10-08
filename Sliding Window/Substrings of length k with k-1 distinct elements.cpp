Problem Description : Given a String S and an integer K. Find the count of all substrings of length K which have exactly K-1 distinct characters.
  
Link : https://practice.geeksforgeeks.org/problems/substrings-of-length-k-with-k-1-distinct-elements/1



class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        // code here
        int n = S.size(),count = 0;
        unordered_map<char,int> mp;
        int i = 0, j = 0;
        while(j < n){
            mp[S[j]]++;
            if(j-i+1 < K)j++;
            else if(j-i+1 == K){
                if(mp.size() == K-1)count++;
                    mp[S[i]]--;
                    if(mp[S[i]] == 0)mp.erase(S[i]);
                    i++;
                    j++;
                
            }
        }
        
        return count;
    }
};
