#include<iostream>
using namespace std;
int mountain(int *arr,int n){
    int s=0,e=n-1,mid;
    int ans=-1;
    while (s<e)
    {   
        mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }

    }
    return s;
    
}
int main(){
    int arr[]={1,2,3,4,5,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Index is "<<mountain(arr,n);
    return 0;
}