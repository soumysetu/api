#include <iostream>
using namespace std;

void readarray(int ary[],int sz)
{
    cout << "enter the array element"<<endl;
    for(int i=0;i<sz;i++)
    {
        cin >> ary[i];
    }
}

void disarray(int ary[],int sz)
{
    cout << " the array element"<<endl;
    for(int i=0;i<sz;i++)
    {
        cout << ary[i]<<endl;
    }
}

int main(){
    int siz;
    
    cout << "enter size of array"<<endl;
    cin>>siz;
    int array[siz];
    readarray(array,siz);
    disarray(array,siz);
return 0;
}