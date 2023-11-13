#pragma once
#include <iostream>
#include <cmath>
#include <complex>

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

        void set(T data, size_t index) {
            if (index > _size) {
                expand(index + 1);
            }
            _data[index] = data;
        }

        void expand(size_t size) {
            if (size < _size) {
                throw std::out_of_range("operator[] Index is out of range.");
            }
            auto temp = (new T[size]());
            for (size_t i = 0; i < _size; i++) {
                temp[i] = _data[i];
            }
            delete[] _data;
            _data = temp;
            _size = size;
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