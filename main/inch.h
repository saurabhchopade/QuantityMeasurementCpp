#include <iostream>
using namespace std;

class Inch {
    double value;
public:
    Inch(double value);
   
    bool operator== (Inch) const;
    bool operator== (Inch*) const;
};
