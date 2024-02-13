#include<bits/stdc++.h>
using namespace std;
const int Max=1000000;
vector <int>primes;
void sieveSundaram()
{
   bool marked[Max/2+1]={0};
    for(int i=1;i<=(sqrt(Max)-1)/2;i++)
    {
        for(int j=(i*(i+1))<<1;j<=Max/2;j+=2*i+1)
        {
         marked[j]=true;
        }
    }
    primes.push_back(2);
    for(int i=1;i<=Max/2;i++)
    {
        if(marked[i]==false)
        {
         primes.push_back(2*i+1);
        }
    }
}
int calculatePrimorial(int n)
{
    int result=1;
    for(int i=0;i<n;i++)
    {
        result=result*primes[i];
    }
    return result;
}
int main()
{
     int n = 5;
    sieveSundaram();
    for (int i = 1 ; i<= n; i++)
        cout << "Primorial(P#) of " << i << " is "
            << calculatePrimorial(i) <<endl;
    return 0;
}
