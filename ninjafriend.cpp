#include <bits/stdc++.h> 
int shakeHands(vector<int> &friends ,int n, int k)
{
    // Write your code here.
    int value=k;
    for (int i = 0; i < n; i++) {
      if (friends[i] == value) {
      value=value*2;
      
      }
    }
    return value;
}
