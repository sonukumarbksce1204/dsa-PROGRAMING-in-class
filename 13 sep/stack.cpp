#include<iostream>
using namespace std;

void push();
int pop();
int display();
const int maxSize=5;
int stack[maxSize];
int top=-1;

int main(){
    cout<<"1.Push 2.Pop 3.Display 4.Exit"<<endl;
    int ch;
    while(1){
        cout<<"Enter the operation(1/2/3/4): ";
        cin>>ch;
        switch(ch){
            case 1:
                    push();
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(1);
            default:
                    break;
        }
                
        
    }
}

void push(){
    int item;
    if(top==maxSize-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        cout<<"Enter the element: ";
        cin>>item;
        top=top+1;
        stack[top]=item;
    }
}

int pop(){
    int item;
    if(top==-1){
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else{
        item=stack[top];
        top=top-1;
        cout<<"poped element: "<<item<<endl;
        return item;
    }
}

int display(){
    if(top== -1){
        cout<<"stack is empty."<<endl;
    }
    else{
        cout<<"Stack elements: ";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
