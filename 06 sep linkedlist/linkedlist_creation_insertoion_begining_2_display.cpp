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
void insertNodeBegining(int data){
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        cout<<"Unable to allocate memory.";
    }
    else{
        newNode->data=data;//link data part
        newNode->next=head;\
        head=newNode;
        cout<<"data inserted ";
    }
}

int main(){
    create();
    insertNodeBegining(33);
    display();
    return 0;
}