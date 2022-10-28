Link : https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

Problem Description : Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 
  
class Solution{   
public:
    
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        bool t[n+1][sum+1];
        for(int i = 0; i < n+1; i++){
           for(int j = 0; j < sum+1; j++){
               if(i == 0)t[i][j] = false;
               if(j == 0)t[i][j] = true;
           } 
        }
        
        for(int i = 1; i < n+1; i++){
           for(int j = 1; j < sum+1; j++){
               if(arr[i-1] <= j){
                   t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
               }
               else{
                   t[i][j] = t[i-1][j];
               }
               
            }
        }
        return t[n][sum];
    }       
};