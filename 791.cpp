#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, a1, b1;
    cin >> a >> b;
    int count=0;
    while(a<=b){
        a=3*a;
        b=2*b;
        count++;
    }
    cout << count << endl;
    
}