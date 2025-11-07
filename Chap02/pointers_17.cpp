// pointers_17.cpp - C++17 version without std::format
// Replicates pointers.cpp output using iostream concatenation
#include <iostream>

using std::cout;

int main() {
    int x {7};
    int y {42};
    int* ip = &x;

    cout << "The value of x is " << x << '\n';
    cout << "The value of y is " << y << '\n';
    cout << "The value of *ip is " << *ip << '\n';
}
