#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstddef>


template <typename T>

class Array
{
    private:
        T *data;
        std::size_t _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &arr);
        Array &operator=(const Array &arr);
        ~Array();
        std::size_t     size() const;

        const T &operator[](std::size_t o) const;
        T &operator[](std::size_t o) ;



};
#include "Array.tpp"
#endif