#include<bits/stdc++.h>
using namespace std;

 class Node{
 	public:
 		int data;
 		Node* next;
 		
 		//constructor
 		
 		Node(int d){
 			this -> data = d;
 			this -> next = NULL;
 			
		 }
		 
		 ~Node(){
		 	int value = this->data;
		 	if(this->next != NULL){
		 		delete next;
		 		next = NULL;
		 		
			 }
			 cout<<"Memory is free for the node with data"<<value<<endl;
			 
		 }
 };
 
 void insertNode(Node* &tail, int element, int d){
// empty list 
 if(tail == NULL){
 	Node* newNode = new Node(d);
 	tail = newNode;
 	newNode -> next = newNode;
 	
 }
 else{
 	 //non-empty list 
 	 //assuming that the element is present in the list
 	 
 	 Node* curr = tail;
 	 
 	 while(curr->data != element){
 	 	curr = curr -> next;
 	 	
	  }
	  
	  //element found -> curr is representing element wala node
	  Node* temp = new Node(d);
	  temp -> next = curr -> next;
	  curr -> next = temp;
	  
 }
 
 
}

void deleteNode(Node* &tail, int vlaue){
	
	if(tail == NULL){
		cout<<"List is empty , please check again"<<endl;
		return;
		
	}
	else{
		
		Node* prev = tail;
		Node* curr = prev -> next;
		
		while(curr -> data != value){
			prev = curr;
			curr = curr -> next;
			
		}
		
		prev -> next = curr -> next;
		curr -> next = NULL;
		delete curr;
		
	}
}
 void print(Node* tail){
 	
 	Node* temp = tail;
 	
 	do{
 		cout<<tail -> data<<" ";
 		tail = tail -> next;
 		
	 } while(tail != temp); 
	 cout<<endl;
 }
int main(){
	Node* tail = NULL;
	
	insertNode(tail,5,3);
	print(tail);
	
		insertNode(tail,3,5);
	print(tail);
	
	
		insertNode(tail,5,7);
	print(tail);
	
	  
	
	return 0;
	
}
