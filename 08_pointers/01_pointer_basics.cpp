#include <iostream>

using namespace std;

// ============================================================================
// Module 08: Pointers & References in C++
// Topics: Pointer declaration, Dereferencing (*), Address-of operator (&),
//         Reference variables (&ref), and In-place memory modification.
// ============================================================================

int main() {
    int var = 10;

    // 1. Pointer Declaration & Address-of Operator (&)
    // ptr stores the memory address of var
    int *ptr = &var;

    cout << "Value of var:             " << var << endl;       // 10
    cout << "Address of var (&var):     " << &var << endl;
    cout << "Value stored in ptr (ptr): " << ptr << endl;
    cout << "Dereferencing ptr (*ptr):  " << *ptr << endl;      // 10

    // 2. Modifying value through pointer dereference
    *ptr = 30;
    cout << "\nAfter *ptr = 30:" << endl;
    cout << "Value of var:             " << var << endl;       // 30
    cout << "Dereferenced *ptr:         " << *ptr << endl;      // 30

    // 3. Reference Variable (Alias)
    // ref is an alternate name for var (shares the exact same memory location)
    int &ref = var;
    ref = 50; // Modifying ref updates var directly

    cout << "\nAfter ref = 50:" << endl;
    cout << "Value of ref:             " << ref << endl;       // 50
    cout << "Value of var:             " << var << endl;       // 50
    cout << "Dereferenced *ptr:         " << *ptr << endl;      // 50

    return 0;
}
