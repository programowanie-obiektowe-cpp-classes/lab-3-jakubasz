#indef KOLO_H
#define KOLO_H

#include "figura.h"

class kolo : public figure {
    public:
    kolo() : kolo(0) {};
    kolo(double r): promien(r)
    private:
    double promien
};

#endif