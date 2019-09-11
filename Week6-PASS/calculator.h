#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
public:
    Calculator();
    template<typename T, typename U>
    U calculate(T functor, int a, int b);
};

template<typename T, typename U>
U Calculator::calculate(T functor, int a, int b)
{
    return U(functor(a, b));
}

#endif // CALCULATOR_H
