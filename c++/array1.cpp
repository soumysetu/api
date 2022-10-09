#include <iostream>
using namespace std;
void displayarray(int arry[]){
    for(int i=0;i<4;i++)
    {
        cout << i+1 <<" -> "<<arry[i]<<endl;
    }
}
int main(){
    int myArray[4]={2,33,222,444};
    displayarray(myArray);
return 0;
}