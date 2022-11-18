Problem Description : https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1

class Solution
{
    public:
    
    int lcs(int x,int y,string X,string Y){
        int t[x+1][y+1];
        memset(t,-1,sizeof(t));
        if(x == 0|| y==0)
        return 0;
        
        for(int i = 0; i < x+1;i++){
            for(int j =0;j < y+1;j++){
                if(i == 0 || j == 0)t[i][j] = 0;
            }
        }
        
        for(int i = 1; i< x+1;i++){
            for(int j = 1; j < y+1; j++){
                if(X[i-1] == Y[j-1]){
                    t[i][j] =1 + t[i-1][j-1];
                }
                else{
                    t[i][j] = max(t[i][j-1],t[i-1][j]);
                }
            }
            
        }
        return t[x][y];
    }
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        int ans = lcs(m,n,X,Y);
        return m+n-ans;
        
    }
};
