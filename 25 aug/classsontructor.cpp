#include<iostream>
using namespace std;
class student{
	public:
            int id;
            string name;
            int roll;
            student(int x,string y,int r){
                id=x;
                name=y;
                roll=r;
            }
            void print(){
                cout<<"Id: "<<id<<endl<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl;
            }
            
};
int main(){
	int x,r;
    string n;
    //student s1;
    cin>>x>>r>>n;
    student s1(x,n,r);
    s1.print();
}
