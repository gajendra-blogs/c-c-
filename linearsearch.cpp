#include<iostream>
using namespace std;
int main()
{
    int x, n, a[10];
    cout<<"\n enter size of the array and the array";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    char choise  = 'y';
    while (choise=='y')
    {
    cout<<"\n enter the element to be searched";
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if(x==a[i])
        {
            cout<<"\n"<<x<<" is found at the position "<<i+1;
            break;
        }
    }
    cout<<"\n do you want to search a no. again? (y/n)";
    cin>>choise;

    }
    return 0;
    
}