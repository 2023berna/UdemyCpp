#include <iostream>

int main()
{
    const char first_name[] = {'J', 'a', 'n', '\0'};
    std::cout << first_name << '\n';

    // am ende von schaffranek ist ein \0 was das ende des chars ankündigt
    // \0 wird im letzten index com array gespeichert
    //sizeof(array)
    char last_name[] = "Schaffranek";
    std::cout << last_name << '\n';

    last_name[0] = 's';

    for (std::uint32_t i = 0; i < sizeof(last_name) - 1U; ++i)
    {
        std::cout << "Char[i] = " << last_name[i] << '\n';
    }

    return 0;
}
