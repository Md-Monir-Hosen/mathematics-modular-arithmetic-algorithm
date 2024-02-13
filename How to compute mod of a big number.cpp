#include<bits/stdc++.h>
using namespace std;
int mod(string s,int a)
{
 int res=0;
 for(int i=0;i<s.length();i++)
 {
     res=(res*10+s[i]-'0')%a;
 }
 return res;
}
int main()
{
     string num = "12316767678678";
    cout << mod(num, 10);
    return 0;
}
