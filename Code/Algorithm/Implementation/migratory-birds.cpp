#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int cnt[6];
    memset(cnt, 0, sizeof cnt);
    int result = 0;
    for (int ar_i = 0; ar_i < n; ar_i++) {
        cnt[ar[ar_i]]++;
    }
    for (int i = 1; i < 6; i++) {
     if (cnt[i] > cnt[result]) {
         result = i;
     }   
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
