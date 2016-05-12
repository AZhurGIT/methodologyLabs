#pragma once

class Client
{
public:
	Client();
	virtual ~Client();

	void setName(std::string Name) {name = Name;}
	std::string getName(void) { return name; }
	void setSurname(std::string Surname) { surname = Surname; }
	std::string getSurname(void) { return surname; }
	void setPatronymic(std::string Patronymic) { patronymic = Patronymic; }
	std::string getPatronymic(void) { return patronymic; }
	
	std::string getFullName(void);

private: 
	std::string name;
	std::string surname;
	std::string patronymic;

};

