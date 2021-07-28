#include "Base.hpp"

Base *generate(void)
{
	int len;
	len = rand() % 3;
	Base *result = nullptr;

	if (len == 0)
	{
		result = new A();
		std::cout<<"new A ";
	}
	else if (len == 1)
	{
		result = new B();
		std::cout<<"new B ";
	}
	else
	{
		result = new C();
		std::cout<<"new C ";
	}
	return result;
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p) != nullptr)
	{
		std::cout << "A!";
	}
	else if (dynamic_cast<B *>(p) != nullptr)
	{
		std::cout << "B!";
	}
	else if (dynamic_cast<C *>(p) != nullptr)
	{
		std::cout << "C!";
	}
	else
		std::cout<<"nothing"<<std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A &temp = dynamic_cast<A &>(p);
		(void)temp;
		std::cout << "A!";
		return;
	}
	catch (std::bad_cast exp)
	{
	}

	try
	{
		B &temp = dynamic_cast<B &>(p);
		(void)temp;
		std::cout << "B!";
		return;
	}
	catch (std::bad_cast exp)
	{
	}

	try
	{
		C &temp = dynamic_cast<C &>(p);
		(void)temp;
		std::cout << "C!";
		return;
	}
	catch (std::bad_cast exp)
	{
	}
	std::cout<<"nothing"<<std::endl;
}
