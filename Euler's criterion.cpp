#include<bits/stdc++.h>
using namespace std;
bool squareRootExists(int n,int p)
{
    n=n%p;
    for(int i=2;i<p;i++)
    {
        if((i*i)%p==n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
     int p = 7;
   int n = 2;
   squareRootExists(n, p)? cout << "Yes": cout << "No";
   return 0;
}
