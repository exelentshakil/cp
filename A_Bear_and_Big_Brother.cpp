#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

// 4, 9
// Step 1
// 12 18
// Step 2
// 36 36
int solve(int limak, int bob) 
{
    int year = 0;
   
    if ( limak > bob ) return year;
    year++;
    year += solve(limak * 3 , bob * 2);

    return year;
}

int main() {
    fastio;
    int limak, bob; cin >> limak; cin >> bob;
    int year = solve(limak, bob);
    
    cout << year << endl;
     
    return 0;
}