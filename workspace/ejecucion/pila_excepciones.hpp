#pragma once
#include <iostream>
#include <iomanip>
#include <exception>

using namespace std;

class stack_exception_t: public exception
{
};

class empty_stack_exception: public stack_exception_t
{
public:
	virtual const char* what(void) const throw ()
	{
		return "Stack template exception: empty stack";
	}
};

class stack_overflow_exception: public stack_exception_t
{
public:
	virtual const char* what(void) const throw ()
	{
		return "Stack template exception: stack overflow";
	}
};
