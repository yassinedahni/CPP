#include <iostream>

class B
{
    int a;
    public :
        virtual ~B(){};
        void print(void)
        {
            std::cout << "B" << std::endl;
        }
};

class D : public B
{
    int a;
    public :
        void print2(void)
        {
            std::cout << "D" << std::endl;
        }
};

class D2 : public B
{
    int a;
    public :
        void print3(void)
        {
            std::cout << "D2" << std::endl;
        }
};

int main()
{
    B *a = new D2;
    D *b = new D;

    D2 *r = dynamic_cast<D2 *> (a);
    if (r == nullptr)
        std::cout << "h" << std::endl;
    else
        r->print3();
}