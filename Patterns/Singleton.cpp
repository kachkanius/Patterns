#include "Singleton.h"
#include <memory>

namespace mayers_singleton {
Singleton &Singleton::getInstance()
{
    static Singleton instance;
    return instance;
}

}

//static double_singleton::DoubleSingleton* double_singleton::DoubleSingleton::minstance = nullptr;

double_singleton::DoubleSingleton *double_singleton::DoubleSingleton::getInstance()
{
    if (!minstance) {

    }
}
