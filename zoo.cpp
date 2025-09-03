#include "Animal.h"

// int main() {
//    Animal *animal1 = new Animal("African Elephant", 1758);
//    Animal animal2("Giant Panda", 1869);

//    delete animal1;
//    animal1 = new Animal("Snow Leopard", 1777);

//    animal2.display();
//    animal1->display();

//    delete animal1;
// }

#include "AnimalsinZoo.h"

int main() {
   AnimalsInZoo zoo;

   Animal panda("Giant Panda", 1869);
   zoo.setAnimal(panda);

   zoo.display();

   return 0;
}
