#include<iostream>
using namespace std;
int findPivot(int *arr,int n,int key){
    int s=0,e=n-1,mid;
    int ans;
    while(s<e){
        mid= s+(e-s)/2;
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}
int findelement(int *arr,int index,int e,int key){
    int s=index,end=e-1,mid;
    while(s<end){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={7,8,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key= 4,ans;
    int pivot=findPivot(arr,n,key);
    if(arr[pivot]==key){
        cout<<"element is at index "<<pivot<<endl;
    }
    else{
         if(arr[pivot]<=key && key< arr[n-1]){
            ans= findelement(arr,pivot,n-1,key);
    }
        else{
            ans= findelement(arr,0,pivot-1,key);
    }
    
    cout<<"the element is at index "<<ans<<endl;
    }
    return 0;
}