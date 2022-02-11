#include<iostream>
using namespace std;
int main()
{    int pwr[10];
    int bonus[10];
    int mon,exp;
    int defmon=0;
    int defeated=0;
    cin>>mon;
    cin>>exp;
    for (int i = 0; i < mon; i++)
        cin>>pwr[i];
    for(int i=0;i<mon;i++)
        cin>>bonus[i];
    for (int i = 0; i < mon; i++)
    {
      for (int j = 0; j < mon; j++)
      {
          if (exp>=pwr[j])
          { exp+=bonus[j];
            defmon++;
            continue;
          }
          
      }
        
    }
    cout<<"maximum possible monster defeted is:"<<endl;
    cout<<defmon;
    
    return 0;

    
}