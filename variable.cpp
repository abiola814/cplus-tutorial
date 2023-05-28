#include <iostream>

int main(){
    //integer (wholenumber)
    int x; //declearation
    x = 5; // assignment
    
    //sum 
    std::cout << x + 7 << std::endl;
    //double ( decimal number)
    double price;
    price = 30.90;

    std::cout << price << '\n';

    //single character

    char grade = 'A';
    std::cout << grade << std::endl;
    // boolean (true or false)

    bool student =false;
    bool forsale = true;

    std::cout << forsale << "\n";

    //string (object that represent a sequence of text)
    std::string name = "bro";
    std::string food = "apple";

    std::cout << name << "  " << food ;

    return 0;
}