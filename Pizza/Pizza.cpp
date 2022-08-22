#include "include.h"
#include "Pizza.h"

int main() {
  Pizza stdPizza;
  Pizza special("pineapple");
  Pizza deluxeSpecial("sausage", 16);
  Pizza veryDeluxeSpecial("lobster", 20, 17.99);
     cout<<"The standard pizza is: ";
     stdPizza.displayValues();
     cout<<"Today's special is ";
     special.displayValues();
     cout<<"The deluxe special is ";
     deluxeSpecial.displayValues();
     cout<<"And the very deluxe special is ";
     veryDeluxeSpecial.displayValues();
}
