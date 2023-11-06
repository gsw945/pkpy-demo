#include <iostream>
#include "pocketpy.h"

using namespace pkpy;
using namespace std;

void demo() {
    VM* vm = new VM();
    vm->exec("print('Hello world!')");
    vm->exec("a = [1, 2, 3]");
    PyObject* result = vm->eval("sum(a)");
    std::cout << py_cast<int>(vm, result);
    delete vm;
}

int main(int argc, char** argv)
{
    cout << "hello pocketpy-" << PK_VERSION << endl;
    demo();
    return 0;
}
