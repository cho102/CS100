#include "sort.hpp"
#include "container.hpp"
#include "VectorContainer.hpp"

void VectorContainer::add_element(Base* element) {vec.push_back(element);}
                
void VectorContainer::print() 
{
	for (int i = 0; i < vec.size(); ++i)	
	{                        
		cout << vec.at(i)->stringify() << endl;
	}
}

void VectorContainer::sort()
{
	try {
		if (sort_function != nullptr)
        	{       
		//calls on the previously set sorting-algorithm
			sort_function->sort(this);
        	}
        	else 
		{
			throw "No sort method selected!";
		}
	}
	catch (const char* msg) {
		cout << msg << endl;
	}		
}
                
void VectorContainer::swap(int i, int j) 
{
	Base* temp = vec.at(i);
        vec.at(i) = vec.at(j);
        vec.at(j) = temp;
}
	
Base* VectorContainer::at(int i) {return vec.at(i);}
                
int VectorContainer::size() {return vec.size();}
