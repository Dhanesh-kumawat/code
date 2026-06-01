#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <stack>
#include <string>

using namespace std;

int main(){
  vector<int>price= {100,80,60,70,60,75,85};

  vector<int>ans(price.size(),0);

  stack<int>s; /// this stack is for store the previous high value from any current stock price:

  for(int i=0;i<price.size();i++){
    while(s.size() >0 && price[s.top()] <= price[i]){
      s.pop();
    }

    if(s.empty()){
      ans[i] = i+1;
    }else{
      ans[i] =i-s.top();// i-prevHigh
    }
    s.push(i);
  }
  
  //print ans values
  for(int val : ans){
    cout<<val<<" ";
  }
  cout<<endl;

  return 0;
}