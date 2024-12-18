#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, temp;
    x=0;
    cin >> n;
    int count=0;
    temp=0;
    for(int i=0; i<n ; i++){
        temp=x;
        cin >> x;
        if(x>temp){
            count++;
        }
        else{
            count= count;
        }
    }
    cout << (count-1);
}