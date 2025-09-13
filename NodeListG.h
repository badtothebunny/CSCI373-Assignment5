/*
 *      Author: MaksiKutrolli
 */

#ifndef NODELISTG_H_
#define NODELISTG_H_

#include "ListG.h"

#include "DNodeG.h"

template <typename T>
class IteratorG;


template <typename T>
class NodeListG: public ListG<T, IteratorG<T>> {

public:
	NodeListG();
	virtual ~NodeListG();
	int size() const; // list size
	bool empty() const; // is the list empty?

	IteratorG<T> begin() const; // beginning position
	IteratorG<T> end() const; // (just beyond) last position
	void insertFront(const T& e); // insert at front
	void insertBack(const T& e); // insert at rear
	void insert(const IteratorG<T>& p, const T& e); // insert e before p
	void eraseFront(); // remove first
	void eraseBack(); // remove last
	void erase(const IteratorG<T>& p); // remove p

	void print();


private: // data members
	int n; // number of items
	DNodeG<T>* header; // head-of-list sentinel
	DNodeG<T>* trailer; // tail-of-list sentinel

};


#endif /* NODELISTG_H_ */
