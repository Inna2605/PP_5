#include "SortedArray.h"

void SortedArray::SetSortStrategy(SortStrategy* sortstrategy)
{
	this->sortstrategy = sortstrategy;
}

void SortedArray::Add(std::string name)
{
	vector.push_back(name);
}

void SortedArray::Sort()
{
	sortstrategy->Sort(vector);
	for (std::string name : vector) {
		std::cout << "" + name << std::endl;
	}
	std::cout << std::endl;
}
