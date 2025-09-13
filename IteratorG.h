/*
 *      Author: MaksiKutrolli
 */

#ifndef ITERATORG_H_
#define ITERATORG_H_

#include "DNodeG.h"
#include "NodeListG.h"

template <typename T>
class IteratorG {
public:
	T& operator*(); // reference to the element
	bool operator==(const IteratorG& p) const; // compare positions
	bool operator!=(const IteratorG& p) const;
	IteratorG& operator++(); // move to next position
	IteratorG& operator--(); // move to previous position

	friend class NodeListG<T>; // give NodeList access
private:
	DNodeG<T>* v; // pointer to the node
	IteratorG(DNodeG<T>* u); // create from node
};

#endif /* ITERATORG_H_ */
