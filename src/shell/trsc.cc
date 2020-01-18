#include "trsc.h"

using namespace std;

string trsc::Script::Compile(string programStr)
{
    buildAst();
    generateByteCode();
    return programStr;
}

int trsc::Script::buildAst()
{
    return 3;
}

char trsc::Script::generateByteCode()
{
    return 'D';
}