#include<iostream> 
using namespace std;
class IndiaBix
{
    int x, y; 
    public:
    IndiaBix(int xx)
    {
        x = ++xx;
    } 
    ~IndiaBix()
    {
        cout<< x - 1 << " ";
    }
    void Display()
    {
        cout<< --x + 1 << " ";
    } 
};
int main()
{
    IndiaBix objBix(5);
    objBix.Display();
    int *p = (int*) &objBix;
    *p = 40;
    objBix.Display();
    return 0; 
}