#include <iostream>
using namespace std;
void disarray(int *myarray){
    for(int i=0;i<4;i++){
        cout<<*myarray<<endl;
        *myarray++;
    }
}
int main(){
    int array[4]={1,2,3,4};
    disarray(array);
    // int *ptr=array;
    // cout<<*ptr<<endl;
    // *ptr++;
    // cout<<*ptr;
return 0;
}