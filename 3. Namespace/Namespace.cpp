#include <iostream>

using namespace std;

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main()
{
    /*
    Namespace provides a solution for preventing name conflicts
    in a large projects. Each entity needs a unique name.
    A namespace allows for identically named entities as long
    as the namespaces are different
    */
    using namespace first;

    // int x = 1;      Will cause redeclaration error after build

    cout << x << endl;

    return 0;
}