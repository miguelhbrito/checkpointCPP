#include <iostream>

using namespace std;

/*
 *struct node
 {
 	int data;
	struct node *next;
};typedef struct node Node;
*/

class Node{
	public:
		int data;
		Node *next;
};

void deleteList(Node *head){
	Node *current, *temp;
	current=head;

	while(current != NULL){
		temp=current->next;
		delete current;
		current=temp;	
	}
}

Node* push(Node *head, int newData){
	// Allocate new node.
	Node *newNode;
	newNode = (Node*)malloc(sizeof(Node));
	// Put in the data.
	newNode->data = newData;
	// Link the old list off the new node.
	newNode->next = head;

	return newNode;
}

void printLinkedListNormal(Node *head){
	Node *current;
	current = head;

	while(current != NULL){
		cout<<" "<<current->data<<" ";
		current=current->next;
	}
}

void printLinkedListReverseFirstTry(Node *head){
	Node *current,*last;
	last=NULL;
	current = head;

	while(last!=current){
		current = head;
		while(current->next!=last){
			current=current->next;
		}
		cout<<" "<<current->data<<" ";
		current=last;
	}
}

void printLinkedListReverse(Node *head){
	if(head == NULL)
		return;

	printLinkedListReverse(head->next);

	cout<<" "<<head->data<<" ";	
}

Node* deleteNode(Node *head, int data){
	Node *current;
	current = head;
	
	if(current->data == data){
		delete(head);
		return current->next;
	}

	while(current->next != NULL){
		if(current->next->data == data){
			current->next = current->next->next;
			return head;
		}
		current = current->next;
	}
	return head;

}

int main(){
	
	// Start with the empty list
	Node *head = NULL;

	// Add elements in linked list.
	head = push(head, 7);
	head = push(head, 1);
	head = push(head, 3);
	head = push(head, 2);

	cout<<"Created linked list: ";
	printLinkedListNormal(head);
	cout<<endl;

	head = deleteNode(head, 1);

	cout<<"Print reverse linked list: ";
	printLinkedListReverse(head);
	cout<<endl;

	cout<<"Deleting linked list";
	deleteList(head);
	cout<<"\nLinked list deleted"<<endl;
}
