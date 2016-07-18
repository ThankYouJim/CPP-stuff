#ifndef _HEADER_H
#define _HEADER_H

#include <iostream>

using std::ostream;
using std::istream;
using std::string;

template <class Type>
ostream &operator<<(ostream&, const Type&);

template <class Type>
istream &operator>>(istream&, Type&);

#endif