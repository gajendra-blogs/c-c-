 #include"bits/stdc++.h"
// #include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    const int N=1e5+2;
    int indx[N];
    for (int i = 0; i < N; i++)
    {
        indx[i]=-1;
    }
     int minindex=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (indx[a[i]]!=-1)
        {
            minindex=min(minindex,indx[a[i]]);
        }
        else{
            indx[a[i]]=i;
        }
        
    }
    if(minindex==INT_MAX){
        cout<<"\n no any element is repeating";
    }
    else
    {
        cout<<"\n element at "<<minindex+1<<" position is first repeating element";
    }
    
    
  return 0;  
    
}
