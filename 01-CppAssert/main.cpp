#include <iostream>
#include <cassert>
#include <string>

using namespace std;

int main()
{
    /*---- ASSERTS ----*/

    // Tipo de dato INT:
    // assert(2 == 1) -> assertion failed cuando una assert falla retorna code = 3
    assert(2 == 2);          // igual
    assert(1 != 0);          // distinto
    assert(2 == 1 + 1);      // suma
    assert(1 - 1 == 0);      // resta
    assert(2 * 1 == 2);      // multiplicacion
    assert(10 / 5 == 4 / 2); // division
    assert(5 % 2 == 1);      // modulo

    // Tipo de dato BOOL:
    assert(true);
    assert(!false);        // NOT
    assert(true && true);  // AND
    assert(true || false); // OR
    assert(!false && true || false);

    // Tipo de dato DOUBLE:
    assert(2.0 == 2);                                     // igual
    assert(2.001452813548996845 != 2.001452813548996846); // diferente
    // assert(2.0000000000000001 > 2.0000000000000000);      // assertion failed -> rango de decimales
    assert(2.000000000000000 < 2.000000000000001); // menor
    assert(2.001 > 2.0001);                        // mayor
    assert(389.15 / 9.326 <= 41.7275);             // menor o igual
    assert(23.037 >= 23.03700);                    // mayor o igual

    // Tipo de dato STRING:
    // assert("hola" == "Hola"); -> assertion failed
    assert("ho"s + "la"s == "hola"s);
    assert("A"s == "A"s);
    assert("aaa"s >= "aa"s);
    assert("1" <= "2");
    assert("AA"s < "AB"s);

    // Tipo de dato CHAR: es tratado como el int correspondiente en la  tabla ascii extendida

    assert('A' != 'B');
    assert('A' <= 'B');
    assert('A' == 65);
    assert('B' == 'A' + 1);
    assert(131 == 'A' + 'B');
    assert(1 == 'B' % 'A');
    assert('8' != '1' + '7');
    assert(1 == 'B' - 'A');
    assert('a' != 'A');
    assert('a' - 32 == 'A');
}