#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// const int MOD = 1e9 + 7;
// const int INF = INT_MAX;

// greatest common devisor
int gcd(int a , int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// least common multiple
int lcm(int a, int b) {
    cout << "GCD : " << gcd(a,b) << endl;
    return (a*b) / gcd(a, b);
}


int main() {
    fastio;

    int washingTime = 30;
    int dryingTime = 45;

    // when the both process will finish together
    int syncTime = lcm(washingTime, dryingTime);

    cout << "Washing & Drying Both cycles will align after " << syncTime << endl;
    return 0;
}