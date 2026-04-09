#include<iostream>
using namespace std;

int GCD(int a,int b){
  if(b==0){
    return a;
  }
  return GCD(b,a%b);
}

int main(){
  int a;
  cout<<"Enter First Number"<<endl;
  cin>>a;
  int b;
  cout<<"Enter Second Number"<<endl;
  cin>>b;
  
  cout<<"Here is the GCD of "<<a<<" and "<<b<<" is: "<<GCD(a,b)<<endl;
  

}