#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
// Gobardhan Meher

void solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;

    int cta =0, ctb = 0;
    for(auto i : a){
        if(i == '1') cta += 1;
    }

    for(auto i : b){
        if(i == '1') ctb += 1;
    }

    if(cta == ctb) cout << "YES" << nline;
    else cout << "NO" << nline;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}

