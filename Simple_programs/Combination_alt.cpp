#include<iostream>
using namespace std;
int fact(int n)
{
   int f=1;
   for (int i = 2; i <=n; i++)
   {
        f*=i;
   }
   return f;
}
int main()
{
    int n,r,ncr;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"Enter value of r:";
    cin>>r;
    ncr=fact(n)/(fact(r)*fact(n-r));
    cout<<ncr;
    return 0;
}