Problem Description : https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

// Very important question 
class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isValid(int A[],int N,int M,int mx){
        int student  = 1;
        int sum = 0;
        for(int i = 0; i < N;i++){
            sum = sum + A[i];
            if(sum > mx){
               student++;
               sum = A[i];
            }
            if(student > M)return false;
        }
        return true;
    }
    
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(N < M)return -1;
        int start = A[N-1];
        int sum = 0;
        for(int i = 0; i < N;i++){
            sum += A[i];
        }
        int end = sum;
        int res=-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(isValid(A,N,M,mid) == true){
                res = mid;
                end = mid-1;
            }
            else start = mid+1;
        }
        return res;
    }
};
