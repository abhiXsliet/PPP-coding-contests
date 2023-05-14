// https://www.hackerrank.com/contests/ppp-coding-2/challenges/dragon-ride-calculation

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int count = 0;
    int i = 0;
    int j = n - 1;
    while (i <= j) {
        if (v[i] + v[j] <= x) {
            i++;
        }
        j--;
        count++;
    }
    cout << count << endl;
    return 0;
}
