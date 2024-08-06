#include "module.h"

#include <iostream>

using std::cout, std::endl;


void firstMSG() {
  cout << "created in MASTER. this is -> first msg" << endl;
}
void secondMSG() {
  cout << "created in OLD FEATURE. this is -> second msg" << endl;
}
void thirdMSG() {
  cout << "created in OLD FEATURE. this is -> third msg" << endl;
}
void fourthMSG() {
  cout << "created in NEW FEATURE. this is -> fourth msg" << endl;
}
void fifthMSG() {
  cout << "THIS IS IMPORTANT MESSAGE. WORKING WITH PULL REQUEST!" << endl;
}