#include <string>

using namespace std;

namespace trsc
{
class Script
{
public:
    static string Compile(string a);
    static int buildAst();
    static char generateByteCode();
};
} // namespace trsc