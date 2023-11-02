#include<iostream>
using namespace std;

void merge(int A[],int lb,int mid,int ub){
    int i=lb,j=mid+1,k=lb;
    int B[ub+1];
    while(i<=mid&&j<=ub){
        if(A[i]<=A[j]){
            B[k]=A[i];
            i++;
        }
        else{
            B[k]=A[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=ub){
        B[k]=A[j];
        j++;
        k++;
    }
    for(int k=lb;k<=ub;k++){
        A[k]=B[k];
    }
}
void mergeSort(int A[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(A,lb,mid);
        mergeSort(A,mid+1,ub);
        merge(A,lb,mid,ub);
    }
}

int main(){
    int arrSize;
    cout<<"Enter the no of element: ";
    cin>>arrSize;

    int arr[arrSize];
    cout<<"Enter the element of array: ";
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }

    cout<<"Original array: ";
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,arrSize-1);
    cout<<"Sorted array: ";
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}