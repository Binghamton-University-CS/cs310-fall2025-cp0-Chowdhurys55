#include "AnimalsinZoo.h"
#include <iostream>

AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}

AnimalsInZoo::AnimalsInZoo(const Animal& a) : numAnimals(1), animal(a) {}

void AnimalsInZoo::display() const {
   std::cout << "Number of animals: " << numAnimals << std::endl;
   if (numAnimals == 1) {
      animal.display();
   }
}

void AnimalsInZoo::setAnimal(const Animal& a) {
   animal = a;
   numAnimals = 1;
}