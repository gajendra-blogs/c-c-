#include<iostream>
using namespace std; 
int fact(int k)
{   int p=k;
    if (k>1)
    {
        fact(p)=p*fact(p-1);
        return fact(k);
    }
    else
    {
         return 1;
    }
    
    
}
int main(){
      int n;
      cout<<"enter the no to find factorial"<<endl;
      cin>>n; 

}
