#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char j;
    int n= s.size();
    int upper=0, lower=0;

    for(int j=0; j<n; j++){
        if(s[j]>= 'A'&& s[j]<='Z'){
            upper++;
        }
        else{
            lower ++;
        }
    }
    if (upper>lower){
        for(int i=0; i <n; i++){
        j= toupper(s[i]);
        cout << j;
        }
    }
    else{
        for(int i=0; i <n; i++){
        j= tolower(s[i]);
        cout << j;
        }
    }
    
    return 0;

}