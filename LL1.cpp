#include<bits/stdc++.h>
using namespace std;

class Node{
	public :
		
		int data;
		Node* next;
		
		Node(int data){
			this -> data = data;
			this -> next = NULL;
			
		}
};


void insertAtHead(Node* &head , int d){
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
	
}

void insertAtTail(Node*  &tail , int d){
	// new node create
	
	Node* temp = new Node(d);
	
    tail -> next = temp;
    tail = tail -> next;
    
		
	}
	
	

void print(Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout<<temp -> data<< " ";
		temp = temp -> next;
		
	}
	cout<<endl;
	
}

 void insertAtPosition(Node* &head, int position,int d){
 	
 	if(position == 1){
 		insertAtHead(head,d);
 		return ;
 		
	 }
	 
	 
 	Node* temp = head;
 	int cnt = 1;
 	
 	while(cnt < position-1){
 		temp = temp->next;
 		cnt++;
 		
	 }
	 
	 Node* nodeToInsert = new Node(d);
	 nodeToInsert -> next = temp -> next;
	 temp -> next = nodeToInsert;
	 
 }
 
 void deleteNode(int position, Node* & head){
 	
 	// deleting first or start node
 	if(position == 1){
 		Node* curr = head;
 		Node* prev = NULL;
 		
 		int cnt = 1;
 		while(cnt <= position){
 			prev = curr;
 			curr = curr -> next;
 			cnt++;
 			
		 }
		 prev -> next = curr -> next;
		 delete curr;
		 
	 }  
 }


int main(){
	
Node* node1 = new Node(10);


Node* head = node1;
print(head);

insertAtHead(head,12);
print(head);

insertAtHead(head,15);
print(head);

insertAtHead(head,17);
print(head);

insertAtPosition(head,3,22);
print(head);


//cout<< "head" << head -> data << endl;
//cout<< "tail" << tail -> tail << endl;

deleteNode(1,head);
print(head);

	
	return 0;
	
}
