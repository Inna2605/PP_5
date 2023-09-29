#pragma once
#include "SortStrategy.h"
class SortedArray
{
	std::vector<std::string>vector;
	SortStrategy* sortstrategy;
public:
	void SetSortStrategy(SortStrategy* sortstrategy);
	void Add(std::string name);
	void Sort();
};

