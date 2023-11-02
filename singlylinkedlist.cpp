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

void insertbeg(int val){
    node *newNode;
    newNode=new node();
    newNode->data=val;
    newNode->next=head;
    head=newNode;
}

void insertend(int item){
    struct node *ptr=head;
    while(ptr!=NULL){
        ptr=ptr->next;
    }
    struct node *newNode;
    newNode=new node();
    newNode->data=item;
    newNode->next=NULL;
    temp->next=newNode;
    temp=newNode;
}

void insertpos(int item,int pos){
    struct node *newNode;
    newNode=new node();
    newNode->data=item;
    newNode->next=NULL;
    struct node *ptr=head;
    int i=0;
    while(ptr!=NULL){
        if(i+1==pos){
            newNode->next=ptr->next;
            ptr->next=newNode;
            ptr=newNode;
        }
        ptr=ptr->next;
        i++;
    }
}

void delbeg(){
    struct node *ptr=head;
    struct node *del;
    del=head;
    head=ptr->next;
    free(del);
}

void delend(){
    struct node *ptr=head;
    while(ptr!=NULL){
        if(ptr->next->next==NULL){
            ptr->next=NULL;
        }
        ptr=ptr->next;
    }
}

void delpos(int pos){
    struct node *ptr=head;
    int i=0;
    while(ptr!=NULL){
        if(i+1==pos){
            ptr->next=ptr->next->next;
            break;
        }
        ptr=ptr->next;
        i++;
    }
}

int find(int item){
    node *ptr=head;
    int flag=0;
    while(ptr!=NULL){
        if(ptr->data==item){
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    return flag;
}
void display(){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data;;
        ptr=ptr->next;
        cout<<" ";
    }
    cout<<endl;
}

int main(){
    create();
    display();
    
    insertbeg(78);
    cout<<"After insertion at beg "<<endl;
    display();
    
    insertend(110);
    cout<<"After insertion at end"<<endl;
    display();
    
    insertpos(111,3);
    cout<<"After insertion at pos"<<endl;
    display();
    
    delbeg();
    cout<<"After deletion at big"<<endl;
    display();
    
    delend();
    cout<<"After deletion at end"<<endl;
    display();
    
    delpos(1);
    cout<<"After deletion at postion"<<endl;
    display();
  
    int f=find(40);
    if(f==1){
        cout<<"Found"<<endl;
    }
}