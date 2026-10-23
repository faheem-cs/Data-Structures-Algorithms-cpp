#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *Next;
};
int main() {
	Node *head=new Node();
	Node *second=new Node();
	Node *third=new Node();
	Node *fourth=new Node();

	head->data=10;
	second->data=20;
	third->data=30;
	fourth->data=40;
	             
	head->Next=second;
	second->Next=third;
	third->Next=fourth;
	fourth->Next=NULL;

	Node *temp=head;
	while (temp!=NULL){	
		cout<<temp->data<<endl;
		cout<<temp->Next<<endl;
		temp=temp->Next;
	}
	return 0;
}
