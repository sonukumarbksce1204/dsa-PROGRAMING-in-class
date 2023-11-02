#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,10,10,10,10,10,30,20,30,10},n=8,i;
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(arr[i]==arr[j]){
                 for(int k=j;k<n;k++){
                     arr[k]=arr[k+1]; 
                 }
                 n--;
                 j--;   
                 }
            }
        }
    
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
