#include <iostream>
using namespace std;
int main() {
    int *pc, c;   // pointer pc declared
    
    c = 5;
    cout << "Address of c (&c): " << &c << endl; // &c displays the reference to the memory address
    cout << "Value of c (c): " << c << endl << endl; 

    pc = &c;    // Pointer pc holds the memory address of variable c
    cout << "Address that pointer pc holds (pc): "<< pc << endl;
    cout << "Content of the address pointer pc holds (*pc): " << *pc << endl << endl;
    
    c = 11;    // The content inside memory address &c is changed from 5 to 11.
    cout << "Address pointer pc holds (pc): " << pc << endl;
    cout << "Content of the address pointer pc holds (*pc): " << *pc << endl << endl;   /* address remains the same
     but the value of c gets changed on the same address*/
    *pc = 2;                 // changing value of c to 2 
    cout << "Address of c (&c): " << &c << endl;         // output c(address)
    cout << "Value of c (c): " << c << endl << endl; // value of c = 2
    return 0;
}