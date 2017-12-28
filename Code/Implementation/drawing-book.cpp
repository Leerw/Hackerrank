#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int result1 = 0;
    int result2 = 0;
    if (p % 2 == 0) {
        result1 = p / 2;
        result2 = (n % 2 == 0) ? (n - p) / 2 : (n - 1 - p) / 2;
    } else {
        result1 = (p - 1) / 2;
        result2 = (n % 2 == 0) ? (n - p + 1) / 2 : (n - p) / 2;
    }
    return result1 > result2 ? result2 : result1;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
