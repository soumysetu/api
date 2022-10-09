#include <iostream>
using namespace std;
void callswap(int &n1,int &n2){
    int temp;
    temp = n1;
    n1=n2;
    n2= temp;
    cout << &n1<<endl;
    cout << &n2<<endl;
}
int main(){
    int num1=5,num2=6;
    cout << "before = "<< num1<<num2<<endl;
    cout << "num1"<< &num1<<endl;
    cout << "num2"<<&num2<<endl;
    callswap(num1,num2);
    cout <<"after = "<< num1<<num2<<endl;
return 0;
}