#include<iostream>
using namespace std;
int main(){
    int arr[10],i,pos,item,n;
    cout<<"Enter number of Elements";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the positon and element";
    cin>>pos>>item;
    for(i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=item;
    cout<<"inserted array"<<endl;
    for(i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
