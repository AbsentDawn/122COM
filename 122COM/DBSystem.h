#pragma once
#include <iostream>
#include <list>
#include "Students.h"
class DBSystem
{
public:
	DBSystem();
	~DBSystem();

	void MainLoop();

	void AddStudent(Students student);
	void DeleteStudent();
	void ViewStudents();
	void EditStudents();

	void Exit();

	bool IsRunning() { return _mRunning; }

private:
	bool _mRunning = true;
	char _input;

	Students _stu;
	std::list<Students> _students;
	
};

