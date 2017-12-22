#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    double positive = 0;
    double negative = 0;
    double zero = 0;
    for (int arr_i = 0; arr_i < n; arr_i++) {
        if (arr[arr_i] > 0) {
            positive++;
        } else if (arr[arr_i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    printf("%6f\n", positive / n);
    printf("%6f\n", negative / n);
    printf("%6f", zero / n);
    return 0;
}
