#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int licznik = 0;
    int liczba  = 0;
    while (licznik < towar && towar != 0) {
        Stocznia stocznia{};
        Statek*  s1  = stocznia();
        int      t   = s1->transportuj();
        licznik      = licznik + t;
        Zaglowiec* z = dynamic_cast< Zaglowiec* >(s1);
        if (z != 0)
            liczba = ++liczba;
        delete s1;
    }
    return liczba;
}