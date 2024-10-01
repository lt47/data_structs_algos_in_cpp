## Header Files
- A class should have the following header file structure:
```c++
#ifndef ALL_KINDS_H
#define ALL_KINDS_H

#endif
```

i.e. it should start with `ifndef` and `define` followed by the the class name using the underscore naming convention, capital letters and the letter H. And the last item in the header file should be `#endif`. 

- The header file should include an override for the `<<` operator that is used to print the class contents as a string to the console. E.g. 
```c++
std::ostream& operator<<(std::ostream& out, const AllKinds& ak);
```

- General format/Example of a class header file. 
```c++
#ifndef ALL_KINDS_H
#define ALL_KINDS_H

  
#include <string>
#include <iostream>

  
//Reinforcement 17 - Data Structures & Algorithms in C++.
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
```
