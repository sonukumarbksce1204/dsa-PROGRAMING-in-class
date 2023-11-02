#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n,pos;
	cout<<"Enter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the position to delete the element: ";
	cin>>pos;
	for(i=pos;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	cout<<"updated array"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
