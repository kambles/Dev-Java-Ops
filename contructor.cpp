#include <iostream>

using namespace std;

class A {
    public:
    A()
    {
        std::cout << "constructor of class A" << std::endl;
    }
    
    public:
    ~A()
    {
        std::cout << "Destructor of class A" << std::endl;
    }
};

class B : public A {
    public:
    B()
    {
        std::cout << "constructor of class B" << std::endl;
    }
    
    public:
    ~B()
    {
        std::cout << "Destructor of class B" << std::endl;
    }
};

class C : public A {
    public:
    C()
    {
        std::cout << "constructor of class C" << std::endl;
    }
    
    public:
    ~C()
    {
        std::cout << "Destructor of class C" << std::endl;
    }
};

class D : public B {
    public:
    D()
    {
        std::cout << "constructor of class D" << std::endl;
    }
    
    public:
    ~D()
    {
        std::cout << "Destructor of class D" << std::endl;
    }
};

class E : public B {
    public:
    E()
    {
        std::cout << "constructor of class E" << std::endl;
    }
    
    public:
    ~E()
    {
        std::cout << "Destructor of class E" << std::endl;
    }
};

class F : public C {
    public:
    F()
    {
        std::cout << "constructor of class F" << std::endl;
    }
    
    public:
    ~F()
    {
        std::cout << "Destructor of class F" << std::endl;
    }
};

class G : public C {
    public:
    G()
    {
        std::cout << "constructor of class G" << std::endl;
    }
    
    public:
    ~G()
    {
        std::cout << "Destructor of class G" << std::endl;
    }
};

class H : public D, public E {
    public:
    H()
    {
        std::cout << "constructor of class H" << std::endl;
    }
    
    public:
    ~H()
    {
        std::cout << "Destructor of class H" << std::endl;
    }
};

class I : public F, public G {
    public:
    I()
    {
        std::cout << "constructor of class I" << std::endl;
    }
    
    public:
    ~I()
    {
        std::cout << "Destructor of class I" << std::endl;
    }
};


class J : public H, public I {
    public:
    J()
    {
        std::cout << "constructor of class J" << std::endl;
    }
    
    public:
    ~J()
    {
        std::cout << "Destructor of class J" << std::endl;
    }
};



int main()
{
    J j;
}
