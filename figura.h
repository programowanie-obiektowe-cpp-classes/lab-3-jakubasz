#indef FIGURE_H
#define FIGURE

#include <iostream>
using namespace std;

class figure{
    public:
    figure(): pole(0) {}
    figure(double p)
    double get_pole(){return pole;}
    void set_pole(double p){pole=p;}

    void print()
    {
        cout << "Pole= " << pole << '\n';
    }

    virtual void id()
    {
        cout << ""
    }
    protected:
    double pole:

};

#endif