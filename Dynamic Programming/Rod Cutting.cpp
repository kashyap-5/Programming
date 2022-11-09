Problem Description : https://practice.geeksforgeeks.org/problems/rod-cutting0840/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

Given a rod of length N inches and an array of prices, price[]. pricei denotes the value of a piece of length i. Determine the maximum value obtainable by cutting up the rod and selling the pieces.
  
  class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int len[n];
        for(int i = 0; i < n;i++){
            len[i] = i+1;
        }
        int t[n+1][n+1];
        for(int i = 0; i <= n;i++){
            for(int j = 0; j <= n; j++){
                if(i ==0 || j==0)
                t[i][j] = 0;
            }
        }
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(len[i-1] <= j){
                    t[i][j] = max(price[i-1] + t[i][j-len[i-1]], t[i-1][j]);
                }
                else t[i][j] = t[i-1][j];
            }
        }
        return t[n][n];
    }
};
