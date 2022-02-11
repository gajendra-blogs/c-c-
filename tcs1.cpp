#include<iostream>
using namespace std;
int main()
{
    int a[]={101,102,103,104};
    //  char n[4]={"milk","cheese","ghee","bread"};
    int p[]={40,50,500,30};
    int s[]={10,30,30,50};
    int num,qty;
    int c=0;
    cin>>num>>qty;
    
    for (int i = 0; i < 4; i++)
    { 
      if (num==a[i])
      {
         if (qty<=s[i])
         {
            float total=p[i]*qty;
            int left=s[i]-qty;
            cout<<total<<" INR"<<endl;
            cout<<left<<" LEFT";
         }
         else
         {
            cout<<"OUT OF STOCK"<<endl;
            cout<<s[i]<<" LEFT";
         }
         
          c+=1;
      }
        
    }
    if (c==0)
    {
        cout<<"INVALID INPUT";
    }
    
    return 0;
    
}