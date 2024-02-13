#include<bits/stdc++.h>
using namespace std;
int gcdExtend(int a,int b,int *x,int *y)
{
    if(a==0)
    {
     *x=0;
     *y=1;
     return b;
    }
    int x1,y1;
    int gcd=gcdExtend(b%a,a,&x1,&y1);
    x1=y1-(b/a)*x1;
    y1=x1;
    return gcd;
}
int modInverse(int a,int b)
{
  int x,y;
  int g=gcdExtend(a,b,&x,&y);
  if(g!=1)
  {
      return -1;
  }
  return (x%b+b)%b;
}
void modDivide(int a,int b,int m)
{
   a=a%m;
   int Inv=modInverse(b,m);
   if(Inv==-1)
   {
        cout << "Division not defined";
   }
   else
   {
        cout << "Result of division is " << (Inv * a) % m;
   }
}
int main()
{
     int  a  = 8, b = 3, m = 5;
    modDivide(a, b, m);
    return 0;
}
