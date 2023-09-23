#include<iostream>
using namespace std;
int squareroot(int n){
    int s=0,e=n,mid;
    int ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int n=100;
    squareroot(n);
    cout<<"the squareroot of number is "<<squareroot(n);
    return 0;
}