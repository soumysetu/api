#include <iostream>
using namespace std;
int main(){
    int myvar =100;
    int *ptr;
    ptr=&myvar;
    cout << &myvar<<endl;
    cout << ptr<<endl;
    cout << *ptr<<endl;
    cout << &ptr;

return 0;
}