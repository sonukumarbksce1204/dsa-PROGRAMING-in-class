#include<iostream>
using namespace std;
const int maxSize=5;
int queue[maxSize];
int front=-1,rear=-1;

void enqueu(int item);
int dequeue();
void display();

int main(){
    cout<<"1.Enqueue\n 2.Dequeue\n 3.Display 4.Exit"<<endl;
    int ch;
    while(1){
        cout<<"Enter the option (1/2/3/4):";
        cin>>ch;
        switch(ch){
            case 1:
                    int i;
                    cout<<"Enter the element:";
                    cin>>i;
                    enqueu(i);
                    break;
            case 2:{
                    int item=dequeue();
                    if(item!=-1){
                        cout<<"Dequeued element: "<<item<<endl;
                    }
                    break;
                }
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);

        }
    }
}

void enqueu(int item){
    //if((rare+1)%maxSize==front)
    if(rear==maxSize-1){
        cout<<"Queue is full(overflow). Cannot enqueue."<<endl;
    }
    /*else{
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%maxSize;
        queue[rare]=item;
    }*/
    else if(rear=-1){
        front=rear=0;
        queue[rear]=item;
    }
    else{
        rear++;
        queue[rear]=item;
    }
}

int dequeue(){
    if(front==-1){
        cout<<"queue is empty. cannot deqeue."<<endl;
        return -1;
    }
    /*else{
        int item=queue[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%maxSize;
        }
        return item;
    }*/

    else if(front=rear)
    front=rear=-1;
    else
    front++;
}

void display(){
    if(front==-1){
        cout<<"Queue is empty."<<endl;
    }
    else{
        int i=front;
        cout<<"Queue elments: ";
        while(i!=rear){
            cout<<queue[i]<<" ";
            i=(i+1)%maxSize;
        }
        cout<<queue[i]<<endl;
    }
}