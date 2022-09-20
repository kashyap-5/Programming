Problem Description : Given an array A[] of N positive integers and two positive integers K1 and K2. Find the sum of all elements between K1th and K2th smallest elements of the array. It may be assumed that (1 <= k1 < k2 <= n).
Link : https://practice.geeksforgeeks.org/problems/sum-of-elements-between-k1th-and-k2th-smallest-elements3133/1

class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        priority_queue<int> maxh;
        for(int i = 0; i< N;i++){
            maxh.push(A[i]);
            if(maxh.size() > K1)maxh.pop();
        }
        K1 = maxh.top();
        while(maxh.size() > 0)maxh.pop();
        for(int i = 0; i< N;i++){
            maxh.push(A[i]);
            if(maxh.size() > K2)maxh.pop();
        }
        K2 = maxh.top();
        long long sum = 0;
        for(int i = 0; i < N;i++){
            if(A[i] > K1 && A[i] < K2)sum += A[i];
        }
        return sum;
    }
};
