#include <iostream>
#include <memory>

class Collar {
public:
    Collar(const std::string &size, const std::string &name)
        : _size{size}, _name{name} {

    }

    const std::string size() {
        return _size;
    }

    const std::string name() {
        return _name;
    }

private:
    std::string _size;
    std::string _name;
};

class Animal {
public:
    Animal(const std::shared_ptr<Collar> &collar, const std::string &petReaction, const std::string &description)
        : _petReaction{petReaction}, _description{description}, _collar{collar} {

    }

    const std::string pet() {
        return _petReaction;
    }

    const std::string description() {
        return _description;
    }

    const std::shared_ptr<Collar> collar() {
        return _collar;
    }

private:
    std::string _petReaction;
    std::string _description;
    std::shared_ptr<Collar> _collar;
};

int main() {
    auto smallCollar = std::make_shared<Collar>("Small", "Doggo!");
    Animal dog = Animal{smallCollar, "Woof, woof!", "A small dog that is nice to pet."};

    std::cout << dog.pet() << std::endl;
    std::cout << dog.collar()->name() << std::endl;

    return 0;
}
