#include<iostream>
using namespace std;
int main(){
	int fact=1,num;
	cin>> num;
	for(int i=1;i<=num;i++){
		fact*=i;
	}
	cout<<fact;
	
}
