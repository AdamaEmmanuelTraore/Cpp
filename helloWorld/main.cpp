/* First C++ program "Hello world" */

#include <iostream>

// Class definition
class Greater
{
    public:
        void sayHello()
        {
            std::cout << "Hello world!" << std::endl;
        }
};

// Main function
int main()
{
    Greater g;
    g.sayHello();
    return 0;
}