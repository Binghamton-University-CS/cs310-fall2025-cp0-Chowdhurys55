#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"

class AnimalsInZoo {
   public:
      AnimalsInZoo();                     
      AnimalsInZoo(const Animal& a);      
      
      void display() const;

      // helper: to set an animal later
      void setAnimal(const Animal& a);

   private:
      int numAnimals;
      Animal animal;
};

#endif