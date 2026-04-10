#include<iostream>
#include<vector>
using namespace std;

void subset(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp){
  if(index==n){
    ans.push_back(temp);
    return;
  }
  //not included
  subset(arr,index+1,n,ans,temp);
  //included
  temp.push_back(arr[index]);
  subset(arr,index+1,n,ans,temp);
}
int main(){
  int arr[]={1,2,3};
  vector<vector<int>>ans;
  vector<int>temp;
  subset(arr,0,3,ans,temp);
  for(auto vec:ans){
    cout<<"{ ";
    for(auto c:vec){
      cout<<c<<" ";
    }
    cout<<"}"<<endl; 
  }
}