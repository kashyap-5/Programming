Given a bitonic sequence A of N distinct elements, write a program to find a given element B in the bitonic sequence in O(logN) time.

NOTE:

A Bitonic Sequence is a sequence of numbers which is first strictly increasing then after a point strictly decreasing.
  
Link : https://www.interviewbit.com/problems/search-in-bitonic-array/

int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int start = 0;
    int end = n-1;
    int index = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(A[mid] > A[mid-1] && A[mid] > A[mid+1]){
            index = mid;
            break;
        }
        else if(A[mid-1] > A[mid])end = mid - 1;
        else start = mid + 1;
    }
    start = 0;
    end = index -1;
    while(start <= end){  //applying Binary search in ascending sorted array
        int mid = start + (end - start)/2;
        if(A[mid] == B)return mid;
        else if(A[mid] < B)start= mid+1;
        else end = mid - 1;  
    }
    start = index;
    end = n-1;
    while(start <= end){ // applying binary search in descending sorted array
        int mid = start + (end - start)/2;
        if(A[mid] == B)return mid;
        else if(A[mid] < B)end= mid-1;
        else start = mid + 1;  
    }
    return -1;
}
