#include "../src/shell/trsc.h"
#include <iostream>

int main(int argc, char *argv[])
{
    char c = trsc::Script::Compile('a');
    std::cout << c << std::endl;
}