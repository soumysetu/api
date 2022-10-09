#include <iostream>
using namespace std;
float add(float a,float b);
float subst(float a,float b);
float multi(float a,float b);
float divide(float a,float b);
int main(){
    int select;
    float c, d;
    cout << "choice ur options"<<endl;
    cout << "1.add"<< endl;
    cout << "2.substract"<< endl;
    cout << "3.multiply"<< endl;
    cout << "4.divide"<< endl;
    cin >> select;
    if (select==1){
        cout << "enter the 1st number = ";
        cin >> c;
        cout << "enter the 2nd number = ";
        cin >> d;
        cout <<"result = "<< add(c,d)<<endl;
    }
    else if(select==2){
        cout << "enter the 1st number = ";
        cin >> c;
        cout << "enter the 2nd number = ";
        cin >> d;
        cout << "result = "<<subst(c,d)<<endl;
    }
    else if(select==3){
        cout << "enter the 1st number = ";
        cin >> c;
        cout << "enter the 2nd number = ";
        cin >> d;
        cout <<"result = "<< multi(c,d)<<endl;
    }
    else if(select==4){
        cout << "enter the 1st number = ";
        cin >> c;
        cout << "enter the 2nd number = ";
        cin >> d;
        cout << "result = "<<divide(c,d)<<endl;
    }
    else {
        cout << "invalid";
    }

return 0;
}
float add(float a,float b)
{
    return a+b;
}
float subst(float a,float b)
{
    return a-b;
}float multi(float a,float b)
{
    return a*b;
}
float divide(float a,float b)
{
    return a/b;
}
