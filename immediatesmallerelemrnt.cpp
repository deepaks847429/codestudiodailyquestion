#include <bits/stdc++.h> 
int* immediateSmaller(int* arr, int n) {
    int* result = new int[n];  // Allocate memory for the result array
    for (int i = 0; i < n; i++) {
        if (i < n-1 && arr[i+1] < arr[i]) {
            result[i] = arr[i+1];
        } else {
            result[i] = -1;
        }
    }
    return result;
}
