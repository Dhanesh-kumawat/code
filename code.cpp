#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <stack>
#include <string>

using namespace std;

int main(){
  vector<int>arr = {3,1,0,8,6};

  stack<int>s;
  vector<int>ans(arr.size(),0);

  for(int i=0; i<arr.size();i++){
    while(s.size()>0 && s.top() >= arr[i]){
      s.pop();
    }
    if(s.empty()){
      ans[i]=-1;
    }else{
      ans[i]= s.top();
    }

    s.push(arr[i]);
  }

 //print the answer
 for(int val : ans){
  cout<<val<<" ";
 }
 cout<<endl;
 
  return 0; 
}