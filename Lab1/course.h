#pragma once

#include <list>

#include "student.h"

class course
{
public:
	course();
	virtual ~course();

	unsigned int number;
	std::list<student>students;

};

