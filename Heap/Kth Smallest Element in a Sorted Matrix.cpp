Problem : Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.

You must find a solution with a memory complexity better than O(n2).

Solution : 
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int m = matrix.size();
        int n = matrix[0].size(), ans; // For general, the matrix need not be a square
        priority_queue<vector<int>, vector<vector<int>>, greater<>> minHeap;
        for (int r = 0; r < min(m, k); ++r)
            minHeap.push({matrix[r][0], r, 0});

        for (int i = 1; i <= k; ++i) {
            auto top = minHeap.top(); minHeap.pop();
            int r = top[1], c = top[2];
            ans = top[0];
            if (c + 1 < n) minHeap.push({matrix[r][c + 1], r, c + 1});
        }
        return ans;
    }
};
