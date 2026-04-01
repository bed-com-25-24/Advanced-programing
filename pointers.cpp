#include <iostream>
using namespace std;
int main(){
    int firstvalue;
    int secondvalue;
    int *ppointer = nullptr;
    ppointer= &firstvalue;
    *ppointer = 10;// indirection
    
    ppointer = &secondvalue;
    *ppointer = 20;// indirection

    cout << "first value is: "<<firstvalue<<endl;
    cout <<"second"<< secondvalue;
}