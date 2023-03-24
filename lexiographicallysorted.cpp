#include <bits/stdc++.h> 
using namespace std;

int countColumns(vector<string> &strings) {
    int n = strings.size();
    int m = strings[0].size();
    int count = 0;
    for (int j = 0; j < m; j++) {
        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (strings[i][j] < strings[i-1][j]) {
                sorted = false;
                break;
            }
        }
        if (!sorted) {
            count++;
        }
    }
    return count;
}
