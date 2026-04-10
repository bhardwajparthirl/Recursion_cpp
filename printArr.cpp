#include<iostream>
using namespace std;

void print(int index,int arr[]){
  if(index==-1){
    return;
  }
  print(index-1,arr);
  cout<<arr[index]<<endl;

}

int main(){
  int index;
  cout<<"Enter Index"<<endl;
  cin>>index;
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  if(index>=10){
    cout<<"Invalid Index"<<endl;
    return 0;
  }

  print(index,arr);



}