#ifndef __CALCULATOR_HPP
#define __CALCULATOR_HPP

#include <string>

// this function should expect that `expression` has already been
// validated and thus throw no exceptions
double parse_number(const std::string &expression); //may have to put const back in
void add_numbers(double n);

#endif // __CALCULATOR_HPP
