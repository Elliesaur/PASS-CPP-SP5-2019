#ifndef SINGLETONCLASS_H
#define SINGLETONCLASS_H


class SingletonClass
{
public:
    static SingletonClass& instance();
    int add(int a, int b);

    SingletonClass(const SingletonClass &other) = delete;
    void operator=(SingletonClass &other) = delete;

private:
    SingletonClass();
};

#endif // SINGLETONCLASS_H
