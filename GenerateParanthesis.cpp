#include<iostream>
#include<vector>
using namespace std;

void gen(int n, int left, int right, vector<string>& ans, string &temp){

  if(left + right == 2 * n){
    ans.push_back(temp);
    return;
  }

  if(left < n){
    temp.push_back('(');
    gen(n, left + 1, right, ans, temp);
    temp.pop_back();
  }

  if(right < left){
    temp.push_back(')');
    gen(n, left, right + 1, ans, temp);
    temp.pop_back();
  }
}

int main(){
  int n;
  cout << "Enter number" << endl;
  cin >> n;

  vector<string> ans;
  string temp = "";

  gen(n, 0, 0, ans, temp);

  for(auto s : ans){
    cout << s << endl;
  }
}