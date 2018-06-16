#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    // Complete this function
    int result = 0;
    for (int ar_i = 0; ar_i < n - 1; ar_i++) {
        for (int ar_j = ar_i + 1; ar_j < n; ar_j++) {
            if ((ar[ar_i] + ar[ar_j]) % k == 0) {
              result++;  
            }
        }
    }
    return result;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
