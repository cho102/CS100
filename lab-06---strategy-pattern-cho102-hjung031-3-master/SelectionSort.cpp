#include "SelectionSort.hpp"
#include "sort.hpp"
using namespace std;

void SelectionSort::sort(Container* container) {
       for (int i=0; i < container->size()-1; ++i)
       {
		int min = i;
		for (int j = i+1; j < container->size(); ++j)
                {
                        if (container->at(i)->evaluate() < container->at(min)->evaluate())
                        {
                        	min = j;
                        }
                	container->swap(min, i);
		}
	}
}
