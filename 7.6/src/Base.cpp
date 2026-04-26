#include "Base.h"

// ---------------- Base ----------------
Base::Base()
{
    cout << "Base Constructor called\n";
}

Base::~Base()
{
    cout << "Base Destructor called\n";
}

void Base::show()
{
    cout << "Base class show()\n";
}

// ---------------- Derived ----------------
Derived::Derived()
{
    cout << "Derived Constructor called\n";

    // dynamic resource allocation
    data = new int(100);
    cout << "Resource allocated in Derived: " << *data << endl;
}

Derived::~Derived()
{
    cout << "Derived Destructor called\n";

    delete data;
    cout << "Resource freed in Derived\n";
}

void Derived::show()
{
    cout << "Derived class show()\n";
}
