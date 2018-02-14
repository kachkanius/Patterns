#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    static Singleton& getInstance();
private:
    Singleton(){}
    ~Singleton(){}
    Singleton& operator=(Singleton&);
};

#endif // SINGLETON_H
