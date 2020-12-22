#ifndef __SELECTION_SORT__
#define	__SELECTION_SORT__

#include "container.hpp"
#include "sort.hpp"
using namespace std;

class SelectionSort : public Sort{
	public:
		SelectionSort() {};
		
		void sort(Container* container) {
			int min;
			for (int i=0; i < container->size()-1; ++i)
			{
                		min = i;
			//	cout << "min: " << i << endl; 
                		for (int j = i+1; j < container->size(); ++j)
				{
                        		if (container->at(j)->evaluate() < container->at(min)->evaluate())
                        		{	
                                		min = j;
			//			cout << "min changed: " << min  << endl;
                        		}
                		}
				container->swap(min, i);
			//	cout << "container->at(" << min << ") = " <<container->at(min)->evaluate() << endl;
			//	cout << "container->at(" << i << ") = " << container->at(i)->evaluate() << endl;
        		}
		}
};
#endif
