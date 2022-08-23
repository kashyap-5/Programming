Problem Statement : Given two strings. The task is to find the length of the longest common substring.
Links : https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1

class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<vector<int>>t(n+1,vector<int>(m+1));
        int len = INT_MIN;
        
        for(int i = 0; i < n+1 ; i++){
            for(int j = 0; j < m+1 ; j++){
                if(i == 0 || j == 0)t[i][j] = 0;
            }
        }
        for(int i = 1; i < n+1 ; i++){
            for(int j = 1;j < m+1 ; j++){
                if(S1[i-1] == S2[j-1])t[i][j]= 1+t[i-1][j-1];
                else{
                    t[i][j] = 0;
                }
                len = max(len,t[i][j]);
            }
        }
        
       return len;
    }
};
