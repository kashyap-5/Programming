Link : https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
Knapsack with Duplicate Items
Given a set of N items, each with a weight and a value, represented by the array w[] and val[] respectively. Also, a knapsack with weight limit W.
The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.
Note: Each item can be taken any number of times.
  
Solution : 
class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int t[N+1][W+1];
        for(int i = 0; i <= N; i++){
            for(int j = 0; j <= W; j++){
                t[i][j] = 0;
            }
        }
        
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= W; j++){
                if(wt[i-1] <= j){
                    t[i][j] = max(val[i-1]+t[i][j - wt[i-1]],t[i-1][j]);
                }
                else t[i][j] = t[i-1][j];
            }
        }
        return t[N][W];
    }
};
