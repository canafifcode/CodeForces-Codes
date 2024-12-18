#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y, a, b, c;
    a=1; b=2; c=3;
    cin >> x >> y;
    if(x==1 && y==2|| x==2 && y==1){
        cout<< "3" << endl;
    }
    else if(x==1 && y==3|| x==3 && y==1){
        cout<< "2" << endl;
    }
    else{
        cout << "1" << endl;
    }

}