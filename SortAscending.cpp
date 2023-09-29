#include "SortAscending.h"

void SortAscending::Sort(std::vector<std::string>& v)
{
	for (int k = v.size() - 1; k > 0; k--) {
		for (int i = 0; i < k; i++) {
			if (v[i] > v[i + 1]) {
				std::string buf = v[i];
				v[i] = v[i + 1];
				v[i + 1] = buf;
			}
		}
	}
}
