//datatypes 

#include <iostream>
using namespace std;

int main (){
    int number = 92;
    const string name = "Arka Banerjee";

    char grade = 'A';
    bool passed = true;

    string lastpart;
    if (passed == true) {
        lastpart = "He has passed";
    }
    else {
        lastpart ="He has not passed";
    }
    cout << "your name is " << name << " and your grade is " << grade  <<'.'<< lastpart<< endl;
    return 0;
}