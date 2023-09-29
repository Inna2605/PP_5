#pragma once
#include "SortStrategy.h"
class SortDescending :
    public SortStrategy
{
public:
    void Sort(std::vector<std::string>& v)override;
};

