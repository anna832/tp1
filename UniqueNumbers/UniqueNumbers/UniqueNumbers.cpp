#define UNIQUENUMBERS_EXPORT
#include "pch.h"
#include "UniqueNumbers.h"

int UniqueN(std::vector<int> input) {
	return std::set<int>(input.begin(), input.end()).size();

}