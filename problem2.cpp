//B. Reading
//Problem link-https://codeforces.com/contest/234/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n,k;
    cin>>n>>k;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
       v1.push_back(x);
       v2.push_back(x);
    }
    sort(v1.rbegin(),v1.rend());
    int x=v1[k-1];
    cout<<x<<endl;
    int count=0;
    for(int i=0;i<n;i++)
    {
        //int count=0;
        if(v2[i]>=x&&count<k)
        {
            cout<<i+1<<" ";
            count++;
        }

    }
    cout<<endl;
}

