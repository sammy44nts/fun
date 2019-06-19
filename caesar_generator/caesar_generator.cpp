#include "caesar_generator.hpp"

using namespace std;

const string   caesar::Generator::encode(istringstream &iss, int const offset) const {
    char c, first, last, symbol;
    ostringstream oss = ostringstream();
    while (iss >> c) {
        last = 0;
        symbol = c + offset;
        if (c >= 'A' && c <= 'Z') {
            first = 'A';
            last = 'Z';
        } else if (c >= 'a' && c <= 'z') {
            first = 'a';
            last = 'z';
        } else
            oss << c;
        if (last) {
            if (symbol > last) symbol += first - last - 1;
            oss << symbol;
        }
    }
    return oss.str();
}
