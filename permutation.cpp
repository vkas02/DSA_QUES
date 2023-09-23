#include<vector>
#include<iostream>
using namespace std;
void solve(vector<vector<int>> &ans,vector<int>nums,int index){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solve(ans,nums,index+1);
        //backtracking
        swap(nums[index],nums[j]);
    }

}
int main(){
    vector<int> nums;
    for(int i=1;i<4;i++){
        nums.push_back(i);
    }
    vector<vector<int>> ans;
    int index=0;
    solve(ans,nums,index);
     for (const vector<int> &perm : ans) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }


    return 0;
}