Problem Description : Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).
The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).
You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).
  
Link : https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> maxh;
      
        for(int i =0; i < points.size();i++){
            maxh.push({points[i][0]*points[i][0] + points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            if(maxh.size() > k)maxh.pop();
        }
        vector<vector<int>> ans(k,vector<int>(2,0));  //Notice how to write in 2D vector
        int i = 0;
        while(maxh.size() > 0){
            int a = maxh.top().second.first;
            int b = maxh.top().second.second;
            ans[i][0] = a;
            ans[i][1] = b;
            i++;
            maxh.pop();
        }
        return ans;
    }
};
