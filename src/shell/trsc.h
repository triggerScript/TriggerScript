#include <string>

namespace trsc
{
class Script
{
public:
    static char Compile(char a);
    static int buildAst();
    static char generateByteCode();
};
} // namespace trsc