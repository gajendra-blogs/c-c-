#include <iostream>
using namespace std;
int main()
{
    int a[101],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int f[n];
    
    for (int i = 0; i < n; i++)
        if (a[i]%10!=0)
        {
            cout<<a[i]<<" ";
        }

    for (int i = 0; i < n; i++)
    if (a[i]%10==0)
    {
        cout<<a[i]<<" "; 
    }
    
    return 0;   
}