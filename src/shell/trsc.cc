#include "trsc.h"

char trsc::Script::Compile(char a)
{
    buildAst();
    generateByteCode();
    return a;
}

int trsc::Script::buildAst()
{
    return 3;
}

char trsc::Script::generateByteCode()
{
    return 'D';
}