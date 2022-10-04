Problem Description : Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
  
Link : https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int mxl[n],mxr[n];
        mxl[0] = arr[0];
        for(int i = 1; i < n;i++){
            mxl[i]= max(mxl[i-1],arr[i]);
        }
        mxr[n-1] = arr[n-1];
        for(int i = n-2; i >= 0;i--){
            mxr[i]= max(mxr[i+1],arr[i]);
        }
        long long water[n];
        for(int i = 0; i < n;i++){
            water[i]= min(mxl[i],mxr[i]) - arr[i];
        }
        long long int sum = 0;
        for(int i = 0; i < n;i++){
            sum = sum + water[i] ;
        }
        return sum;
    }
};
