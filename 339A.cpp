#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n= s.size();
    string m;
    for(int i=0; i<n; i++){
        if(i%2==0){
            sort(s.begin(), s.end());
            m[i]=s[i];
            cout << m[i];
        }
        else{
            cout << "+";
        }
    }
    
}