//call by value
// code to find cube of number
#include <iostream>
using namespace std;
int cube(int num1)
{
    return num1*num1*num1;
}
void cube1(int &num1){
    num1= num1*num1*num1;
}
int main(){
    int ans,num=3;
    ans = cube(num);
    cout<<ans<<endl;
    cube1(num);
    cout<<num;
return 0;
}