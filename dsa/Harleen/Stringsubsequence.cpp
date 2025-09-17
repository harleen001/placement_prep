#include <bits/stdc++.h>
using namespace std;

void printSortedSubstrings(const string &s) {
    int n = s.size();
    vector<string> subs;

    // Step 1: generate all substrings
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            subs.push_back(s.substr(i, len));
        }
    }

    // Step 2: sort them lexicographically
    sort(subs.begin(), subs.end());

    // Step 3: print
    for (auto &str : subs) {
        cout << str << " ";
    }
    cout << endl;
}

int main() {
    string s = "abc";
    printSortedSubstrings(s);
    return 0;
}
