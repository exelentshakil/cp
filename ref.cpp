#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> scores = {95, 85, 92, 88, 100, 90, 78};
    
    // 1. Sort the scores in descending order
    sort(scores.begin(), scores.end(), greater<int>());
    
    // 2. Print the top 3 scores
    cout << "Top 3 scores: ";
    for (int i = 0; i < 3; i++) {
        cout << scores[i] << " ";  // Outputs: 100 95 92
    }
    cout << endl;
    
    // 3. Count how many students scored at least 90
    int count = 0;
    for (int score : scores) {
        if (score >= 90) {
            count++;
        }
    }
    cout << "Number of students who scored at least 90: " << count << endl;

    return 0;
}
