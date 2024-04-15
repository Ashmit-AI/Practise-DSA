 // Pointers 
 
 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	int x =6;
 	int *ptr;
 	ptr = &x;
 	
 	 cout<<"Before changing: "<<x<<endl;
 	 
 	*ptr = 7;
 	cout<<"After changing: "<<x<<endl;
 	cout<<&x;
 	return 0;
 	
 }
