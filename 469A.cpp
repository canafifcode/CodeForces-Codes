#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p, q, x, y;
    cin >> p;
    set<int> px;
    for(int j=0; j<p; j++){
        cin >> x;
        px.insert(x);
    }
    cin>>q;
    for(int k=0; k<q; k++){
        cin >> y;
        px.insert(y);
    }
    if(px.size()==n) cout << "I become the guy."<< endl;
    else cout << "Oh, my keyboard!"<< endl;

    return 0;
}