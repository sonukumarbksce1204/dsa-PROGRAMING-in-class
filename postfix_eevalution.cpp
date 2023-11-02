#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int si=20;
int arr[20];
int top=-1;
void push(int data){
    if(top==-1){
        top=0;
        arr[top]=data;
    }
    else if(top==si){
        cout<<"overfloaw"<<endl;
    }
    else{
        top++;
        arr[top]=data;
    }
}
int pop(){
    if(top==-1){
        cout<<"underflow"<<endl;
    }
    else{
        int val=arr[top];
        top--;
        return val;
    }
}


int main(){
    char x[20];
    cin>>x;
    int i=0;
    while(x[i]!='\0'){
        if(isdigit(x[i])){
            push(stoi(string(1, x[i])));
            i++;
        }
        else{
            int a=pop();
            int b=pop();
            if(x[i]=='+'){
                int temp=b+a;
                cout<<"b+a"<<b+a<<endl;
                push(temp);
            }
            else if(x[i]=='-'){
                int temp=b-a;
                 cout<<"b-a"<<a-b<<endl;
                push(temp);
            }
            else if(x[i]=='*'){
                int temp=b*a;
                 cout<<"b*a"<<b*a<<endl;
                push(temp);
            }
            else if(x[i]=='/'){
                int temp=b/a;
                 cout<<"b/a"<<b/a<<endl;
                push(temp);
            }
            i++;
        }
    }
    int a=pop();
    cout<<a;
}