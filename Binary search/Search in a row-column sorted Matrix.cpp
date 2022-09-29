Problem Description : Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not.
  
Link : https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i = 0, j = m-1;
        while(i >= 0 && i < n && j >= 0 && j < m ){
        
            if(matrix[i][j] == x)return true;
            else if(x > matrix[i][j])i++;
            else j--;
        }
        return false;
    }
};
