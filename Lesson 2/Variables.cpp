#include <iostream>
using namespace std;

int main() {
  const int MINUTES_PER_HOUR = 60;
  int numHour = 3;
  int minutes = 0;
  //MINUTES_PER_HOUR++;
  numHour++;
  minutes = numHour * MINUTES_PER_HOUR;
  cout << "There are "<< minutes << " minutes in "<< numHour <<" hours"<<endl;

  unsigned int zeroHour = 0;
  zeroHour--;
  cout<<"1 hour before zero hour is "<< zeroHour<< endl;
  return 0;
}
