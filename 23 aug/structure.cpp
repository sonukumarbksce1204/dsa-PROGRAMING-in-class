#include<iostream>
using namespace std;
struct student{
	int regno;
	string name;
	int roll;
	int age;
};
int main(){
	student s;
	cin>>s.regno>>s.name>>s.roll>>s.age;
	cout<<s.regno<<" "<<s.name<<" "<<s.roll<<" "<<s.age<<endl;
}
