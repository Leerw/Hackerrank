#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    std::map<int, int> map;
    for (auto i = ar.begin(); i != ar.cend(); i++) {
        auto search = map.find(*i);
	if (search == map.end()) {
            map.insert(make_pair(*i, 1));
	} else {
            map[*i] += 1;
	}
    }
    int sum = 0;
    for (std::map<int, int>::iterator ii = map.begin(); ii != map.end(); ++ii) {
        sum += (*ii).second / 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
