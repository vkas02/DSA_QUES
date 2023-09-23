#include<iostream>
using namespace std;
int firstOccurence(int *arr,int n,int key){
    int s=0,e=n-1;
    int result=-1,mid;
    while(s<=e){
        mid= s+(e-s)/2;
        if(arr[mid]==key){
            result=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return result;
}
int lastOccurence(int *arr,int n,int key){
    int s=0,e=n-1;
    int result=-1,mid;
    while(s<=e){
        mid= s+(e-s)/2;
        if(arr[mid]==key){
            result=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return result;
}
int main(){
    int arr[]={1,2,3,4,4,4,4,4,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    cout<<"first occurence is "<<firstOccurence(arr,n,key)<<endl;
    cout<<"last occurence is "<<lastOccurence(arr,n,key)<<endl;
    cout<<"count of elemment is "<<lastOccurence(arr,n,key)-firstOccurence(arr,n,key)+1<<endl;
    return 0;
}