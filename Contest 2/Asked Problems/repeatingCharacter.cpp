// https://www.hackerrank.com/contests/ppp-coding-2/challenges/repeating-character/submissions/code/1357350077

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    maxLength = max(maxLength, currentLength);
    cout << maxLength << endl;

    return 0;
}

