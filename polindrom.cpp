#include<iostream>
using namespace std;
int main()
{
    int num;
    int rvrs=0;
    int orgnl=num;
    cout<<"enter the no :"<<endl;
    cin>>num;
    while (num>0)
    {
        int lastdig=(num%10);
        rvrs=(rvrs*10 + lastdig);
        num/=10;
    }
    
    if (orgnl==rvrs)
    {
        cout<<"the number is polindrom number"<<endl;
    }
    else
    {
        cout<<"the number is not polindrom"<<endl;
    }
    
    return 0;
    
}