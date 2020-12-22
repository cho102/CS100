#include <iostream>
using namespace std;

#include "Task.hpp"

Task::Task(string ttle) {
        title = ttle;
        hoursPerDay = 0;
        daysUntilDDay = 0;
        maxDays = 0;
}

string Task::getName() {
        return title;
}

void Task::calculateTimeEachDay() {
  return;
}

double Task::outputTimer() {
  return hoursPerDay;
}

void Task::printGuide() {
    printSpace();
    cout << getName() << " (Total hours: " << hoursPerDay << ")" << endl;
}

int Task::getMax() {
  return maxDays;
}

void Task::changeHPD(double hpd) {
  this->hoursPerDay = hpd;
}

void Task::changeMax(int max) {
  this->maxDays = max;
}
