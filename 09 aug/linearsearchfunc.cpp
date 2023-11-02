#include<iostream>
using namespace std;
void linearsearch(int arr[10],int n,int item)
{
	int flag=0;
	for(int i=0;i<n;i++){
		if(arr[i]==item){
			flag=1;
			break;
		}
	}
	if(flag==1){
		cout<<"Element found";
	}
	else{
		cout<<"Element not found";
	}
}
int main(){
	int arr[10],n,i,item;
	cout<<"Enter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the element to search: ";
	cin>>item;
	linearsearch(arr,n,item);
}
