#include <iostream>
using namespace std;
void names(string a){
    cout<<a<<endl;
}
void names(string a, string b){
    cout<<a<<endl;
    cout<<b;
}
int main(){
    names("ssss");
    names("ssss","dddd");
return 0;
}