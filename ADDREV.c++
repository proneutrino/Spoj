#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int reversenum(int n)
{
    int remainder;
    int number=0;
   while(n!=0)
   {
       remainder=n%10;
       number=number*10+remainder;
       n/=10;
   }
   return number;
}
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d%d",&x,&y);
       int z=reversenum(x)+reversenum(y);
       printf("%d\n",reversenum(z));
    }
}
