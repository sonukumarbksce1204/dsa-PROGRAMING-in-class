#include<iostream>
using namespace std;
int main(){
	int arr[10],n,flag=0,low=0,mid,item;
	cout<<"Enter the size: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element:";
	cin>>item;
	
	while(low<=n){
		mid=(low+n)/2;
		if(arr[mid]==item){
			flag=1;
			break;
		}
		else if(item>arr[mid]){
			low=mid+1;
		}
		else{
			n=mid-1;
		}
	}
	if(flag==1)
	cout<<"Element found";
	else
	cout<<"Element not found";
}
