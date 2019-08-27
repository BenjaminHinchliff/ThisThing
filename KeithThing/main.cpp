// IDKKeithDidn'tTellMeWhatToCallThis.cpp : Defines the entry point for the application.
//

#include "main.h"
#include "Phone.h"

int main()
{
    using namespace std::string_literals;
    Phone testPhone{"test"s, "test"s, false};

    std::cout << testPhone << '\n';

	return 0;
}
