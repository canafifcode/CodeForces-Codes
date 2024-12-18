#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long a, b, c;
    for(int i=0; i<t; i++){
        cin >> a>> b >> c;
        if((a+c)>(b+c)){
            cout << "First" << endl;
        }
        else if((a+c)<(b+c)){
            cout << "Second" << endl;
        }
        else if((a+b+c)%2==0){
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
    }
}