#include <iostream>
using namespace std;
int main(){
    int a[8]={1,2,3,4,5,6,7,8,};
    int *ptr;
    ptr=a;
    cout<<"ptr"<<" "<<ptr<<endl;
    cout<<"&a[0]"<<" "<<&a[0]<<endl;
    cout<<"&a[1]"<<" "<<&a[1]<<endl;
    cout<<"&a[2]"<<" "<<&a[2]<<endl;
    cout<<"&a[3]"<<" "<<&a[3]<<endl;
    cout<<"&a[4]"<<" "<<&a[4]<<endl;
    cout<<"&a[5]"<<" "<<&a[5]<<endl;
    cout<<"&a[6]"<<" "<<&a[6]<<endl;
    cout<<"&a[7]"<<" "<<&a[7]<<endl;
    cout<<"ptr"<<" "<<ptr<<endl;
    cout<<"ptr+2"<<" "<<(ptr+2)<<endl;
    ptr++;
    cout<<"yugedygddagd"<<endl;
    for(int i=0;i<8;i++){
        cout<<"*(ptr=i)"<<*(ptr+i)<<endl;
        
    }
return 0;
}