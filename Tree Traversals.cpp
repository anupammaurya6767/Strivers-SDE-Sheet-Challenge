#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root) {

  vector<vector<int>> ans(3);

  if (root == NULL)

    return ans;

  // ans.push_back(getInOrderTraversal(root));

  // ans.push_back(preorderTraversal(root));

  // ans.push_back(postorderTraversal(root));


 

  // here ans[0]= in, ans[1]= pre, ans[2]= post


 

  stack<pair<BinaryTreeNode<int> *, int>> st;

  st.push({root,1});  


 

   while(st.size()){

       auto it = st.top();

       st.pop();


 

       if(it.second==1){

           ans[1].push_back(it.first->data);

           it.second++;

           st.push(it);


 

           if(it.first->left) 

             st.push({it.first->left,1});

       }

       else if(it.second==2){

           ans[0].push_back(it.first->data);

           it.second++;

           st.push(it);


 

           if(it.first->right) 

             st.push({it.first->right,1});

       }

       else{

           ans[2].push_back(it.first->data);

       }


 

   }    


 

      return ans;

}

 