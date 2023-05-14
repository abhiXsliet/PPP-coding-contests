//https://www.hackerrank.com/contests/ppp-coding-2/challenges/towers-for-unity

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll computeCost(ll arr[], ll N, ll X)
{
    ll cost = 0;
    for (int i = 0; i < N; i++)
        cost += abs(X-arr[i]);
    return cost;
}


ll minCostToMakeElementEqual(ll arr[], ll N)
{
    ll low, high;
    low = high = arr[0];

    for (ll i = 0; i < N; i++) {
        if (low > arr[i])
            low = arr[i];
        if (high < arr[i])
            high = arr[i];
    }


    while ((high - low) > 2) {
        ll  mid1 = low + (high - low) / 3;
        ll mid2 = high - (high - low) / 3;

        ll cost1 = computeCost(arr, N, mid1);
        ll cost2 = computeCost(arr, N, mid2);

        if (cost1 < cost2)
            high = mid2;

        else
            low = mid1;
    }
    return computeCost(arr, N, (low + high) / 2);
}


int main()
{
    ll N;
    cin>>N;
    ll arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout << minCostToMakeElementEqual(arr, N);
    return 0;
}