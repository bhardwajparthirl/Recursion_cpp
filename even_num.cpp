#include<iostream>
using namespace std;


void Even(int n){

  if(n==2){
    cout<<2<<endl;
    return;
  }
  else{
    
      Even(n-2);
      cout<<n<<endl;
    
  }


}




int main(){

  int n;
  cout<<"Enter Number"<<endl;
  cin>>n;
  Even(n);

}