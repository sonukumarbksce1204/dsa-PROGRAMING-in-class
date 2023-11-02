#include<iostream>
using namespace std;
int main(){
	int x=0,y=1,z=0,n;
	cin>>n;
	cout<<x;
	for(int x;x<=n;x++){
		x=y;
		y=z;
		z=x+y;
		
	cout<<" "<<z<<endl;
}
}



/*
int a=0,b=0,i=0,num;
cout<<""enter the number:";
cin>>num;
while(i<num){
cout<<"fib series is :"<<i<<endl;
a=b;
b=i;
i=a+b;
}
return 0;


*/
