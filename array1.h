// Copyright 2015 Evan Misshula

#ifndef _HOME_EVAN_DOCUMENTS_DOUG_ADS_SOURCES_OPOVERLOAD_ARRAY1_H__HOME_EVAN_DOCUMENTS_DOUG_ADS_SOURCES_OPOVERLOAD_ARRAY1_H_
#define _HOME_EVAN_DOCUMENTS_DOUG_ADS_SOURCES_OPOVERLOAD_ARRAY1_H__HOME_EVAN_DOCUMENTS_DOUG_ADS_SOURCES_OPOVERLOAD_ARRAY1_H_


#include <iostream>

using std::ostream;
using std::istream;

class Array {
  friend ostream &operator<<(ostream &, const Array &);
  friend istream &operator>>(istream &, Array &);

 public:
  explicit Array(int = 10);       // default constructor
  Array(const Array &);  // copy constructor
  ~Array();                // destructor
  int getSize() const;     // return size

  // assignment operator
  const Array &operator=(const Array &);
  // equality operator
  bool operator==(const Array &) const;

  // inequality operator; returns opposite of == operator
  bool operator!=(const Array &right) const {
    return !(*this == right);  // invokes Array::operator==
}  // end function operator!=

// subscript operator for non-const objects returns lvalue
  int &operator[](int);

// subscript operator for const objects returns rvalue
  const int &operator[](int) const;

 private:
  int size;  // array size
  int *ptr;  // pointer to first element of array
};
// end class Array
#endif  //_HOME_EVAN_DOCUMENTS_DOUG_ADS_SOURCES_OPOVERLOAD_ARRAY1_H__HOME_EVAN_DOCUMENTS_DOUG_ADS_SOURCES_OPOVERLOAD_ARRAY1_H_


