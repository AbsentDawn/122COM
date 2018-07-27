#include "Students.h"



Students::Students()
{
}

Students::~Students()
{
}

void Students::SetID(int id)
{
	_id = id;
}

void Students::SetName(string name)
{
	_name = name;
}

void Students::SetPT1(int pt1)
{
	_pt1 = pt1;
}

void Students::SetPT2(int pt2)
{
	_pt2 = pt2;
}

void Students::SetMarks(int marks)
{
	_marks = marks;
}

int Students::GetID()
{
	return _id;
}

string Students::GetName()
{
	return _name;
}

int Students::GetPT1()
{
	return _pt1;
}

int Students::GetPT2()
{
	return _pt2;
}

int Students::GetMarks()
{
	return _marks;
}
