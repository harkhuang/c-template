/* The following code example is taken from the book
 * "C++ Templates - The Complete Guide"
 * by David Vandevoorde and Nicolai M. Josuttis, Addison-Wesley, 2002
 *
 * (C) Copyright David Vandevoorde and Nicolai M. Josuttis 2002.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */
#include <iostream>
#include "type1.hpp"

template <typename T>
void test (T const& t)
{
    // 如果是yes 既然  0  那么输出..
    if (IsFundaT<T>::Yes) {
        std::cout << "T is fundamental type" << std::endl;
    }
    else {
        std::cout << "T is no fundamental type" << std::endl;
    }
} 

class MyType {
};

int main()
{
    // 如果是基础类型 yes = 1
    test(7);

    // 如果不是基础类型走主要模版类型  不走特例模版类型
    test(MyType());    
}
