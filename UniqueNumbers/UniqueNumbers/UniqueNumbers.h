#pragma once
#include<vector>
#include<set>

#ifdef UNIQUENUMBERS_EXPORT
#define UNIQUENUMBERS_API __declspec(dllexport)
#else
#define UNIQUENUMBERS_API __declspec(dllimport)
#endif

UNIQUENUMBERS_API int UniqueN(std::vector<int> input);