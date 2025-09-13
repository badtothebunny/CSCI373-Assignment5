/*
 *      Author: MaksiKutrolli
 */

#include "IteratorG.h"

//Added the following include statement - Maria Psomas
#include "Point2D.h"

template<typename T>
IteratorG<T>::IteratorG(DNodeG<T> *u) {
	v = u;
}

template<typename T>
T& IteratorG<T>::operator *() {
	return v->elem;
}

template<typename T>
bool IteratorG<T>::operator ==(const IteratorG &p) const {
	return v == p.v;
}

template<typename T>
bool IteratorG<T>::operator !=(const IteratorG &p) const {
	return v != p.v;
}

template<typename T>
IteratorG<T>& IteratorG<T>::operator ++() {
	 v = v->next;
	 return *this;
}

template<typename T>
IteratorG<T>& IteratorG<T>::operator --() {
	v = v->prev;
	return *this;
}


template class IteratorG<int>;
template class IteratorG<string>;

//Added the following template class - Maria Psomas
template class IteratorG<Point2D>;
