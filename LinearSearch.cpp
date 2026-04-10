#include<iostream>
using namespace std;

int Linear(int arr[],int index,int n,int target){
  if(index==n){
    return 0;
  }

  if(arr[index]==target){
    return 1;
  }
 return Linear(arr,index+1,n,target);


}


int main(){

  int arr[]={5,9,2,4,3};
  int n=5;
  int target,index;
  cout<<"Enter target"<<endl;
  cin>>target;
  cout<<Linear(arr,0,n,target);

 }