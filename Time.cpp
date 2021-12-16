#include "Time.h"

static const float TOTAL_MINUTES =60.0f;
static const float TOTAL_SECONDS =3600.0f;
static const int TOTAL_MIN = 60;
//setters
void Time:: setHours(int hours)
{
    hour = hours;
}
void Time:: setMinutes(int minutes)
{
    minute = minutes;
}

void Time:: setSeconds(int seconds)
{
    second = seconds;
}

//getters
//calculates hours
float Time::timeInHours()
{
    return hour + (minute / TOTAL_MINUTES) + (second / TOTAL_SECONDS);
}

//calculates minutes
float Time::timeInMinutes()
{
   return minute + (hour * TOTAL_MINUTES) + (second / TOTAL_MINUTES);
}

//calculates seconds
int Time::timeInSeconds()
{
    return hour * TOTAL_MIN * TOTAL_MIN + minute * TOTAL_MIN + second;;
}

