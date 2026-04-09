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
//By one arugment
void printONE(int n){
  if(n == 1){
  cout << 1 << endl;
  return;
  }

  printONE(n-1);
  cout <<n<< endl;
}

int main(){
  int n;
  cout<<"Enter Number"<<endl;
  cin>>n;
  print(1,n);
  printONE(n);
  return 0;
}


