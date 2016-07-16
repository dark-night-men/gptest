#include <iostream>

using namespace std;

string s[] = 
{

  "#include <iostream>"
, "using namespace std;"
, "int main(int argc, char **argv)"
, "{"
, "    std::cout << \"Hello world\" << std::endl;"
, "    return 0;"
, "}"

};

int main(int argc, char **argv)
{
    cout << "Hello world" << endl;

    for (auto line : s)
        cout << line << endl;

    return 0;
}
