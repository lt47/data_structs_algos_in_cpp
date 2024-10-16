#ifndef ALL_KINDS_H
#define ALL_KINDS_H

#include <string>
#include <iostream>

//Reinforcement 17. 
class AllKinds{
    public:
        AllKinds();
        AllKinds(int intVal, long longVal, float floatVal);
        int getIntValue() const {return intValue;}
        void setIntValue(int intVal){intValue = intVal;}
        long getLongValue() const {return longValue;}
        void setLongValue(long longVal){longValue = longVal;}
        float getFloatValue() const {return floatValue;}
        void setFloatValue(float floatVal){floatValue = floatVal;}

        /*The number of unique combinations in a set is given by - 2^n - n - 1. 
        Therefore, there will be 4.*/
        long intAndLongSum(){return (intValue + longValue);};
        float longAndFloatSum(){return (longValue + floatValue);};
        float floatAndIntSum(){return (floatValue + intValue);};
        float intLongAndFloatSum(){return (intValue + longValue + floatValue);};
    private: 
        int intValue;
        long longValue;
        float floatValue;
};


// Print All Kinds Class information. 
std::ostream& operator<<(std::ostream& out, const AllKinds& ak);
#endif