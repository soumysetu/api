/*
the concept of function array and pointer by taking example of reading and displaying 
5 strings through the keyboard use function readstring to read the input and use 
displaystring to display array of strings also use function readsize to read size of the
 array (use concept of pointers will passing values to function )
 */
#include <iostream>
using namespace std;
void readarray(string a[])
{
    cout << "enter the array element"<<endl;
    for(int i=0;i<5;i++)
    {
        cin >> a[i];
    }
}
void displayarray(string *a)
{
    cout << " the array element"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<i<<" "<< *a <<endl;
        *a++;
    }
}

int main(){
    string array[5];
    readarray(array);
    displayarray(array);
return 0;
}