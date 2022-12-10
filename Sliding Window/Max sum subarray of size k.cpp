GFG link : https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
Problem Description : Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.
  
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i = 0, j = 0;
        long max = Arr[j], sum = 0;
        while(j < N){
            sum += Arr[j];
            if(j-i+1 < K)j++;
            else if(j-i+1 == K){
                if(max < sum)
                {
                    
                    max = sum;
                 //   cout<<max<<endl;
                }
                sum -= Arr[i];
                i++;
                j++;
            }
        }
        
        return max;
    }
};
