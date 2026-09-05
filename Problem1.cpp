//Problem-B. Lazy Security Guard
//Problem link-https://codeforces.com/contest/859/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n;
   cin>>n;
   double root=sqrt(n);
   int  mainroot=ceil(root);


   double vagfol=n/mainroot;
   int  mainvagfol=ceil(vagfol);

   int  ans=2*(mainroot+mainvagfol);
   cout<<ans<<endl;
}


