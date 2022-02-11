#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter the lenth width of pattern"<<endl;
    cin>>row>>col;
for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
        
    }

    //pattern 2
    for (int i = 0; i < row; i++)
    {
        for (int j = col; j > i; j--)
        {
            cout<<" "<<i;
        }
        cout<<"\n";
        
    }
    for (int i = row; i >0; i--)
    {
        for (int j = col; j > i; j--)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
        
    }
    return 0;
}
    