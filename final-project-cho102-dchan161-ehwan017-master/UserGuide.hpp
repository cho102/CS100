#ifndef __USER_GUIDE_HPP__
#define __USER_GUIDE_HPP__

#include <iostream>
#include <vector>
using namespace std;

class UserGuide {
        public:
                virtual double outputTimer() = 0;
                virtual void calculateTimeEachDay() = 0;
                virtual void printGuide() = 0;
                virtual string getName() = 0;
                virtual int getMax() = 0;
                virtual void changeHPD(double) = 0;
                virtual void changeMax(int) = 0;
                virtual void printSpace() { 
                  for (int i = 0; i < 2; ++ i) {
                  cout << " ";
                  }
                }
};

#endif
