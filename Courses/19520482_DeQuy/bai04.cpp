#include <bits/stdc++.h>

using namespace std;
int tich(int n)
{
    if ((n==1)) return 1;
    else
        return (n*tich(n-1));
}
int main()
{
    int n;cin >>n;
    cout <<tich(n);
}
