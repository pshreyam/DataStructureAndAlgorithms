#include<iostream>
using namespace std;


class node{
	int data;
	node* left;
	node* right;
	public:
	friend class LinkedBST;
};



class LinkedBST{
private:
    node* root;
public:
	LinkedBST(){
	    root = NULL;
	}
	~LinkedBST(){}
	void preorderTraversal(node *root){
        if (root == NULL){
            return;
        }

        cout << root->data;
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }

	void inorderTraversal(node *root){
        if (root == NULL) {
            return;
        }
        inorderTraversal(root->left);

        cout << root->data;

        inorderTraversal(root->right);
    }

	void postorderTraversal(node *root){
        if (root == NULL) {
            return;
        }

        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data;
    }

	void addBST(node *root,int data){
    	if (data < root->data){
    		if (root->left!=NULL){

    			addBST(root->left,data);
    		}
    		else{
    			node *newNode=new node();
    			newNode->data=data;
    			root->left=newNode;
    		}
    	}
    	else if (data > root->data){
    		if (root->right!=NULL){

    			addBST(root->right,data);
    		}
    		else{
    			node *newNode=new node();
    			newNode->data=data;
    			root->right=newNode;
    		}
    	}
    }
    node* returnaddress(LinkedBST t1){
        return t1.root;
    }

};


int main(){
    node* a;

	LinkedBST tree1;
	a = tree1.returnaddress(tree1);
	cout<<a;
	//tree1.addBST(a,5);
	//tree1.addBST(a,1);
    //tree1.addBST(a,10);
	//tree1.addBST(a,7);
	//tree1.postorderTraversal(a);
}
