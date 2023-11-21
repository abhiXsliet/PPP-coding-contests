// https://leetcode.com/problems/defanging-an-ip-address/



#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // TC = O(N)
    // SC = O(N)
    string solve_better(string address, int n) {
        queue<char> que;
        
        for(char& ch : address)
            que.push(ch);

        // empty the address to insert the updated string
        address = "";

        while(!que.empty()) {
            char ch = que.front();
            if (ch == '.'){
                address += '[';
                address += '.';
                address += ']';
            }
            else {
                address += ch;
            }
            que.pop();
        }

        return address;
    }

    // TC = O(N)
    // SC = O(1) but O(N) -> to return answer 
    string solve_optimal(string& address, int n) {
        string temp = "";

        for (int i = 0; i < n; i++) {
            if (address[i] == '.') {
                temp += "[.]";
            }
            else temp.push_back(address[i]);
        }

        return temp;
    }
public:
    string defangIPaddr(string address) {
        // return solve_better(address, address.size());

        return solve_optimal(address, address.size());
    }
};