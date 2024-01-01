#include <iostream>
#include <string>

using namespace std;

#define p cout
#define u using
#define a int
#define h p <<
#define s {
#define c }
#define d char
#define m string
#define k D
#define e "Gur frperg pbqr vf uvqqra va cynva fvtug"
#define r 11
#define i p << "text: " <<

m k(const m& E, a S) s
    m D;

    for (d C : E) s
        if (isalpha(C)) s
            d B = isupper(C) ? 'A' : 'a';
            D += d((C - B - S + 26) % 26 + B);
        c else s
            D += C;
        c
    c

    return D;
c

a M() s
    m E = e;
    a S = r;

    m DS = k(E, S);

    i DS << endl;

    return 0;
c

#define G a main() s M(); c
G
