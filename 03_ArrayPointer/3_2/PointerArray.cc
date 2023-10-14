#include <cstdint>
#include <iostream>

int main()
{
    auto array_size = std::size_t{10};

    // Heap Allocation
    auto *arr = new std::int32_t[array_size];// 32bit integer*10=4byte*10 speicher reservieren
    //new liefer wert von index 0, pointer zeigt darauf



    for (std::size_t i = 0; i < array_size; i++)
    {
        arr[i] = i; //zu adressen werte von 0 bis 9 zuweisen
    }

    // ...

    for (std::size_t i = 0; i < array_size; i++)
    {
        std::cout << arr[i] << '\n'; //gibt werte aus
    }

    // Heap De-Allocation
    delete[] arr;

    return 0;
}
