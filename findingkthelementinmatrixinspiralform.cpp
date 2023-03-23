#include <bits/stdc++.h> 
/*int findKthElement(vector<vector<int>> matrix, int k) {
    // Write your code here.
}*/
int findKthElement(vector<vector<int>> matrix, int k) {
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0, right = m - 1, top = 0, bottom = n - 1;
    int count = 0;

    while (left <= right && top <= bottom) {
        // Traverse right
        for (int j = left; j <= right; j++) {
            count++;
            if (count == k) {
                return matrix[top][j];
            }
        }
        top++;

        // Traverse down
        for (int i = top; i <= bottom; i++) {
            count++;
            if (count == k) {
                return matrix[i][right];
            }
        }
        right--;

        // Traverse left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                count++;
                if (count == k) {
                    return matrix[bottom][j];
                }
            }
            bottom--;
        }

        // Traverse up
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                count++;
                if (count == k) {
                    return matrix[i][left];
                }
            }
            left++;
        }
    }

    // Kth element not found
    return -1;
}
