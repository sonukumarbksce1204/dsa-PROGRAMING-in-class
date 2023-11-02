#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

int partition(int a[],int lb,int ub){
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}

//Quick Short function

void quickSort(int a[],int lb,int ub){
    if(lb<ub){
        int loc=partition(a,lb,ub);
        //recursively sort the left and right  sub array 
        quickSort(a,lb,loc-1);
        quickSort(a,lb+1,loc);
    }
}

int main(){
    int a[]={12,11,13,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quickSort(a,0,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}