#include<iostream>
using namespace std;
void towerOfHanoi(int n,char source,char intermedate,char destination){
    if(n==1){
        cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
        return;
    }
    towerOfHanoi(n-1,source,destination,intermedate);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1,intermedate,source,destination);
}

int main(){
    int numDisks;
    cout<<"Enter the no of disks: ";
    cin>>numDisks;
    int step=0;
    towerOfHanoi(numDisks,'A','B','C');
    cout<<"Steps: "<<step;

}