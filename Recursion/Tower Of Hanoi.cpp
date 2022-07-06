Problem Description : https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1#
Time Complexity : O(2^N)
Space Complexity : O(N)

class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    void fun(int N, int from, int to, int aux,long long &ans)
    {
     if(N==1){
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<< to<<endl;
            ans++;
            return;
        }
        fun(N-1,from,aux,to,ans);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<< to<<endl;
        ans++;
        fun(N-1,aux,to,from,ans);
    }
    
    
   
    long long toh(int N, int from, int to, int aux) {
        // Your code here
         long long ans=0;
         fun(N, from,to,aux,ans);
         return ans;
        }
        

};
