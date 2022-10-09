// write cpp code to demonstrate call by value call by ref and sending the add of variable using diff func
// declare 1 var type int and 1 var of type string 
// and for both var use call by value call by ref and pointer statement
#include <iostream>
using namespace std;
void callbyptr(int *x){
    cout<<*x;
}
void callbyref(int &x){
    cout<<x;
}
void callbyvalue(int x){
    cout<<x;
}
int main(){
    int var = 54;
    string mystring = "hello";
    callbyref(var);
    callbyptr(&var);
    cout<<var<<endl;
return 0;
}