#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    // Complete this function
    int result = 0;
    int crtLvl = 0;
    for (int i = 0; i < n; i++) {
        if (s.at(i) == 'U') {
            crtLvl += 1;
            if (crtLvl == 0) {
                result += 1;
            }
        } else {
            crtLvl -= 1;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}
