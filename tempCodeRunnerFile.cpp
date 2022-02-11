#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mon,exp,defeated=0;
    cin>>mon>>exp;

    int bonus[mon],power[mon];
    for (int i = 0; i < mon; i++)
    {
        cin>>power[i];
    }
    for(int i=0;i<mon;i++)
    cin>>bonus[i];
     
     int n= INT_MAX;
    for (int i = 0; i < mon; i++)
    {

        for (int j = 0; j < mon; j++)
         if (exp>=power[j])
            {
                defeated++;
                power[j]=n;
                exp+=bonus[j];
            }
             
        
    }
    cout<<"\n"<<defeated;

    return 0;
    
    
}
