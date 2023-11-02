#include<iostream>
using namespace std;
int main(){
	int r,c,e,i,j,k,arr[10][10][10];
	cin>>r>>c>>e;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			for(k=0;k<e;k++){
				cin>>arr[i][j][k];
			}
		}
	}
	cout<<"Elements are: "<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			for(k=0;k<e;k++){
				cout<<arr[i][j][k]<<" ";
			}
			cout<<endl;
		}
		//cout<<endl;
	}
}
