Problem Description : https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1

Time Complexity : O(2^n)
Space Complexity : O(1)
  
class Solution{
public:

   void solve(string ip,string op,vector<string> &ans){
       if(ip.length() == 0){
           ans.push_back(op);
           return;
       }
       string op1 = op;
       string op2 = op;
       op1.push_back(' ');
       op1.push_back(ip[0]);
       op2.push_back(ip[0]);
       ip.erase(ip.begin() + 0);
       solve(ip,op1,ans);
       solve(ip,op2,ans);
       return;
   }


    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        string op = "";
        op.push_back(S[0]);
        S.erase(S.begin() + 0);
        solve(S,op,ans);
        return ans;
    }
    
    
};
