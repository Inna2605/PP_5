#pragma once
#include "SortStrategy.h"
class SortAscending :
    public SortStrategy
{
public:
    void Sort(std::vector<std::string>& v)override;
};

