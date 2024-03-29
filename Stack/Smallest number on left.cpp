Given an array a of integers of length n, find the nearest smaller number for every element such that the smaller element is on left side.
If no small element present on the left print -1.
Link : https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
    vector<int> v;
    stack<int> s;
    for(int i = 0;i<n;i++){
        if(s.size() == 0)v.push_back(-1);
        else if(s.size() > 0 && s.top() < a[i])v.push_back(s.top());
        else if(s.size() > 0 && s.top() >= a[i]){
            while(s.size() > 0 && s.top() >= a[i]){
                s.pop();
            }
            if(s.size() == 0)v.push_back(-1);
            else v.push_back(s.top());
        }
        s.push(a[i]);
    }
    return v;
    }
};
