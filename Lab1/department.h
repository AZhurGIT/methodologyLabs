#pragma once

#include <list>
#include <string>

#include "course.h"
#include "student.h"
#include "professor.h"


class department
{
public:
	department();
	virtual ~department();

	std::string name;

	void addProfessor(professor* Professor);
	void removeProfessor(std::string Surname, std::string Name, std::string Patronymic, unsigned int Age);
	void addStudent(student *Student, unsigned int Course);
	void removeStudent(std::string Surname, std::string Name, std::string Patronymic, unsigned int Age,unsigned int Cource);
	void transferStudent(student* Student, course From, course To);


private: 

	std::list<professor>professors;
	std::list<course>courses;

};

