#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int result = 0;
    int tempSum;
    for (int i = 0; i <= s.size() - m; i++) {
        tempSum = 0;
        for (int j = i; j < i + m; j++) {
            tempSum += s[j];
        }
        if (tempSum == d) {
            result++;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

