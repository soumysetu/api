#include <iostream>
using namespace std;
int plusfunc(int x,int y){
    return x+y;
}
double plusfunc(double x,double y){
    return x+y;
}
int main(){
    int mynum1 = plusfunc(8,5);
    double mynum2 = plusfunc(4.3,6.26);
    cout<<"int:"<<mynum1<<"\n";
    cout<<"double:"<<mynum2<<"\n";

return 0;
}