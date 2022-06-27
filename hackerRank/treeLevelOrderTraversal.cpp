// Link to problem : https://www.hackerrank.com/challenges/tree-level-order-traversal/problem
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
/*
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
*/

    void levelOrder(Node * root) {
        if(root == NULL){
            return;
        }
        /*to print in sorting way
        // call recursively smaller values
        levelOrder(root->left);
        
        // print actual value
        cout<<root->data<<" ";
        
        // call recursively greater values
        levelOrder(root->right);*/
        
        // create a queue (FIFO-First In First Out)
        queue<Node*> myQueue;
        
        // put the first node into queue
        myQueue.push(root);
        
        // iterate with it until empty
        while (!myQueue.empty()){
            
            // pick up the first value from queue and put this on a new node
            Node* root = myQueue.front();
            
            // remove the value from queue
            myQueue.pop();
            
            // print it with blank space
            cout << root->data << " ";
            
            // check if there is a left value and push it into queue
            if (root->left){
                myQueue.push(root->left);
            }
            // check if there is a right value and push it into queue
            if (root->right){
                myQueue.push(root->right);
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
  
	myTree.levelOrder(root);
    return 0;
}

