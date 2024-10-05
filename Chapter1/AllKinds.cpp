#include "AllKinds.h"

using namespace std;

/** Default constructor that initializes all types to a nonzero value.*/
AllKinds::AllKinds(){
    intValue = 1;
    longValue = 1L;
    floatValue = 1.0f;
}

AllKinds::AllKinds(int intVal, long longVal, float floatVal){
    intValue = intVal;
    longValue = longVal;
    floatValue = floatVal;
}

ostream& operator<<(ostream& out, const AllKinds& ak){
    out << "IntValue = " << ak.getIntValue() << "\n"
        << "LongValue = " << ak.getLongValue() << "\n"
        << "FloatValue = " << ak.getFloatValue() << "\n";
    
    return out;
}