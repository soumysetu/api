#include <iostream>
using namespace std;
void myfunc(string cou = "norway"){
    cout<<cou<<endl;
}
int main(){
    myfunc("sweden");
    myfunc("india");
    myfunc();
    myfunc("usa");
return 0;
}