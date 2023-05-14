//https://www.hackerrank.com/contests/ppp-coding-4/challenges/picking-numbers


#include <bits/stdc++.h>
using namespace std;

int solve(int *arr, int n) {

    sort(arr, arr+n);

    int x = arr[0];

    for(int i=1; i<n; i++) {
        if((arr[i]-x)<=0) {
            
        }
        else
        {

        }
    }

}

int main() {

    int n;
    cin >> n;
    int arr[n] ;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    solve(arr, n);
}