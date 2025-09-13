/*
 *      Author: MaksiKutrolli
 */

#ifndef LISTG_H_
#define LISTG_H_


template <typename T, typename I>
class ListG{
public:
	virtual ~ ListG() = default;

	virtual int size() const = 0; // list size
	virtual bool empty() const = 0; // is the list empty?

	virtual I begin() const = 0; //Return an iterator referring to the first element of L; same as end() if L is empty
	virtual I end() const = 0; //Return an iterator referring to an imaginary element just 	after the last element of L.
	virtual void insertFront(const T& e)  = 0; // inserts in front
	virtual void insertBack(const T& e)  = 0; // inserts at the end
	virtual void insert(const I &p, const T& e)  = 0; // Insert a new element e into L before position p in List
	virtual void eraseFront() = 0; // Remove the first element of List
	virtual void eraseBack() = 0; // Remove the last element of List
	virtual void erase(const I &p) = 0; // Remove from Lilst the element at position p; invalidates p as a position.

};



#endif /* LISTG_H_ */



