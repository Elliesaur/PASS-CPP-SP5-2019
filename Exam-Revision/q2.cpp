#include <memory>
#include <iostream>

using namespace std;

class Comp
{
public:
    Comp() : _name{"A computer"}, _price{0} {

    }
    virtual ~Comp() = default;
    virtual const string Name() const {
        return _name;
    }
    virtual int Price() const {
        return _price;
    }

protected:
    string _name;
    int _price{0};
};

class Part : public Comp
{
public:
    Part(const shared_ptr<Comp> &comp) : _comp{comp} {

    }
protected:
    shared_ptr<Comp> _comp;

};

class CPU : public Part
{
public:
    CPU(const shared_ptr<Comp> &comp) : Part{comp} {

    }
    int Price() const override {
        return _comp->Price() + 160;
    }
    const string Name() const override {
        return _comp->Name() + " with a CPU";
    }
};

class RAM : public Part
{
public:
    RAM(const shared_ptr<Comp> &comp) : Part{comp} {

    }
    int Price() const override {
        return _comp->Price() + 60;
    }
    const string Name() const override {
        return _comp->Name() + " with a RAM";
    }
};

int main(){
    auto comp = make_shared<Comp>();
    auto compWithRam = make_shared<RAM>(comp);
    auto compWithRamWithCPU = make_shared<CPU>(compWithRam);

    cout << compWithRamWithCPU->Name() << endl;
    cout << compWithRamWithCPU->Price() << endl;

    return 0;
}
