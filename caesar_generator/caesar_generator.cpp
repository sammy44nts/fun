#include <iostream>
#include "caesar_generator.hpp"

using namespace std;

ostringstream   *caesar::Generator::encode(const istringstream &iss) const {
    cout << iss.str() << endl;
    return new ostringstream();
}
