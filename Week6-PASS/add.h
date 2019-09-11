#ifndef ADD_H
#define ADD_H


class Add
{
public:
    Add(int baseNum);
    int operator()(int a, int b);
private:
    const int _baseNum;
};

#endif // ADD_H
