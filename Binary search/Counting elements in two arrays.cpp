Problem Description : Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. For each element in arr1[] count elements less than or equal to it in array arr2[].
  
Link : https://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1?page=1&category[]=Binary%20Search&sortBy=submissions

class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[],int m, int n)
    {
    //Your code goes here
    vector<int> ans;
    sort(arr2,arr2+n);
    for(int i = 0; i < m; i++){
        int x = arr1[i];
        int count = 0;
        int start = 0;
        int end = n-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(arr2[mid] <= x){
                count = mid + 1;
                start= mid + 1;
            }
            else end = mid -1;
        }
        ans.push_back(count);
    }
    return ans;
    }
};
