#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b) {
    int temp;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    while (b > 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
} 

int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    int total = 0;
    int lcm = a[0];
    int gcd = b[0];
    for (int i = 1; i < a.size(); i++) {
        lcm = LCM(lcm, a[i]);
    }
    for (int i = 1; i < b.size(); i++) {
        gcd = GCD(gcd, b[i]);
    }
    // cout << "lcm is " << lcm << endl << "gcd is " << gcd << endl;
    for (int j = lcm; j <= gcd; j = j + lcm) {
        if (gcd % j == 0) {
    //        cout << j << endl;
            total++;
        }
    }
    return total;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
