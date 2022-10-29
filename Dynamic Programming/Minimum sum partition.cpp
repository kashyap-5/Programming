Link : https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

Problem Description : Given an array arr of size n containing non-negative integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum and find the minimum difference

class Solution{

  public:
 
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum = 0;
	    for(int i = 0; i < n;i++){
	        sum += arr[i];
	    }
	    
	    bool t[n+1][sum+1];
        for(int i = 0; i < n+1;i++){
            for(int j = 0; j < sum+1;j++){
                if(i == 0)t[i][j] = false;
                if(j==0)t[i][j] = true;  //NOTICE both conditions have if condition to make i=0,j=0 -->1
            }
        }
        for(int i = 1; i < n+1;i++){
            for(int j = 1; j < sum+1;j++){
                if(arr[i-1] <= j){
                    t[i][j] = t[i-1][j] || t[i-1][j - arr[i-1]];
                }
                else {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        vector<int> v;
        int N = sum/2;
        for(int i = 0; i <= N;i++){
        if(t[n][i] == true)v.push_back(i);
        }
	    int mn = INT_MAX;
	    for(int i =0; i < v.size(); i++ ){
	        mn = min(mn,sum - (2*v[i]));
	    }
	    return mn;
	    
	} 
};
