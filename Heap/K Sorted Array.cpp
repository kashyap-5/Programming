Problem Description : https://practice.geeksforgeeks.org/problems/k-sorted-array1610/1
Given an array of n distinct elements. Check whether the given array is a k sorted array or not. A k sorted array is an array where each element is at most k distance away from its target position in the sorted array.
  class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        for(int i=0;i<n;i++)
        {
            minh.push({arr[i],i});
        }
        int i = 0;
         while(minh.size()!=0)
         {

               if(abs(q.top().second-i) <= k){
                   minh.pop();
                   i++;
               }
               else{
                   return "No";
               }
        
        
         }
         return "Yes";
    }
  };
