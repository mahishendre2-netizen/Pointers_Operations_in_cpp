// Papri Sen
// 24070123070
// A3

#include <iostream>
using namespace std;
void swap(int*x, int*y){
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main() {
   int a=5;
   int b=10;
    cout << "Before swap:" << endl;
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;
    swap(&a, &b);
    cout << "After swap:" << endl;
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;
    return 0;
}

/*
Output:
Before swap:
Value of a is: 5
Value of b is: 10
After swap:
Value of a is: 10
Value of b is: 5
*/
