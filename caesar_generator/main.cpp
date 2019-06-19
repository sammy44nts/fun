#include <iostream>
#include "caesar_generator.hpp"

using namespace std;

int main(int ac, char **av) {
    caesar::Generator gen = caesar::Generator();

    if (ac >= 2 && ac < 4 && av[1] != NULL) {
        string msg = string(av[1]);
        istringstream iss = istringstream(msg);
        if (ac == 3) {
            int i;
            istringstream offset = istringstream(string(av[2]));
            offset >> i;
            if (i > 0 && i < 26)
                cout << gen.encode(iss, i) << endl;
            else
                return -1;    
        } else
            cout << gen.encode(iss) << endl;
    } else {
        cout << "Usage: " << av[0] << " str [1-25]" << endl
        << "Try to encode a message." << endl
        << "Optionally change offset (default is 4)." << endl;
    }

    return 0;
}
