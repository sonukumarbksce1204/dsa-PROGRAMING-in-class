#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *newnode;
struct node *head=NULL;
struct node *temp;

void create(){
    char ch='y';
    while(ch=='y'){
        newnode=new node();
        cout<<"Enter the data:";
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"ch= ";
        cin>>ch;
    }
    
}
struct node *rhead=NULL;
struct node *rev;
struct node *tep;

void reverse(){
    struct node *ptr=head;
    while(ptr!=NULL){
        tep=new node();
        tep->data=ptr->data;
        tep->next=NULL;
        if(rhead==NULL){
            rhead=tep;
            rev=tep;
        }
        else{
            tep->next=rhead;
            rhead=tep;
        }
        ptr=ptr->next;
        
    }
    
}

void display(){
    struct node *ptr=rhead;
    while(ptr!=NULL){
        cout<<ptr->data;;
        ptr=ptr->next;
        cout<<" ";
    }
    cout<<endl;
}

int main(){
    create();
    reverse();
    display();
}