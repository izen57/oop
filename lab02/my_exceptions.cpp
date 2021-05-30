#include "my_exceptions.h"

my_exceptions::my_exceptions(int error_line, std::string error_filename, std::string error_text)
{
	error_info = error_filename + ": " + std::to_string(error_line) + ": " + error_text;
}

const char* my_exceptions::what() const noexcept
{
	return error_info.c_str();
}