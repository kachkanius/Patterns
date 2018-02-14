#include "Singleton.h"
#include <memory>


Singleton &Singleton::getInstance()
{
    static Singleton instance;
    return instance;
}
