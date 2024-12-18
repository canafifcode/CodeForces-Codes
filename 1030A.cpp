#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    int sum=0;
    for(int i=0; i<n; i++){
    cin >> x;
    sum=sum +x;
    }
    if (sum==0){
        cout<< "EASY" <<endl;
    }
    else{
        cout << "HARD" << endl;
    }
    
}