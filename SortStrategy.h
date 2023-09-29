#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class SortStrategy abstract
{
public:
	virtual void Sort(std::vector <std::string>& v) abstract;
};

