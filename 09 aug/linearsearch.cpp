#include<iostream>
using namespace std;
int main(){
	int arr[10],n,i,flag=0,pos,item;
	cout<<"Enter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element to search: ";
	cin>>item;
	for(i=0;i<n;i++){
		if(arr[i]==item){
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==1){
		cout<<"Element found at "<<pos;
	}
	else{
		cout<<"Element not found";
	}
	
}
