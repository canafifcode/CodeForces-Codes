#include<bits/stdc++.h>
using namespace std;

void judge(){
    char s1[101];
    char s2[101];
    char s3[101];

    cin >> s1 >> s2 >> s3;
    cout << s1[0] << s2[0] << s3[0] << endl;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        judge();
    }
    return 0;
}