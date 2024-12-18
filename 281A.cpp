#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n= s.size();

    for(int i=0; i<n ; i++)
    {
        if(i==0){
            s[i]=toupper(s[i]);
        }
        else{
            s[i]=s[i];
        }
    }
    
    cout << s;
    return 0;
}