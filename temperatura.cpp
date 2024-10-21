#include <iostream>

int main(){
    float fahrenheit;
    float celsius;
    

    std::cout << "Enter a temperature in degrees Fahrenheit: ";
    std::cin >> fahrenheit;

    celsius = (fahrenheit - 32.0) * (5.0/9.0);

    std::cout << "The temperature in degrees Celsius is: " << celsius << "\n";
    return main();
    

}