#ifndef JVZHEN_H
#define JVZHEN_H
#include <iostream>
#include <string>

class JvZhen
{
    friend std::ostream &operator<<( std::ostream &, const JvZhen &);
    friend std::istream &operator>>( std::istream &, JvZhen &);

    private:
        std::string hang1;
        std::string hang2;
        std::string hang3;
};

#endif // JVZHEN_H
