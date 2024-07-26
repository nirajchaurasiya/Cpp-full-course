#include <iostream>
#include <string>

int main()
{
    // Character literal
    char myChar = 'H';
    std::cout << "Character: " << myChar << std::endl;

    // Modify character literal
    myChar = 'c';
    std::cout << "Character: " << myChar << std::endl;

    // String literal using const char*
    const char *myString1 = "Hello There";
    std::cout << "String (const char*): " << myString1 << std::endl;

    // String using std::string
    std::string myString2 = "Hello There";
    std::cout << "String (std::string): " << myString2 << std::endl;

    // String literal using non-const char*
    std::string myString3 = "Hello There";
    std::cout << "String (char*) *myString3: " << myString3 << std::endl;

    // Modify non-const string literal
    myString3 = "Hello Niraj";
    std::cout << "String (overwriting *myString3): " << myString3 << std::endl;

    return 0;
}
