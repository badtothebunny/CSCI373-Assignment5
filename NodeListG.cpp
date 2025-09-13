/*
 *      Author: MaksiKutrolli
 */

#include "NodeListG.h"

#include "IteratorG.h"

//Added the following include statement - Maria Psomas
#include "Point2D.h"

template<typename T>
NodeListG<T>::NodeListG() {
	n = 0; // initially empty
	header = new DNodeG<T>; // create sentinels
	trailer = new DNodeG<T>;
	header->next = trailer; // have them point to each other
	trailer->prev = header;

}

template<typename T>
NodeListG<T>::~NodeListG() {
}

template<typename T>
int NodeListG<T>::size() const {
	return n;
}

template<typename T>
bool NodeListG<T>::empty() const {
	return n==0;
}

template<typename T>
IteratorG<T> NodeListG<T>::begin() const {
	return IteratorG<T>(header->next);
}

template<typename T>
IteratorG<T> NodeListG<T>::end() const {
	return IteratorG<T>(trailer);
}

template<typename T>
void NodeListG<T>::insertFront(const T &e)  {
	insert(begin(), e);
}

template<typename T>
void NodeListG<T>::insertBack(const T &e) {
	insert(end(), e);
}

template<typename T>
void NodeListG<T>::insert(const IteratorG<T> &p, const T &e) {

	DNodeG<T>* w = p.v; // p’s node
	DNodeG<T>* u = w->prev; // p’s predecessor
	DNodeG<T>* v = new DNodeG<T>; // new node to insert
	v->elem = e;
	v->next = w; w->prev = v; // link in v before w
	v->prev = u; u->next = v; // link in v after u
	n++;

}

template<typename T>
void NodeListG<T>::eraseFront() {
	erase(begin());
}

template<typename T>
void NodeListG<T>::eraseBack() {
	 erase(--end());
}

template<typename T>
void NodeListG<T>::erase(const IteratorG<T> &p) {// remove p
	DNodeG<T>* v = p.v; // node to remove
	DNodeG<T>* w = v->next; // successor
	DNodeG<T>* u = v->prev; // predecessor
	u->next = w; w->prev = u; // unlink p
	delete v; // delete this node
	n--; 
}

template<typename T>
void NodeListG<T>::print(){
	IteratorG<T> p(begin());
	for (; p != end(); ++p)
		cout<< p.v->elem<< " <=> ";
	cout<<"NULL"<<endl;
}

template class NodeListG<int>;
template class NodeListG<string>;

//Added the following template class - Maria Psomas
template class NodeListG<Point2D>;
