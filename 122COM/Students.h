#pragma once
#include <string>
using namespace std;
class Students
{
public:
	Students();
	~Students();
	
	// Setters
	void SetID(int id);
	void SetName(string name);
	void SetPT1(int pt1);
	void SetPT2(int pt2);
	void SetMarks(int marks);

	// Getters
	int GetID();
	string GetName();
	int GetPT1();
	int GetPT2();
	int GetMarks();

private:
	int _id; 
	string _name;
	int _pt1;
	int _pt2;
	int _marks;
};

