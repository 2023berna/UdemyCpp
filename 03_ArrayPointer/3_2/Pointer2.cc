#include <iostream>

int main()
{
    // Heap allocation, speicher reservierung
    int *p = new int;
    *p = 4; //dereferenzierung
    //pointer liegt auf dem stack, zeigt auf int variable im head speicher
    //new int{4} könnte man auch schreiben, bei stack braucht man kein head

    std::cout << "Memory address of p: " << &p << '\n';            //adresse stacka
    std::cout << "Memory address of pointed value: " << p << '\n'; // adresse head a
    std::cout << "Value of the memory address p points to: " << *p << '\n'; // 4

    *p = 1337;

    std::cout << "Memory address of p: " << &p << '\n';            //adresse stack a
    std::cout << "Memory address of pointed value: " << p << '\n'; // adresse head a
    std::cout << "Value of the memory address p points to: " << *p << '\n'; // 4 wird zu 1337, speicher bleibt gleich

    // Heap de-allocation, speicher freigeben
    //nicht der pointer wird gelöscht, sondern der speicher auf den wir zeigen, die 4byte (speicheradresse kannst du nicht löschen)
    delete p;
    std:: cout<< "nach delete p" << '\n';

    std::cout << "Memory address of p: " << &p << '\n';// adresse stack a
    std::cout << "Memory address of pointed value: " << p << '\n'; // adresse head a
    std::cout << "Value of the memory address p points to: " << *p << '\n';

    //hier würde der wert 1337 vllt. noch ausgegeben werden, aber der speicher
    // gehört uns nicht mehr und kann vom betriebssystem anderweitig belegt werden
    // dadurch könnten später auch ein anderer wert oder etwas komisches da stehen
    //jedoch zeigt zeiger noch auf diesen ungültigen speicherbereich
    //könnte zu error führen

    return 0;
}
