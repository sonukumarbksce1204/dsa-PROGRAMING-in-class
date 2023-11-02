#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;
struct node *tmp;
struct node *newnode;

void create(){
    int n,i;
    cout<<"How much node you want: ";
    cin>>n;
    for(i=0;i<n;i++){
        newnode=new node();
        cin>>newnode->data;
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            tmp=newnode;
        }
        else{
            tmp->next=newnode;
            newnode->prev=tmp;
            tmp=newnode;
        }
    }
}

void display(){
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main(){
    create();
    display();
}