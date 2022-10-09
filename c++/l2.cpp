  #include <iostream>
  using namespace std;
  int main(){
    int myvar=5;
    int &myvar1=myvar;
    cout<<myvar<<endl;
    cout<<myvar1<<endl;
    cout<<&myvar1<<endl;
    cout<<&myvar<<endl;
  return 0;
  }