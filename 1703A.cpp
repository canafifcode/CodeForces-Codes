#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s=="YES"|| s=="yES"|| s=="YeS"|| s=="YEs"|| s=="yeS"|| s=="Yes"|| s=="yEs"|| s=="yes"){
            cout<< "Yes"<< endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}