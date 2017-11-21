#include "Singleton.h"

namespace mayers_singleton {
Singleton &Singleton::getInstance()
{
    static Singleton instance;
    return instance;
}

}

