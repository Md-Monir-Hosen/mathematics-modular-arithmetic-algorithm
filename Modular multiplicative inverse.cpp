#include<bits/stdc++.h>
using namespace std;
int modInverse(int a,int m)
{
    for(int i=1;i<m;i++)
    {
      if(((a%m)*(i%m))%m==1)
      {
          return i;
      }
    }
}
int main()
{
     int A = 3, M = 11;
    cout << modInverse(A, M);
    return 0;
}
