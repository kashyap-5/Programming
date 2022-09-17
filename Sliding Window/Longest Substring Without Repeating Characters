Problem Description: Given a string s, find the length of the longest substring without repeating characters.
Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int mx = 0;
        unordered_map<char,int> mp;
        int i = 0, j = 0;
        while(j < n){
            mp[s[j]]++;
            
           if(mp.size() == j-i+1){
                mx = max(mx,j-i+1);
                j++;
            }
            else if(mp.size() < j-i+1){
              
                while(mp.size() < j-i+1){
                  
                     mp[s[i]]--;
                     if(mp[s[i]] == 0 )mp.erase(s[i]);
                     i++;
                   }
                j++;
               } 
           
        }
        return mx;
    }
};
