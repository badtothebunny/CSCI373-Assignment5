
#include "ListPriorityQueueG.h"

//Constructor
template<typename E, typename C, typename R>
ListPriorityQueueG<E, C, R>::ListPriorityQueueG() 
{
//Constructor's body is empty
}

//Destructor
template<typename E, typename C, typename R>
ListPriorityQueueG<E, C, R>::~ListPriorityQueueG() 
{
//Destructor is also empty
}

//Size function
template<typename E, typename C, typename R>
int ListPriorityQueueG<E, C, R>::size() const 
{
	return L.size();
}

//Empty function
template<typename E, typename C, typename R>
bool ListPriorityQueueG<E, C, R>::empty() const 
{
	return L.empty();
}

//Insert function
template<typename E, typename C, typename R>
void ListPriorityQueueG<E, C, R>::insert(const E &e) 
{
	IteratorG<E> k = L.begin();
	while(k != L.end() && comp(*k, e))
		++k;
	L.insert(k, e);
}

//First element function
template<typename E, typename C, typename R>
const E& ListPriorityQueueG<E, C, R>::min() const throw(R)
{
	if (empty())
		throw R("min of empty ListPriorityQueueG");
	IteratorG<E> k = L.begin();
	return *k;
}

//Removing the first element function
template<typename E, typename C, typename R>
void ListPriorityQueueG<E, C, R>::removeMin() throw(R)
{
	if (L.empty())
		throw R("remove from an empty ListPriorityQueueSTL");
	L.eraseFront();
}

//Template classes
template class ListPriorityQueueG<Point2D, LeftRight, PriorityQueueException>;
template class ListPriorityQueueG<Point2D, BottomTop, PriorityQueueException>;
