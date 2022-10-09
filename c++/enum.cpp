#include <iostream>
using namespace std;
enum week{mon,tue,wed,thu,fri,sat,sun};
enum myweek{mon =4,tue =3,wed =6,thu =8,fri =1,sat =2,sun =9};
int main(){
    week day;
    myweek myday;
    day = fri;
    myday = fri;
    cout<<day<<endl;
    cout<<"fdfss"<<endl;
    cout<<myday<<endl;
    cout<<day+1<<endl;
    int i;
    for(i=mon;i<=sun;i++){
        cout<<i<<endl;
    }
return 0;
}