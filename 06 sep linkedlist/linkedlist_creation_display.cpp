#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tmp;
struct node *newnode;
void create(){
    char ch='y';
    while(ch=='y'){
       // newnode=(struct node*)malloc(sizeof(struct node));
        newnode=new node();
        cout<<"Enter th eelement ";
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            tmp=newnode;
        }
        
        else{
            tmp->next=newnode;
            tmp=newnode;
        }
        cout<<"Want to continue(y/n):";
        cin>>ch;
    }
}

void display(){
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
        cout<<" ";
    }
}


int main(){
    create();
    display();
    return 0;
}