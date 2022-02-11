#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    int a,diff;
    cin>>n;
    a=6;
    diff=22;
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<a<<" ";
            a+=diff;
            diff+=16;
        }
        cout<<endl;
    }
    return 0;
}