Problem Description : Given an array containing N elements. The task is to find the maximum number of distinct elements after removing K elements from the array.
Example 1:

Input : Arr[] = {5, 7, 5, 5, 1, 2, 2}, K = 3
Output : 4
Explanation:
Remove 2 occurrences of element 5 and 
1 occurrence of element 2.
  
 class Solution{
    public:
    int maxDistinctNum(int arr[], int n, int k)
    {
    	// Complete the function
     unordered_map<int,int> mp;
     for(int i = 0; i < n;i++){
         mp[arr[i]]++;
     }
     priority_queue<pair<int,int>> maxh;
     for(auto i : mp){
         maxh.push({i.second,i.first});
     }
     while(k--){
         pair<int,int> temp = maxh.top();
         maxh.pop();
         if(temp.first > 1){
             maxh.push({temp.first-1,temp.second});
         }
     }
     return maxh.size();
    }
};
