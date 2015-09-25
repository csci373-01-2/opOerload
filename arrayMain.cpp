// Copyright 2015 Evan Misshula


#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "./array1.h"

int main() {
  Array integers1(7);  // seven-element Array
  Array integers2;       // 10-element Array by default

  // print integers1 size and contents
  cout << "Size of array integers1 is "
       << integers1.getSize()
       << "\nArray after initialization:\n" << integers1;

  // print integers2 size and contents
  cout << "\nSize of array integers2 is "
       << integers2.getSize()
       << "\nArray after initialization:\n" << integers2;
  // input and print integers1 and integers2
  cout << "\nInput 17 integers:\n";
  cin >> integers1 >> integers2;

  cout << "\nAfter input, the arrays contain:\n"
       << "integers1:\n" << integers1
       << "integers2:\n" << integers2;

  // use overloaded inequality (!=) operator
  cout << "\nEvaluating: integers1 != integers2\n";

  if (integers1 != integers2)
    cout << "integers1 and integers2 are not equal\n";

  // create array integers3 using integers1 as an
  // initializer; print size and contents
  Array integers3(integers1);  // calls copy constructor

  cout << "\nSize of array integers3 is "
       << integers3.getSize()
       << "\nArray after initialization:\n" << integers3;
  // use overloaded assignment (=) operator
  cout << "\nAssigning integers2 to integers1:\n";
  integers1 = integers2;  // note target is smaller

  cout << "integers1:\n" << integers1
       << "integers2:\n" << integers2;

  // use overloaded equality (==) operator
  cout << "\nEvaluating: integers1 == integers2\n";

  if (integers1 == integers2)
    cout << "integers1 and integers2 are equal\n";

  // use overloaded subscript operator to create rvalue
  cout << "\nintegers1[5] is " << integers1[ 5 ];

  // use overloaded subscript operator to create lvalue
  cout << "\n\nAssigning 1000 to integers1[5]\n";
  integers1[ 5 ] = 1000;
  cout << "integers1:\n" << integers1;

  // attempt to use out-of-range subscript
  cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
  integers1[ 15 ] = 1000;  // ERROR: out of range

  return 0;
}  // end main

