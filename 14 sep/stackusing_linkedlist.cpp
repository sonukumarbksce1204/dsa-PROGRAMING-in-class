#include<iostream>
using namespace std;

struct stack{
    int data;
    struct stack *next;
};

stack *top=NULL,*node;

void push(int val){
    node=new stack();
    node->data=val;
    node->next=top;
    top=node;
}
void pop(){
    if(top==NULL){
        cout<<"Stack is empty";
    }
    else{
        cout<<"The popped element is "<<top->data<<endl;
        //struct stack *ptr;
        top=top->next;
        //free(ptr);
    }

}

void display(){
    struct stack *ptr;
    if(top==NULL){
        cout<<"stack is empty";
    }
    else{
        ptr=top;
        cout<<"Stack element are: ";
        while(ptr !=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}

int main(){
    int ch,val;
    cout<<"1) Push elements in stack"<<endl;
    cout<<"2) Pop elements from stack"<<endl;
    cout<<"3) display elements in stack"<<endl;
    cout<<"4) Exit"<<endl;
    while(1){
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"Enter value to be pushed:"<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                exit(1);
                break;
            }
            default:{
                break;
            }
        }
    }

}