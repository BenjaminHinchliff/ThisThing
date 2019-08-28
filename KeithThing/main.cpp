// IDKKeithDidn'tTellMeWhatToCallThis.cpp : Defines the entry point for the application.
//

#include <iostream>

#include "headers/Consonant.h"

int main()
{
    using namespace std::string_literals;
    Consonant testPhone{"test"s, "test"s, false};

    std::cout << testPhone << '\n';

	return 0;
}
