Problem Description : Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.
Link : https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
		
	int count(int arr[], int n, int x) {
	    // code here
	   int start = 0;
	   int end = n-1;
	   int first = 0;
	   int last= -1;
	   while(start <= end){
	      int mid = start + (end-start)/2;
	       
	       if(arr[mid] == x){
	           first = mid;
	           end = mid -1;
	           
	       }
	       else if(arr[mid] > x){
	           end = mid - 1;
	       }else{
	           start = mid + 1;
	       }
	   }
	   
	   start = 0;
	   end = n-1;
	    while(start <= end){
	       int mid = start + (end-start)/2;
	       
	       if(arr[mid] == x){
	           last = mid;
	           start = mid + 1;
	           
	       }
	       else if(arr[mid] > x){
	           end = mid - 1;
	       }else{
	           start = mid + 1;
	       }
	       
	   }
	   
	   return last - first + 1;     
	    
	}
};
