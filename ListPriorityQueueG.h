//ListPriorityQueueG class header file
//Programmed by Badtothebunny

#ifndef LISTPRIORITYQUEUEG_H_
#define LISTPRIORITYQUEUEG_H_

#include "PriorityQueueG.h" //Pure virtual class
#include "Point2D.h" //Element and Comparator 
#include "PriorityQueueException.h" //Exception
#include "NodeListG.h"
#include "IteratorG.h"

using namespace std;

template <typename E, typename C, typename R>
class ListPriorityQueueG: public PriorityQueueG<E, C, R> 
{
	private:
		NodeListG<E> L; // priority queue contents, E represents the element type
		C comp; // comparator
	public:
		ListPriorityQueueG(); //Constructor
		virtual ~ListPriorityQueueG();//Destructor
		int size() const; // number of elements
		bool empty() const; // is the queue empty?
		void insert(const E& e); // insert element
		const E& min() const throw(R); // minimum element
		void removeMin() throw(R); // remove minimum
};


#endif /* LISTPRIORITYQUEUESTL_H_ */

