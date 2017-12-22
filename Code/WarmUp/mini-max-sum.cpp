#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long sum (vector<int> arr, int begin, int end) {
    // return the sum from arr[begin] to arr[end]
    long sum = 0;
    for (int arr_i = begin; arr_i <= end; arr_i++) {
        sum += arr[arr_i];
    }
    return sum;
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    std::sort(arr.begin(), arr.end());
    cout << sum(arr, 0, 3) << ' ' << sum(arr, 1, 4);
    return 0;
}
