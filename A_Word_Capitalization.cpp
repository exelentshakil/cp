#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

void solve() {
    // Your code goes here
}

int main() {
    fastio;
    string t; cin >> t;
    char first = toupper(t[0]);
    string second;
    for ( int i=1; i < t.length(); i++ ) {
        second += t[i];
    }

    cout << first + second << endl;
    
    return 0;
}