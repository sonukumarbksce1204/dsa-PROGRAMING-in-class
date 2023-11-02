//need modification
#include<iostream>
using namespace std;
int main(){
	int arr[5]={7,50,8,9,45};
	int lb=0,up=4;
	int p=arr[lb],start=lb,end=up;
	while(start<end){
		while(arr[start]<=p){
			start++;
		}
		while(arr[end]>p){
			end--;
		}
		if(arr[start]<arr[end]){
			int temp=arr[end];
			arr[end]=arr[start];
			arr[start]=temp;
		}
	}
	int t=arr[end];
	arr[end]=arr[lb];
	arr[lb]=t;
	//print array
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	
}
