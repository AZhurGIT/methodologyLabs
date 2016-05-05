#pragma once

#include <list>
#include <string>

#include "department.h"

class HS
{
public:
	HS();
	virtual ~HS();

	std::string name;

private: 
	std::list<department>departments;



};

