#ifndef _CAESAR_GENERATOR_HPP_
# define _CAESAR_GENERATOR_HPP_

#include <sstream>

namespace caesar {
    class Generator {
        public:
        std::ostringstream  *encode(const std::istringstream &iss) const;
    };
}

#endif
