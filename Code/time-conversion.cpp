#include <bits/stdc++.h>
#include <string>
using namespace std;

string timeConversion(string s) {
    // Complete this function
    size_t n = s.length();
    string stemp = s;
    if (s[n-2] == 'P') {
        // PM
        int hr = std::stoi(stemp.substr(0,2)) == 12 ? 12 : 12 + std::stoi(stemp.substr(0,2));
        const string hour = std::to_string(hr);
        stemp.replace(0, 2, hour);
        return stemp.substr(0, n-2);
    }
    else {
        // AM
        int hr = std::stoi(stemp.substr(0,2)) == 12 ? 0 : std::stoi(stemp.substr(0,2));
        const string hour = std::to_string(hr);
        if (hour.length() == 1) {
            stemp[0] = '0';
            stemp[1] = hour[0];
        } else {
            stemp.replace(0, 2, hour);
        }
        return stemp.substr(0, n-2);
    }
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
