Problem Description : https://www.interviewbit.com/problems/sliding-window-maximum/

The following example will give you more clarity.

The array A is [1 3 -1 -3 5 3 6 7], and B is 3.

Window position         	Max
———————————-	          ————————-
[1  3  -1] -3  5  3  6  7	3
1 [3  -1  -3] 5  3  6  7	3
1  3 [-1  -3  5] 3  6  7	5
1  3  -1 [-3  5  3] 6  7	5
1  3  -1  -3 [5  3  6] 7	6
1  3  -1  -3  5 [3  6  7]	7
  
  
#include<bits/stdc++.h>
vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n = A.size();
    vector<int> ans;
    int i = 0, j = 0;
    list<int> l;
    while(j < n){
        while(l.size() > 0 && l.back() < A[j]){
            l.pop_back();
        }
        l.push_back(A[j]);
        if(j-i+1 < B)j++;
        else if(j-i+1 == B){
            ans.push_back(l.front());
            if(l.front() == A[i]){
                l.pop_front();
            }
            i++;
            j++;
        } 
    }
    return ans;
}
