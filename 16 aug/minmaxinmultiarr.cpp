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
	int min=arr[0][0];
	int max=arr[0][0];
	cout<<"Elements are: "<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
			if(arr[i][j]<min){
				min=arr[i][j];
			}
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"Minimun element is: "<<min<<endl;
	cout<<"Maximun element is: "<<max<<endl;
}
