Problem Link : https://leetcode.com/problems/target-sum/description/

You are given an integer array nums and an integer target.

You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
Return the number of different expressions that you can build, which evaluates to target.
  
Solution : 
class Solution {
public:
    
    int count_subset(vector<int>& nums,int sum){
        int n = nums.size();
        int t[n+1][sum+1];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= sum;j++){
               if(i==0)t[i][j] = 0;
               if(j == 0)t[i][j] = 1;
            }
        }
    
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= sum; j++){  //Trick point we are including all columns along with 0
                if(nums[i-1] <= j){
                    t[i][j] = t[i-1][j] + t[i-1][j - nums[i-1]];
                }
                else t[i][j] = t[i-1][j];
            }
        }
        return t[n][sum];
    }
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        
        int p1 =0;
        for(int i = 0; i < nums.size(); i++){
            sum+= nums[i];
        }
        if(abs(target) > sum) return 0;
        if((target+sum) & 1)return 0;
        else p1 = (sum+target)/2;
        
        int count = 0;
        return count = count_subset(nums,p1);

/* Ajit's Code
    //     int total=0;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         total+=nums[i];
    //     }
    //     if(abs(target)>total) return 0;
    //     if((total+target)&1) return 0;
    //     else target=(target+total)/2;
    //     int t[n+1][target+1];
      
    //     t[0][0]=1;
    //     for(int i=1;i<=target;i++)
    //     {
    //         t[0][i]=0;
    //     }
    //     for(int i=1;i<=n;i++)
    //     {
    //         for(int j=0;j<=target;j++)
    //         {
    //             if(j>=nums[i-1])
    //             {
    //                 t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
    //             }
    //             else
    //             {
    //                 t[i][j]=t[i-1][j];
    //             }
    //         }
    //     }
    //     return t[n][target];
        
    }
    
};
