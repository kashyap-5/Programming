Problem Description : Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.

Note that the letters wrap around.

For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.
  
Link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res ='0';
        int n = letters.size();
        int start = 0;
        int end = n-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(letters[mid] > target){
                res = letters[mid];
                end = mid-1;
            }
            else if(letters[mid] <= target)
                start = mid + 1;
            
            }
    
        if(res == '0'){
            return letters[0];
        }
        return res;
        
    }
};
