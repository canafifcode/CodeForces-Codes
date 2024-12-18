#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin >> y;
    int a, b, c, d;
    while(true){
        y=y+1;
        a= y%10;
        b=(y/10)%10;
        c=(y/100)%10;
        d=y/1000;
        if(a!=b && b!=c && c!=d && d!=a && b!=d && a!=c) break;
    }
    cout << y << endl;
}