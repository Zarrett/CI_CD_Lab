#include "user_exception.hpp"

const char* UserException::what()const
{
    return "Custom exception was thrown!";
}
