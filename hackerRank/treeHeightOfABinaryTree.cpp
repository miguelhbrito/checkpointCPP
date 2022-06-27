// Link to problem : https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem
#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node *left;
    Node *right;
};

*/ 

int height(Node* root) {
    //check if is not null
    if (root == NULL){
        return -1;
    }else{
        // create values to recursive call
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
     
        /* use the larger one */
        if (leftHeight > rightHeight){
                return(leftHeight + 1);
            } else {
                return(rightHeight + 1);
            }
        }
    }
}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
  	std::cout << height;

    return 0;
}

