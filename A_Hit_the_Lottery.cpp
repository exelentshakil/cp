#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

// bills: 1, 5, 10, 20, 100
// 125

void solve(int t) {
    vector<int> bills = {100, 20, 10, 5, 1};
    int billCount = 0;

    while(t > 0) {
        for ( auto bill : bills) {
            billCount++;
            cout << "Left: " << t << ", Bill: "<< bill<< ", Count: " << billCount<<endl;
            t = t % bill;

            if ( t == 0 ) continue;
        }
    }

    cout << billCount << endl;
}

int main() {
    fastio;
    int t; cin >> t;
    solve(t);
    return 0;
}