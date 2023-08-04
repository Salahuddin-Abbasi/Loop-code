#include <iostream>
using namespace std;

int main() {
    int Marks;
    char g1='A', g2='B', g3='C', g4='F';
    cout << "Enter Marks:" << "\n";
    
    while(true) {
        cin >> Marks;
        if (Marks>100||Marks<0) {
            cout<<"Enter Marks:"<<"\n";
        } else if (Marks>=80) {
            cout<<"Grade: "<<g1<<"\n";
        } else if (Marks>=70) {
            cout<<"Grade: "<<g2<<"\n";
        } else if (Marks>=60) {
            cout<<"Grade: "<<g3<<"\n";
        } else {
            cout<<"Grade: "<<g4<<"\n";
        }
    } 

    return 0;
}
