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
    cout<<endl;
}

void insertNodeAtBeginning(int data){
    struct node *newNode;
    newNode=new node();
    //newnode=(struct Node *)malloc(sizeof(struct node));
    if(newNode==NULL){
        cout<<"Unable to allocate memory";
    }
    else{
        newNode->data=data;
        newNode->next=head;
        newNode->prev=NULL;
        if(head!=NULL){
            head->prev=newNode;
        }
        head=newNode;
        cout<<"Data inserted succesfully\n";
    }

}

int main(){
    create();
    display();
    insertNodeAtBeginning(44);
    display();
}