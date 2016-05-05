#pragma once

#include <string>
#include <list>

#include "student.h"

class professor
{
public:
	professor();
	virtual ~professor();

	std::string surname;
	std::string name;
	std::string patronymic;
	bool male;
	unsigned int age;

	void lecture();
	void seminar();
	void setSeminarMark(student *Student);
	void consultation();
	void answerQuestion();
	void exam();
	void setExamMark(student *Student);
	void addSubject(std::string Subject);
	void removeSubject(std::string Subject);

private:
	std::list<std::string> subjects;

};

