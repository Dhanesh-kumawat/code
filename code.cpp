#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <stack>
#include <string>

using namespace std;

bool isvlide(string str){

  stack<char>st;

  for(int i=0;i<str.size();i++){
    if(str[i] =='(' || str[i] == '{' || str[i] == '['){ //opening
      st.push(str[i]);
    }else{
      if(st.size()==0){ //machting the string
        return false;
      }if((st.top() == '(' && str[i]==')') ||
            (st.top()=='{' && str[i] =='}') ||
          (st.top() =='[' && str[i]==']')){
            st.pop();
          }else{
            return false;
          }
    }
  }
  return st.size() == 0;
}
int main(){
  string str ="([{])";
  // cout<<"enter the string : ";
  // cin>>str;

  cout<<isvlide(str);
  return 0;
}