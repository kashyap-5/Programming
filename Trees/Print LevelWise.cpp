Problem Description : Given a generic tree, print the input tree in level wise order.
  
You need to print all nodes in the level order form in different lines.
Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. 
The data of the nodes of the tree is separated by space.
Output Format :
The first and only line of output contains the elements of the tree in level wise order, as described in the task.
  

  void printLevelWise(TreeNode<int>* root) {
    // Write your code here
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    
    while(pendingNodes.size() != 0 ){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        
        cout<< front->data << ":" ;
        for(int i = 0; i < front->children.size(); i++){
            if(i < (front->children.size() - 1)){
                cout<< front->children[i]->data << ",";
            }
            else{ // handling the case where node has just 1 child
                cout << front->children[i]->data;
            }
            pendingNodes.push(front->children[i]);
        }
      cout << "\n";
        
    }
    
}
