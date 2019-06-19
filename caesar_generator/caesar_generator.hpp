#ifndef _CAESAR_GENERATOR_HPP_
# define _CAESAR_GENERATOR_HPP_

#include <sstream>

namespace caesar {
    class Generator {
        public:
        const std::string  encode(std::istringstream &iss, int const offset = 4) const;
    };
}

#endif
