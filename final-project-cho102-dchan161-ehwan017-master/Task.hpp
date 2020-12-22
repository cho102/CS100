#ifndef __TASK_HPP__
#define __TASK_HPP__

#include "UserGuide.hpp"

class Task : public UserGuide {
        public:
                Task(string);
                void calculateTimeEachDay();
                double outputTimer();
                void printGuide();
                string getName();
                int getMax();
                void changeHPD(double);
                void changeMax(int);

        private:
                string title;
                int maxDays;
                int daysUntilDDay;
                double hoursPerDay;
};

#endif
