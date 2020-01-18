#include "../src/shell/trsc.h"

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string filePath = argv[1];
    ifstream ifs(filePath);
    string content( istreambuf_iterator<char>(ifs),(istreambuf_iterator<char>()) );
    string c = trsc::Script::Compile(content);
    std::cout << c << std::endl;
}