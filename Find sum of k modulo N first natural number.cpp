#include<bits/stdc++.h>
using namespace std;
int findSum(int N,int K)
{
    int ans=0;
    for(int i=1;i<=N;i++)
    {
        ans += (i%K);
    }
    return ans;
}
int main()
{
     int N = 10, K = 2;
    cout << findSum(N, K) << endl;
    return 0;
}
