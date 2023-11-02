#include<iostream>
using namespace std;
int main(){
	int arr[10][10],r,c,i,j,sum=0;
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
	cout<<"Elements are: "<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
			sum+=arr[i][j];
		}
	}
	cout<<"Sum: "<<sum<<endl;
	cout<<"Avg: "<<sum/(r+c)<<endl;
	
}
