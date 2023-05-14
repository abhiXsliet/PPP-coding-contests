//https://www.hackerrank.com/contests/ppp-1-1676481916/challenges/maximum-gap-2


#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int size){
    int mini = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }

        // mini = min(mini, arr[i]);
    }
    return mini;
}

int getMax(int arr[], int size){
    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }

        // maxi = max(maxi, arr[i]);
    }
    return maxi;
}


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << getMax(a, n) << " ";
    cout << getMin(a, n);   
    
    return 0;
}