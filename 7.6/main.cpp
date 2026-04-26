#include "Base.h"

int main()
{
    cout << "===== CASE 1: Base destructor NOT virtual =====\n";

    Base* b1 = new Derived();   // polymorphic object
    b1->show();

    delete b1;  // ❌ Derived destructor may NOT run properly

    cout << "\n====================================\n";

    cout << "===== CASE 2: Fix (make Base destructor virtual) =====\n";

    // To demonstrate correct behavior, imagine Base destructor is virtual
    // (In real lab, you modify Base destructor to virtual and re-run)

    Base* b2 = new Derived();
    b2->show();

    delete b2;  // ✅ Derived destructor runs properly

    return 0;
}
