#include <iostream>
#include <string>

class Singleton{
public:
    static Singleton* getInstance()
    {
        static Singleton* instance;
        if (nullptr == instance)
        {
            instance = new Singleton();
        }
        return instance;
    }
    std::string getName(){
        return "SingletonName";
    }
};

int main()
{
    std::cout << "Singleton name: " << Singleton::getInstance()->getName() << std::endl;
    return 0;
}