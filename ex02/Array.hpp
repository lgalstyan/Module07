#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    public:
        Array();
        Array(unsigned int);
        Array(const Array& );
        Array& operator=(const Array& );
        T& operator[](unsigned int );
        unsigned int size() const;
        ~Array();
    
    private:
        T* _array;
        unsigned int _size;
    class OutOfRangeException : std::exception
    {
        public:
            const char * what() const throw();    
    };
};


template<typename T> Array<T>::Array() : _size(0)
{
    _array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
    _array = new T[_size];
}

template<typename T>
Array<T>::Array(const Array& other) : _size(other._size)
{
    _array = new T[_size];
    for (unsigned int i; i < _size; ++i)
        _array[i] = other._array[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
    if (this != &rhs)
    {
        _size = rhs._size;
        delete _array;
        _array = new T[_size];
        for (unsigned int i; i < _size; ++i)
            _array[i] = rhs._array[i];
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int indx)
{
    if (indx > _size)
        throw OutOfRangeException();
    return (*(_array + indx));
}

template<typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

template<typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template<typename T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
    return ("Exception: Index is out of range");
}


#endif