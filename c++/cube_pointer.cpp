// cube my pointer
#include <iostream>
using namespace std;
void cube (int *ptrmyvar){
    *ptrmyvar=(*ptrmyvar)*(*ptrmyvar)*(*ptrmyvar);
}
int main(){
    int myvar=5;
    cube(&myvar);
    cout<<myvar;
return 0;
}