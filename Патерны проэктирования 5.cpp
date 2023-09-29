// Реализовать паттерн "Стратегия" на основе примера, приведенного в презентации. 
// Применить две стратегии сортировки - по возрастанию и по убыванию


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "SortStrategy.h"
#include "SortDescending.h"
#include "SortAscending.h"
#include "SortedArray.h"
using namespace std;

int main()
{
	SortedArray ar;
	ar.Add("Strategy");
	ar.Add("Observer");
	ar.Add("Iterator");
	ar.Add("Mediator");

	SortDescending Descending;
	ar.SetSortStrategy(&Descending);
	ar.Sort();
	

	SortAscending Ascending;
	ar.SetSortStrategy(&Ascending);
	ar.Sort();
	
}