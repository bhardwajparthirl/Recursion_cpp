#include<iostream>
using namespace std;

int sum(int arr[],int index,int n){

    if(index==n){
      return 0;
    }

    return arr[index]+sum(arr,index+1,n);

}


int main(){
  int index,n;
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  
  cout<<"Answer:"<<sum(arr,0,10)<<endl;
}
