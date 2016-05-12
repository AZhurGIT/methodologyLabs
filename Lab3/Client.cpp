#include "stdafx.h"
#include "Client.h"


Client::Client()
{
}


Client::~Client()
{
}

std::string Client::getFullName(void)
{
	return name + " " + patronymic + " " + surname;
}
