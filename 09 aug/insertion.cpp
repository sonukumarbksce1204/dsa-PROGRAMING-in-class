#include<iostream>
using namespace std;
int main(){
	int arr[10],n,pos,item,i;
	cout<<"Enter the size: ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter position and element: ";
	cin>>pos>>item;
	for(i=n;i>pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=item;
	n++;
	cout<<"After updation"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
