#include<bits/stdc++.h>
using namespace std;
struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
    };
    BSTNode* GETnewNode(int data)
    {
        BSTNode* newNode=new BSTNode();
        newNode->data=data;
        newNode->left=newNode->right=NULL;
        return newNode;
    }
    BSTNode* Insert(BSTNode* root,int data)
    {
        if(root==NULL)
        {
            root=GETnewNode(data);
        }
        else if(data<=root->data)
        {
            root->left=Insert(root->left,data);
        }
        else
        {
        root->right=Insert(root->right,data);
    }
    return root;
    }
    bool search(BSTNode* root,int data)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->data==data)
        {
            return true;
        }
        else if(data<=root->data)
        {
            return search(root->left,data);
        }
        else
        {
            return search(root->right,data);
        }
        
    }
    int main()
    {
        BSTNode* root=NULL;
        root=Insert(root,15);
        root = Insert(root,10);	
      	root = Insert(root,20);
	    root = Insert(root,25);
	    root = Insert(root,8);
	    root = Insert(root,12);
	    int number;
	    cout<<"enter the number to be searched";
	    cin>>number;
	    if(search(root,number)==true)
	    {
	        cout<<"number found\n";
	   }
	   else
	   {
	       cout<<"not found";
	   }
    }
