Problem Description : Given a sorted array arr[] of size N without duplicates, and given a value x. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. Find the index of K(0-based indexing).
Link : https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int start = 0;
        int end = n-1;
        int res = -1;

        
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(v[mid] == x){
                return mid; 
            }
            else if(v[mid] < x){
                res = mid;
               start = mid+1; 
            }else{
                end = mid-1;
            }
        }
        return res;
        
    }
};
