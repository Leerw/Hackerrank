#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function、
    if (year == 1918) {
        return "26.09.1918";
    } else if (year < 1918) {
        if (year % 4 == 0) {
            // leap year
            string result = "12.09.";
            result.append(to_string(year));
            return result;
        } else {
            string result = "13.09.";
            result.append(to_string(year));
            return result;
        }
    } else {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            string result = "12.09.";
            result.append(to_string(year));
            return result;
        } else {
            string result = "13.09.";
            result.append(to_string(year));
            return result;
        }
    }
    // find out whether this year is leap year
    
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
