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

int main(){
    AllKinds ak1 = AllKinds(1, 2L, 3.5f);

    cout << "1.) Float and Integer Sum = " << ak1.floatAndIntSum() << "\n"
    << "2.) Integer and Long Sum = " << ak1.intAndLongSum() << "\n"
    << "3.) Long and Float Sum = " << ak1.longAndFloatSum() << "\n"
    << "4.) Integer, Long and Float Sum = " << ak1.intLongAndFloatSum() << "\n";

    return 0;
}