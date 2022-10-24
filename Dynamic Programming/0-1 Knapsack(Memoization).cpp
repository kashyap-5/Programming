Link : https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

Time Complexity : O(n*W)
Space Complexity : O(n*W)
  
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int t[1002][1002]; // Declaracing a global array so that they can be accessed from anywhere
    int solve(int W,int wt[],int val[],int n){
       if(n == 0||W == 0)return 0;  //Base Condition
       
       if(t[n][W] != -1)return t[n][W];  //initial checking matrix value
       
       if(wt[n-1] <= W){
           return t[n][W] = max(val[n-1]+solve(W-wt[n-1],wt,val,n-1),solve(W,wt,val,n-1));
       }
       
       else if(wt[n-1] > W)return t[n][W] = solve(W,wt,val,n-1);
    
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(t, -1,sizeof(t));
       int ans;
       ans =  solve(W,wt,val,n);
       return ans;
    }    
};
