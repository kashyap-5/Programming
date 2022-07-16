Problem Description : Given two generic trees, return true if they are structurally identical. Otherwise return false.

  Structural Identical
If the two given trees are made of nodes with the same values and the nodes are arranged in the same way, then the trees are called identical.  
  
  bool areIdentical(TreeNode<int> *root1, TreeNode<int> *root2) {
    // Write your code here
    if(root1 == NULL && root2 == NULL)return true;
    bool childAns = true;
    for(int i = 0, j = 0; i<root1->children.size(), j<root2->children.size();i++,j++){
       
        if(root1->children.size() == root2->children.size()){
            if(root1->data == root2->data){
             childAns = areIdentical(root1->children[i],root2->children[j]);
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
        
    }
    return childAns;
    }
