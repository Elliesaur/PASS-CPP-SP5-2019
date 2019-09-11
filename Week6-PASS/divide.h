#ifndef DIVIDE_H
#define DIVIDE_H


class Divide
{
public:
    Divide(int baseNum);
    int operator()(int a, int b);
private:
    const int _baseNum;
};

#endif // DIVIDE_H
