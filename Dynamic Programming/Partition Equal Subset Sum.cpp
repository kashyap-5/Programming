Link : https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

Problem Description : Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same. 



class Solution{
public:

    int subsetSum(int N, int sum,int *arr){
        int t[N+1][sum+1];
        for(int i = 0; i < N+1; i++){
            for(int j = 0; j < sum+1;j++){
                if(i == 0)t[i][j] = 0;
                else if(j == 0){
                    t[i][j] = 1;
                }
            }
        }
        for(int i = 1; i < N+1; i++){
            for(int j = 1; j < sum+1;j++){
                if(arr[i-1] <= j){
                    t[i][j] = t[i-1][j - arr[i-1]] || t[i-1][j];
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[N][sum];
    }

    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        for(int i =0; i < N;i++){
            sum+=arr[i];
        }
        
        if(sum % 2 != 0) return 0;
        else if(sum % 2 == 0)return subsetSum(N,sum/2,arr);
    }
};
