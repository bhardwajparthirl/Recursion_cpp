#include<iostream>
using namespace std;

bool palin(string str,int start,int end){
  if(start>=end){
    return 1;
  }

  if(str[start]!=str[end]){
    return false;
  }
  else
  return palin(str,start+1,end-1);

}


int main(){
  string str="naman";
  int n=str.length();
  int start,end;
  cout<<palin(str,0,n-1);

}