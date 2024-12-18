#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> x(s.begin(), s.end());
    int y;
    y= x.size();
    if(y%2==0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
}