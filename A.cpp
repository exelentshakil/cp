#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

void solve(int t) {
    int x, y, z; 
    int problems = 0;
    while ( t--) {
        cin >> x; cin >> y; cin >> z;
        x + y + z == 3 || x + y + z == 2 ? problems++ : 0;
    }

    cout << problems << endl;
}

int main() {
    fastio; 
    int t; cin >> t;
    solve(t);
    // while (t--)
    // {
    //     solve();
    // }
    
    return 0;
}