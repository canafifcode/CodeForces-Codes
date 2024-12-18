#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool balanced(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
    if(s[i]=='(') {st.push(s[i]);}
    else{
    if(!st.empty()&&(s[i]==')' && st.top()=='(')) st.pop();
    else{
        return false;
        }
      }
    }
    return st.empty();
}
int main(){
    string s;
        cin>> s;
        if(balanced(s)) cout << "Yes"<< endl;
        else cout << "No" << endl;
}