#include<iostream>
using namespace std;
int main(){
    long long num;
    int serch,count=0;
    int i=0;
    cout<<"enter the number: "<<endl;
    cin>>num;
    cout<<"enter digit to search"<<endl;
    cin>>serch;
    while (num>0)
    {
        int digit=(num%10);
        if (digit==serch)
        {
            count++;
        }
        i++;
        num/=10;
        
    }
    cout<<count<<endl;
    cout<<i;
    return 0;
    
}