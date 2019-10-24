#ifndef VECTOR_H
#define VECTOR_H

template<typename T>
class Vector
{
public:
    Vector(T x, T y, T z);
    T x() const;
    void setX(const T &x);

    template<typename V, typename Z>
    Vector<V> Add(const Vector<Z> &other);

    T _x;
    T _y;
    T _z;
};

template<typename T>
Vector<T>::Vector(T x, T y, T z)
    : _x{x}, _y{y}, _z{z}
{

}

template<typename T>
template<typename V, typename Z>
Vector<V> Vector<T>::Add(const Vector<Z> &other)
{
    return Vector<V>{V(other._x + _x), V(other._y + _y), V(other._z + _z)};
}

template<typename T>
T Vector<T>::x() const
{
    return _x;
}

template<typename T>
void Vector<T>::setX(const T &x)
{
    _x = x;
}

#endif // VECTOR_H
