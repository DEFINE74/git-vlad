#include "module.h"

#include <iostream>

using std::cout, std::endl;


void firstMSG() {
  cout << "created in MASTER. this is -> first msg" << endl;
}
void secondMSG() {
  cout << "created in FEATURE. this is -> second msg" << endl;
}
void thirdMSG() {
  cout << "created in FEATURE. this is -> third msg" << endl;
}