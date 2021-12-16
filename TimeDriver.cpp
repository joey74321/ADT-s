#include <iostream>
using namespace std;

#include <cassert>

#include "Time.h" 

int main() {
    //checks to see if they passed
    Time time;
    time.setHours(4);
    time.setMinutes(10);
    time.setSeconds(100);

    float hourUp = time.timeInHours();
    float min = time.timeInMinutes();
    int sec = time.timeInSeconds();

    cout << "Time in hours " <<  hourUp << endl;
    cout << "Time in minutes " << min << endl;
    cout << "Time in seconds " << sec;



}