#include<iostream>
using namespace std;
int main()
{
    int myvar1=45;
    int myvar2=45;
    string mystring = "hello";
    char mychar ='d';
    int &myrefvar = myvar1;
    int *myvarptr = &myvar1;
    string &myrefstring = mystring;
    string *mystringptr = &mystring;
    char &myrefchar = mychar;
    char *mycharptr = &mychar;
    cout<<myvar1<<endl<<myvar2<<endl;
    cout<<mystring<<mychar<<endl;
    cout<<myrefchar<<myrefstring<<myrefvar<<endl;
    cout<<*mycharptr<<*mystringptr<<*myvarptr<<endl;

}