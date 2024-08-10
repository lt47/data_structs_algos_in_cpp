#include <string>
#include <iostream>

class Flower{
    public:
        Flower(); //Default constructor
        Flower(const std::string& flowerName, const int& numberOfPedals, const float& flowerPrice); 
        Flower(const Flower& flower);// Copy constructor
        ~Flower(); // Destructor.
        /*I will be defining the getters and setters inline.*/
        std::string getName() const {return name;};
        void setName(std::string flowerName){name = flowerName;};
        int getPedals() const {return pedals;};
        void setPedals(int numberOfPedals){pedals = numberOfPedals;};
        float getPrice() const {return price;};
        void setPrice(float flowerPrice){price = flowerPrice;};
    private:
        std::string name; 
        int pedals;
        float price;
};

/*Constructors*/
/**Default constructor.*/
Flower::Flower(){
    name = "BLANK";
    pedals = 0;
    price = 0.0;
}

/**Constructor with member values.*/
Flower::Flower(const std::string& flowerName, const int& numberOfPedals, const float& flowerPrice){
    name = flowerName;
    pedals = numberOfPedals;
    price = flowerPrice;
}

/** Copy constructor.*/
Flower::Flower(const Flower& flower){
    name = flower.name;
    pedals = flower.pedals;
    price = flower.price;
}

/** Destructor. Unecessary in this case because nothing was initialized with new. */
Flower::~Flower(){
    //delete name; //Just an example if the name variable was intialized with new. 
}

int main(){
    Flower flower1 = Flower();
    std::cout << flower1.getName() << std::endl;
    Flower flower2 = Flower("rose", 5, 12.0);
    std::cout << flower2.getName() << std::endl;
    Flower flower3(flower2);
    std::cout << flower3.getName() << std::endl;
    flower3.setName("patchouli");
    std::cout << flower3.getName() << std::endl;
    std::cout << flower2.getName() << std::endl;

}