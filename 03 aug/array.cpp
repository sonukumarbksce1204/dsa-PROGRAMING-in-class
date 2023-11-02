#include<iostream>
using namespace std;
int main(){
//	int a[]={10,20,30,40,50};
//	cout<<sizeof(a)/sizeof(a[0])<<endl;
//	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
//		cout<<"Element are:"<<a[i]<<endl;
//	}
	int size;
	cout <<"Enter the size";
	cin>>size;
	int a[20];
	cout <<"Enter the elements";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	cout<<a[19];
	
	

	
	return 0;
}
