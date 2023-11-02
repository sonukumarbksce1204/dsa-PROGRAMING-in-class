#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,i,item;
	cout<<"Enter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++){  //input
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
