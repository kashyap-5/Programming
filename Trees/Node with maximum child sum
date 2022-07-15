Problem Description : Given a generic tree, find and return the node for which sum of its data and data of all its child nodes is maximum.
In the sum, data of the node and data of its immediate child nodes has to be taken.

#include <climits>

template <typename T>
class MaxNodePair{
    public: 
    TreeNode<T>* node;
    int sum;
};

MaxNodePair<int>* maxSumNodeHelper(TreeNode<int>* root){
    if(root == NULL){
        MaxNodePair<int>* pair = new MaxNodePair<int>();
        pair->node = NULL;
        pair->sum = INT_MIN;
        return pair;
    }
    
    int sum = root->data;
    
    for(int i = 0; i < root->children.size(); i++){
       sum = sum + root->children[i]->data;
    }
    
    MaxNodePair<int>* ans = new MaxNodePair<int>();
    ans->node = root;
    ans->sum = sum;
    
    for(int i = 0; i < root->children.size(); i++){
       MaxNodePair<int>* childAns = maxSumNodeHelper(root->children[i]);
       if(childAns->sum > ans->sum){
           ans = childAns ;
       }
    }
    
    return ans;
    
}

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
   return maxSumNodeHelper(root)->node;
}
