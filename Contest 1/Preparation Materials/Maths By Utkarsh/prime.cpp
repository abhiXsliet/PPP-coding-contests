//https://www.youtube.com/watch?v=tDM6lT-qjys

#include<bits/stdc++.h>
using namespace std;

int cnt_div(int n) {

    int cnt = 0;
    // //time complexity => O(n)
    // for(int i=1; i<=n ; i++) {
    //     if(n%i == 0) {
    //         cnt++;
    //     }
    // }
    // cout << cnt << endl;

    //Time complexity => O(root n)
    for(int i=1; i*i<=n ; i++) {
        if(n%i == 0) {
            cnt++; // i is a factor

            if(i != n/i)
                cnt++; //(n/i) is also a factor
        }
    }
    cout << cnt << endl;
}

int main() {
    int n; 
    cin >> n;

    // cnt_div(n);

    vector<int> div(n+1);
    for(int i=1; i<=n; i++) {
        for(int j =i; j<=n; j+=i) {
            div[j]++; //i is a divisor of j
        }
    }

    for(int i=1; i<=n; i++) {
        cout << div[i] << "\n";
    }

}

//SIEVE OF ERATOSTHENES

