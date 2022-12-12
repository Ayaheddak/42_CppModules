#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include <string>
#include <iostream>
#include <cstdint>
typedef struct s_Data
{
	int d;
}Data;

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
#endif