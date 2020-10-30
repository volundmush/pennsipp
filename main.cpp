#include <iostream>

#include "ansi.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    AnsiString boo("This is a test \002cr\003of the \002ch\003EMERGENCY\002c/\003 ANSI\002c/\003 system.");

    return 0;
}
