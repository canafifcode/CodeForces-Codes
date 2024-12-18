#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k, n, w, t;
    cin >> k >> n >> w;
    long long s;
    s= w*(w+1)*k/2;
    if(s>n){
        t=s-n;
        cout << t << endl;
    }
    else{
        cout << "0" << endl;
    }
    
}