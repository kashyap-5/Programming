Problem Description : Given an ascending sorted rotated array Arr of distinct integers of size N. The array is right rotated K times. Find the value of K.
Link : https://practice.geeksforgeeks.org/problems/rotation4723/1

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int start = 0;
	    int end = n-1;
	    
	    while(start <= end){
	        
	    int mid = start + (end - start)/2;
	    int prev = (mid - 1 + n) % n;
	    int next = (mid + 1) % n;
	    
	    if(arr[mid] <= arr[prev] && arr[mid] <= arr[next])return mid;
	    
	    else if(arr[mid] <= arr[end])end = mid-1;
	    else if(arr[mid] >= arr[start]){
	        start = mid+1;
	     }
	   }
	 return 0;
	}

};
