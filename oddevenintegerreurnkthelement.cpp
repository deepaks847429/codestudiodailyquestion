#include <bits/stdc++.h> 
int findInteger(int n, int k) {
    int oddCount = (n + 1) / 2;
    if (k <= oddCount) {
        return 2 * k - 1;
    } else {
        return 2 * (k - oddCount);
    }
}
