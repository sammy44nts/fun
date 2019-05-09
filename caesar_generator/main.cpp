#include "caesar_generator.hpp"

using namespace std;

int main(int ac, char **av) {
    caesar::Generator gen = caesar::Generator();
    ostringstream *oss = gen.encode(istringstream("plop"));
    delete oss;

    return 0;
}
