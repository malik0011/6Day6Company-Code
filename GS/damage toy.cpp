#include <bits/stdc++.h>
using namespace std;

// n ==> Size of circle
// m ==> Number of items
// k ==> Initial position
int lastPosition(int n, int m, int k)
{
    
    if (m <= n - k + 1)
        return m + k - 1;


    m = m - (n - k + 1);

    return (m % n == 0) ? n : (m % n);
}

// Driver code
int main()
{
    int circleSize = 5;
    int itemNo = 8;
    int start = 2;
    cout << lastPosition(circleSize, itemNo, start);
    return 0;
}