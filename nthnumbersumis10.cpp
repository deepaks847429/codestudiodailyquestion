#include <bits/stdc++.h> 
/*long long nthNumberWithSum10(long long n)
{
   
}*/
long long nthNumberWithSum10(long long n) {
    int cnt = 0;
    for (long long i = 1; i <=1000000000LL; i++) {
        int sum = 0;
        long long num = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum == 10) {
            cnt++;
            if (cnt == n) {
                return i;
            }
        }
    }
    return -1;
}
