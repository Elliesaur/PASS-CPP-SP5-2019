#ifndef TEMPLATEPIEFACTORY_H
#define TEMPLATEPIEFACTORY_H
#include <memory>

template<typename T>
class TemplatePieFactory
{
public:
    TemplatePieFactory();

    std::shared_ptr<T> MakePie();
};

template<typename T>
TemplatePieFactory<T>::TemplatePieFactory()
{

}

template<typename T>
std::shared_ptr<T> TemplatePieFactory<T>::MakePie()
{
    return std::make_shared<T>();
}

#endif // TEMPLATEPIEFACTORY_H
