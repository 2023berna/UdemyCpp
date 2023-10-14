#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a;//speicheradresse von a
    int *p_e = &b;//speicheradresse von b
    int *p_f = &c;//speicheradresse von c

    *p_d = (2 * (*p_e)) + (3 * (*p_f));//(2*2)+(3*3)=13=a=wert in speicheradresse a
    p_d = &b;//p_d ist speicheradresse a wird zu speicheradresse b
    p_f = &a;// p_f ist speicheradresse c wird zu speicheradr a

    *p_e = *p_d + *p_f; //2+13=15 , in speicheradr b

    std::cout << a << '\n';// 13
    std::cout << *p_d << '\n';//15
    std::cout << *p_e << '\n';//15
    std::cout << *p_f << '\n';//13

    return 0;
}
