#include<iostream>
using namespace std;
int minEle(int arr[],int n,int index){

  if(index==n-1){
    return arr[index];
  }

  return min(arr[index],minEle(arr,n,index+1));

}  
int main(){
  int n,index;
  int arr[]={5,3,9,4,2,7};
  cout<<"Min element:"<<minEle(arr,6,0);

}