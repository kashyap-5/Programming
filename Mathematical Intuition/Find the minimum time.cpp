Problem Description : Geek wants to scan N documents using two scanners. If S1 and S2 are the time taken by the scanner 1 and scanner 2 to scan a single document, find the minimum time required to scan all the N documents. You can use one or more scanners at a time.
  
Link : https://practice.geeksforgeeks.org/problems/find-the-minimum-time0253/1?page=2&category[]=Binary%20Search&sortBy=submissions

class Solution{
public:
    int minTime(int S1, int S2, int N){
        // code here
        int max_count = min(S1,S2)*N;
        
        for(int i = 0; i < N;i++){
            int count = max(S1*i,S2*(N-i));
            if(max_count > count)max_count = count;
        }
        return max_count;
    }
};
