#include<iostream>
using namespace std;

int n=5;
int arr[5];
int front=-1;
int rear=-1;

void enqueue(){
    int val;
    cout<<"Enter data"<<endl;
    cin>>val;
    if(rear==-1){
        rear=0;
        front=0;
        arr[rear]=val;
        rear++;
    }
    else if(front>n-1){
        cout<<"Overflow"<<endl;
    }
    else{
        arr[rear]=val;
        rear++;
    }
}

void dequeue(){
    if(front>rear){
        cout<<"Underflow"<<endl;
    }
    else{
        arr[front]=0;
        front++;
    }
}

void display(){
    for(int i=front;i<rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void peek(){
    cout<<front<<endl;
}
void Is_full(){
    if(rear==(n-1)){
        cout<<"Queue is full"<<endl;
    }
    else{
        cout<<"Queue is not full "<<endl;
    }
}
void Is_empty(){
    if(rear==-1){
        cout<<"Queue is empty"<<endl;
    }
}

int main(){
    int ch;
    while(1){
        cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.is_full\n6.is_empty\n7.Exit"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                Is_full();
                break;
            case 6:
                Is_empty();
                break;
            case 7:
                exit(1);
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
        
    }
}