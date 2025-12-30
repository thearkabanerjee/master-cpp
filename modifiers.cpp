# include <iostream>
using namespace std;

int main(){
    int pencils = 10; // but we know number of pencils cannot be negative
    unsigned int newpencils = -11;
    
    cout << "total pencils i have = "<< pencils << endl; 
    cout << "new pencils = "<< newpencils << endl;

    return 0;
}