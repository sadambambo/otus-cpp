#include "hello.h"
#include "version.h"
#include "iostream"

std::ostream &hello::greetings(std::ostream &out) 
{
    out << "build " << PROJECT_VERSION_PATCH << std::endl;
    out << "Hello, World!" << std::endl;
    return out;
}
