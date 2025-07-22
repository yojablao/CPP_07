#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <vector>

#include <iomanip>

template <typename T ,typename Fn >
void iter(T  *arr ,std::size_t length   , Fn  func  )
{
    for (std::size_t i = 0; i < length; i++ )
    {
        func(arr[i]);
    } 
}
template <typename T>
void print(const T& v) { std::cout << std::left << std::setw(4) << v; }

template <typename T>
void doubleMe(T& v) { v *= 2; }


#endif