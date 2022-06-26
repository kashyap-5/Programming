Problem Description : https://leetcode.com/problems/reverse-linked-list/
Time Complexity : O(N)
Space Complexity : O(N)
  
 class Solution {
public:
    ListNode* reverseList(ListNode* head) {
           ListNode *prev= NULL, *curr = head , *nex = curr;
           while(curr != NULL){
               nex = curr->next;
               curr->next  = prev;
               prev = curr;
               curr = nex;
           }
        return prev;
    }
};
