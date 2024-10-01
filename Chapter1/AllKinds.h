#ifndef ALL_KINDS_H
#define ALL_KINDS_H

#include <string>
#include <iostream>

//Reinforcement 17. 
class AllKinds{
    public:
        AllKinds(int intValue=1, long longValue=1, float floatValue=1.0);
        int getIntValue() {return intValue;}
        void setIntValue(int intVal){intValue = intVal;}
        long getLongValue() {return longValue;}
        void setLongValue(long longVal){longValue = longVal;}
        float getFloatValue() {return floatValue;}
        void setFloatValue(float floatVal){floatValue = floatVal;}

        float sumOfEachCombination();
    
    private: 
        int intValue;
        long longValue;
        float floatValue;
};


// Print All Kinds Class information. 
std::ostream& operator<<(std::ostream& out, const AllKinds& ak);
#endif