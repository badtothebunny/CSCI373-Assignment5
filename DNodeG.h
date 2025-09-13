/*
 *      Author: MaksiKutrolli
 */

#ifndef DNODEG_H_
#define DNODEG_H_

#include <iostream>

using namespace std;

template<typename T>
class NodeListG;

template<typename T>
class IteratorG;

template <typename T>
class DNodeG{
private:
	T elem;
	DNodeG<T> *next;
	DNodeG<T> *prev;

	friend class NodeListG<T>;
	friend class IteratorG<T>;
};



#endif /* DNODEG_H_ */
