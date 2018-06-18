/** 01 pack problem
 * for B[i] in B:
 *      A[i] = 1 or B[i];
 **/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, b;
    int sum = 0;
    cin >> t;
    while (t--) {
        cin >> b;
        int ab[b];
        int dp[b][2] = { { 0, 0 } };
        for (int i = 0; i < b; i++)
            cin >> ab[i];
        for (int i = 1; i < b; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + abs(ab[i - 1] - 1));
            dp[i][1] = max(abs(ab[i - 1] - ab[i]) + dp[i - 1][1],
                abs(ab[i] - 1) + dp[i - 1][0]);
        }
        cout << max(dp[b - 1][0], dp[b - 1][1]) << endl;
    }
    return 0;
}