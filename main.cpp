//This program tests the utility of a ListPriorityQueueG class
//Programmed by Badtothebunny

#include "ListPriorityQueueG.h"

#include <iostream>
using namespace std;

int main()
{
	cout<<"LeftRight Sorting: "<<endl;
	ListPriorityQueueG<Point2D, LeftRight, PriorityQueueException> test1;
	test1.insert(Point2D(1,10));
	test1.insert(Point2D(7,1));
	test1.insert(Point2D(3,9));
	test1.insert(Point2D(9,2));
	while (!test1.empty())
	{
		cout<<test1.min()<<endl;
		test1.removeMin();
	}
	cout<<"BottomTop sorting: "<<endl;
	ListPriorityQueueG<Point2D, BottomTop, PriorityQueueException> test2;
	test2.insert(Point2D(1,10));
	test2.insert(Point2D(7,1));
	test2.insert(Point2D(3,9));
	test2.insert(Point2D(9,2));
	while (!test2.empty())
	{
		cout<<test2.min()<<endl;
		test2.removeMin();
	}
	return 0;
}

