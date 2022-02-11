#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter the width of the pattern";
    cin>>row>>col;
    // pattern 3
    for (int i = 1; i <=row ; i++)
    {
        for (int j = 1; j <=col; j++)
        {
            if (j<=col-i)
            {
                cout<<" ";
            }else
            {
                cout<<" *";
            }
            
            
        }
        cout<<endl;
        
    }
     // pattern 4
    for (int i = row; i >=1; i--)
    {
        for (int j = col; j >=1; j--)
        {
            if (j<=col-i)
            {
                cout<<" ";
            }else
            {
                cout<<"* ";
            }
            
            
        }
        cout<<endl;
        
    }
    return 0;
    
}
