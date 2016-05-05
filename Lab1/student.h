#pragma once

#include <string>
#include <list>
class student
{
public:
	student();
	virtual ~student();

	std::string surname;
	std::string name;
	std::string patronymic;
	bool male;
	unsigned int age;

	void report();
	void askQuestion();
	void answerQuestions();

	void addSubject(std::string Subject);
	void removeSubject(std::string Subject);

private:
	std::list<std::string>subjects;
	std::list<unsigned int>seminarMarks;
	std::list<unsigned int>examMarks;
};

