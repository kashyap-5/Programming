Problem Description : Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
Note: Return NULL if no node is present with the value greater than n.
  
  TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(root == NULL)return root;
    
    bool flag = false;
    
    TreeNode<int>* nextLarger = NULL;
    
    if(root->data > x){
        flag = true;
        nextLarger = root;
    }
    for(int i = 0; i < root->children.size(); i++){
    TreeNode<int>* temp = getNextLargerElement(root->children[i],x); 
        
        if(nextLarger == NULL){
            nextLarger = temp;
        }
        else if(temp!= NULL && temp->data < nextLarger->data){
            flag = true;
            nextLarger = temp;
        }
    }
    
    return nextLarger;
}
