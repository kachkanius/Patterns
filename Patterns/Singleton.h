#ifndef SINGLETON_H
#define SINGLETON_H

namespace mayers_singleton {
class Singleton
{
public:
    static Singleton& getInstance();
private:
    Singleton(){}
    ~Singleton(){}
    Singleton& operator=(Singleton&);
};

}

namespace double_singleton {
class DoubleSingleton
{
public:
    static DoubleSingleton* getInstance();
private:
    DoubleSingleton(){}
    ~DoubleSingleton(){}
    DoubleSingleton& operator=(DoubleSingleton&);
    static DoubleSingleton* minstance;
};

}


#endif // SINGLETON_H
