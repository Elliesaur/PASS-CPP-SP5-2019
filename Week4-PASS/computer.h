#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

class Computer
{
public:
    Computer();
    virtual ~Computer();
    virtual std::string name() const;
    virtual int price() const;

protected:
    std::string _name;
};

#endif // COMPUTER_H
