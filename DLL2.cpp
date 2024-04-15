#include<iostream>
using namespace std;

void insertAtPosition(Node* &tail, Node* &head, int position , int d){
	
	// insert at start
	
	if(position == 1){
		insertAtHead(head,d);
		return ;
		
	}
	
	Node* temp = head;
	int cnt = 1;
	
	while(cnt < position-1){
		temp = temp->next;
		cnt++ ;
		
	}
	
	// inserting at Last Position 
	if(temp -> next == NULL){
		insertAtTail(tail,d);
		return;
		
		
	}
	
	// creating a node for d
	
	Node* nodeToInsert = new Node(d);
	
	nodeToInsert -> next = temp -> next;
	temp -> next -> prev = nodeToInsert;
	temp -> next = nodeToInsert;
	nodeToInsert -> prev = temp;
	
}

   int  main(){
   	
   	Node* node1 = new Node(10);
   	Node* head = node1;
   	Node* tail = node1;
   	
   	print(head);
   	
   	// cout<< getLength(head)<<endl; 
	   insertAtHead(head,11);
	   print(head);
	   
	    insertAtHead(head,11);
	   print(head);
	   
	    insertAtHead(head,11);
	   print(head);
	   
	   insertAtTail(tail , 25);
	   print(head);
	   
	   return 0;
	   
	     }
