#include<iostream>
using namespace std;
int main(){
	int arr[10][10],r,c,i,j;
	cout<<"Enter the size of row: ";
	cin>>r;
	cout<<"Enter the size of column: ";
	cin>>c;
	cout<<"Enter the elements: ";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Elements are: ";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
	}
}
