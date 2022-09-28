Problem Description : Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.
Link : https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int start = 0;
	    int end = n-1;
	    while(start <= end){
	        int mid = start + (end-start)/2;
	        
	        if(mid > 0 &&  mid < n-1){
	        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])return arr[mid];
	        else if(arr[mid-1] > arr[mid])end = mid -1;
	        else start = mid + 1;
	        }
	        else if(mid == n-1)return arr[n-1];
	     }
	}
};
