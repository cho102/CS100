#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__

#include "sort.hpp"
#include "container.hpp"

class BubbleSort : public Sort {
    public:
	BubbleSort() { };

	void sort(Container* container) {
	    int i, j, flag = 1;    // set flag to 1 to start first pass
      	    int temp;             // holding variable
            int containerSize = container->size(); 
            for(i = 1; (i <= containerSize) && flag; i++){
                flag = 0;
                for (j = 0; j < (containerSize - 1); j++){
                    if (container->at(j+1)->evaluate() < container->at(j)->evaluate())      // ascending order simply changes to <
            	    { 
                        container->swap(j,j+1);             // swap elements
                        flag = 1;               // indicates that a swap occurred.
                    }
                }    
           }
           return;   //arrays are passed to functions by address; nothing is returned
	}
};


#endif //__BUBBLESORT_HPP__
