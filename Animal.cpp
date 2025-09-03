
#include "Animal.h"

Animal::Animal(std::string speciesName, unsigned int discoveryYear)
    : species(speciesName), year_discovered(discoveryYear) {}

Animal::Animal() : species(""), year_discovered(0) {}

void Animal::display() const {
    std::cout << species << " [" << year_discovered << "]" << std::endl;
}
    //   Animal() :: Animal ("string speciesName, unsigned int discoveryYear");


    //     void Animal :: display() {
    //       std::cout << species << " [" << year_discovered << "]" << endl;
    //   }

    // Animal :: Animal (species)
    // {
    //     string species = "";
    //   unsigned int year_discovered = 0;
    // }