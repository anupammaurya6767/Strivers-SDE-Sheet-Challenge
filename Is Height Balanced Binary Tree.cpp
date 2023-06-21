#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

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

*************************************************************/

pair<int,int>check(BinaryTreeNode<int>* root){

 

    if(root==NULL){

        pair<int,int>p={0,1};

        return p;

    }

 

    pair<int,int>left_pair=check(root->left);

    pair<int,int>right_pair=check(root->right);

 

    int diff=abs(left_pair.first-right_pair.first)<=1;

 

    int left= left_pair.second;

    int right=right_pair.second;

 

    pair<int,int>ans;

    ans.first=1+max(left_pair.first,right_pair.first);

 

    if(left and right and diff){

        ans.second=1;

        return ans;

    }else{

        ans.second=0;

        return ans;

    }

}

bool isBalancedBT(BinaryTreeNode<int>* root) {

   return check(root).second;

}
