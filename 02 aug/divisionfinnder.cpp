#include<iostream>
using namespace std;
int main(){
	int a=93,b=87,c=89;
	double per=(a+b+c)/3;
	if(per>60){
		cout <<"First division";
	}
	else if(per>50 && per<60){
		cout << "Second division";
	}
	else if(per>40 && per<50){
		cout << "Third division";
	}
	else{
		cout<<"Fail";
	}
}
