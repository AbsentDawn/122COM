#include "DBSystem.h"



DBSystem::DBSystem()
{
}


DBSystem::~DBSystem()
{
}

void DBSystem::MainLoop()
{
	while (IsRunning()) {
		std::cout << "Welcome...\nWhat would you like to do: \n";
		printf("1). Add Student\n2). Edit Student\n3). View Student\n4). Delete Students\nSelect: ");
		std::cin >> _input;
		switch (_input) {
		case '1':
			AddStudent(_stu);
			break;
		case '2':
			EditStudents();
			break;
		case '3':
			ViewStudents();
			break;
		case '4':
			DeleteStudent();
			break;
		case '0':
			Exit();
			break;
		default:
			printf("Invalid Input\n");
			system("PAUSE");
			std::cout << std::endl;
			break;
		}
	}
}

void DBSystem::AddStudent(Students newStudent)
{
	int id, pt1, pt2, marks;
	string name;
	char input;

	printf("\n");

	printf("Enter Students ID: ");
	std::cin >> id;
	newStudent.SetID(id);

	printf("Enter Students Name: ");
	std::cin >> name;
	newStudent.SetName(name);

	printf("Enter Students Phase Test 1 Score: ");
	std::cin >> pt1;
	newStudent.SetPT1(pt1);

	printf("Enter Students Phase Test 2 Score: ");
	std::cin >> pt2;
	newStudent.SetPT2(pt2);

	printf("Enter Students Overall Mark: ");
	std::cin >> marks;
	newStudent.SetMarks(marks);

	_students.push_back(newStudent);

	printf("Student Added...\n");
	std::cout << std::endl;

	printf("Would you like to add another? (Y/N): ");
	std::cin >> input;
	switch (input) {
	case 'Y':
	case 'y':
		printf("\n");
		AddStudent(_stu);
		break;
	case 'N':
	case 'n':
		printf("\n");
		MainLoop();
		break;
	default:
		printf("Invalid Input\n");
		system("PAUSE");
		printf("\n");
		break;
	}
}

void DBSystem::DeleteStudent()
{
	// Iterator for list of students
	list<Students>::iterator lit;
	string name;

	if (!_students.empty()) {

		printf("Enter student name: ");
		std::cin >> name;

		for (lit = _students.begin(); lit != _students.end(); lit++) {

			if ((*lit).GetName() == name) {
				lit = _students.erase(lit);
				printf("\nStudent deleted...\n");
				system("PAUSE");
			}
		}

		printf("\n");
		
	}
	else {
		printf("List is empty...\n");
		system("PAUSE");
	}

	printf("\n");
	MainLoop();
}

void DBSystem::ViewStudents()
{
	list<Students>::iterator lit;

	printf("\n\nStudent Name\tPT1\tPT2\tOverall Mark\n");
	for (lit = _students.begin(); lit != _students.end(); lit++) {
		cout << (*lit).GetName() << "\t\t";
		cout << (*lit).GetPT1() << "\t";
		cout << (*lit).GetPT2() << "\t";
		cout << (*lit).GetMarks();
		cout << endl;
	}

	system("PAUSE");
	printf("\n");
	MainLoop();
}

void DBSystem::EditStudents()
{
	printf("You have selected to Edit a student\n");
	system("PAUSE");
	std::cout << std::endl;
	MainLoop();
}

void DBSystem::Exit()
{
	_mRunning = false;
	printf("Exiting...\n");
	system("PAUSE");
}
