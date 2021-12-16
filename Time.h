//Time object calculates hours, minutes and seconds and returns its values via getters
#ifndef Time_h
#define Time_h

class Time
{
public:
  //setters
  void setHours(int hours);
  void setMinutes(int minutes);
  void setSeconds(int seconds);
  
  //getters  
  float timeInHours();
  float timeInMinutes();
  int timeInSeconds();
  
private:
 // setting up vaiables

 float hour;
 float minute;
 int second;
};

#endif