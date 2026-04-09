#include<iostream>
using namespace std;

void print(int n,int N){
  if(n==N){
    cout<<n<<endl;
    return;
  }
  else{
    cout<<n<<endl;
    print(n+1,N);
  }
}

int main(){
  int n;
  cout<<"Enter Number"<<endl;
  cin>>n;
  print(1,n);
  return 0;
}