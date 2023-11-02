#include<iostream>
using namespace std;

int n=5;
int arr[5];
int top=-1;
//int bottom;
void push(int val){
    if(top==-1){
        top=0;
        arr[top]=val;
        top++;
    }
    else if(top>(n-1)){
        cout<<"Stack overflow!"<<endl;
    }
    else{
        arr[top]=val;
        top++;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack Underflow!"<<endl;
    }
    else{
        cout<<arr[top-1]<<"is poped."<<endl;
        n--;
        top--;
    }
}

void display(){
    if(top==-1){
        cout<<"Stack is empty."<<endl;
    }
    else{
        for(int i=0;i<top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
void Top(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
    int val=top-1;
    cout<<"Element at top is "<<arr[val]<<endl;
    }
}

void isempty(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
}

void isfull(){
    if(top==n){
        cout<<"stack is full"<<endl;
    }
}


int main(){
    cout<<"1.Push\n2.Pop\n3.Display\n4.Top\n5.Exit."<<endl;
    int ch;
    while(1){
    cin>>ch;
    switch(ch){
        case 1:
            int num;
            cout<<"Enter the element: ";
            cin>>num;
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            Top();
            isfull();
            isempty();
            break;
        case 5:
            exit(1);
        default:
            cout<<"Try again"<<endl;
            break;
    }
    }
}