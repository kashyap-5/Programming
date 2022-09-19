Problem Description : Given an array of n elements, where each element is at most k away from its target position. The task is to print array in sorted form.
Link : https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T, N,K;
	int arr[N];
	cin >>T;
	while(T--){
	    cin>> N >> K;
	    
	    for(int i = 0; i < N;i++){
	        cin >> arr[i] ;
	    }
	    
	
	priority_queue<int,vector<int>,greater<int>> minh;
	vector<int> ans;
    
    	for(int i =0;i < N; i++){
            minh.push(arr[i]);
	    
	        if(minh.size() > K){
	          ans.push_back(minh.top());
	          minh.pop();
	       }
     	}
     	while(minh.size() > 0){
     	    ans.push_back(minh.top());
     	    minh.pop();
     	}
     	for(int i = 0; i < ans.size();i++){
     	    cout << ans[i]<< " ";
     	}
     	cout<< endl;
	
	
	}	
	return 0;
}
