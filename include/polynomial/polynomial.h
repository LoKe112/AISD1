#pragma once
#include <iostream>
#include <cmath>

namespace polynom {
    template<typename T>
    class Polynomial {
    private:
        T* _data;
        size_t _size;
    public:
        Polynomial(size_t size) : _size(size), _data(new T[size]()) {}
        Polynomial(T* data, size_t size) : _data(data), _size(size) {}
        size_t size() const {
            return _size;
        }
        ~Polynomial() {
            delete[] _data;
            _data = nullptr;
            _size = 0;
        }
        Polynomial(const Polynomial<T>& a) : _data(new T[a._size]), _size(a._size) {
            for (size_t i = 0; i < _size; i++) {
                _data[i] = a[i];
            }
        }
        


        void swap(Polynomial<T>& a) {
            std::swap(_data, a._data);
            std::swap(_size, a._size);
        }
        T operator[](size_t index) const {
            if (_size <= index) {
                return 0;
            }
            return _data[index];
        }
        
    };
}