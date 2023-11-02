#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*next;
};
int main(){
	struct node *head=NULL;
	head=(struct node *)malloc(sizeof(struct node));
	head->data=10;
	head->next=NULL;
	cout<<head->data<<endl;
    struct node*current=(struct node*)malloc(sizeof(struct node));
    current->data=20;
    current->next=NULL;
    head->next=current;
    cout<<current->data<<endl;

	return 0;
}
