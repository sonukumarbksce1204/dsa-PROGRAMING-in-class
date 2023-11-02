#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,30,40,50,60};
	int j,n=6,k=3,el=35;
	j=n;
	while(j>=k){
		arr[j+1]=arr[j];
		j--;
	}
	arr[k]=el;
	//n=n+1;
	cout<<arr[j]<<endl;
//	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//		cout<<arr[i]<<endl;
//	}
}
