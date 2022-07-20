//Use any below method to implement Nodes of tree
#include <iostream>
#include <queue>

using namespace std;

// Method 1: Using "struct" to make
// user-define data type
struct Node
{
    int data;
    struct Node *left, *right;
};
 
// Method 2: Using "class" to make
// user-define data type
class node
{
	public:
		int data;
    		node* left;
    		node* right;

   		node(int val){
		data = val;

		left = NULL;
		right = NULL;
		
		}
};

Node* newNode(int data){
	Node *current = new Node();

	current->data = data;
	current->left = current->right = NULL;
	
	return current;
}

Node* insertNode(Node *root, int data){
	if(root == NULL){
		root = newNode(data);
		return root;
	}

	queue<Node*> myQ;
	myQ.push(root);

	while(!myQ.empty()){
		Node *current = myQ.front();
		myQ.pop();

		if(current->left != NULL){
			myQ.push(current->left);
		}else{
			current->left = newNode(data);
			return root;
		}
		if(current->right != NULL){
			myQ.push(current->right);
		}else{
			current->right = newNode(data);
			return root;
		}
	}
}

void inOrder(Node *root){
	if (root != NULL){
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}

void preOrder(Node *root){
	if (root != NULL){
		cout<<root->data<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(Node *root){
	if (root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}

int main(){

	Node *root = newNode(10);
	root->left = newNode(11);
	root->left->left = newNode(7);
	root->right = newNode(9);
	root->right->left = newNode(15);
	root->right->right = newNode(8);

	cout << "Inorder traversal before insertion: ";
	inOrder(root);
	cout<<endl;

	cout << "PreOrder traversal before insertion: ";
	preOrder(root);
	cout<<endl;

	cout << "PostOrder traversal before insertion: ";
	postOrder(root);
	cout<<endl;

	int data = 12;
	root = insertNode(root, data);

	cout << "Inorder traversal after insertion: ";
	inOrder(root);
	cout<<endl;

	cout << "PreOrder traversal after insertion: ";
	inOrder(root);
	cout<<endl;

	cout << "PostOrder traversal after insertion: ";
	inOrder(root);
	cout<<endl;
	return 0;
}
