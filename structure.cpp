#include<iostream>
 #include<string.h>
using namespace std;
typedef long long number;
struct BOOKS
{
    int id;
    char title[15];
    char author[15];
};
void printbook(BOOKS book){
    cout<<"book title: "<<book.title<<endl;
    cout<<"book author: "<<book.author<<endl;
    cout<<"book id: "<<book.id;
}

int main()
{
BOOKS book1;
number N;
bool reply;
string line1;
string firstname="gajend ";
string lastname="dubey";
string fullname= firstname.append(lastname);
   book1.id=909876;
strcpy(book1.title,"halfgirlfriend");
strcpy(book1.author,"chetan bhagat");
cout<<endl;
printbook(book1);
// cin>>N;
cout<<"\n do you want run again?";
// cin>>reply;
cout<<"\n give the feadbck"<<endl;
getline(cin, line1);
cout<<"\n"<<line1;
cout<<"\n"<<fullname;

return 0;
}