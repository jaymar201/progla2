#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		string name;
		int id_num;
		int num_of_subjects;
		int num_books;
};

class prof{
	public:
		string name;
		int id_num;
		int tin;
};

class staff{
	string name;
	int id_num;
	int sss;
};

int main(){
	student stud;
	cout << "Name of Student: ";
	cin >> stud.name;
	cout << "Name: " << stud.name;
	
 	cout << "ID Number of Student: ";
	cin >> stud.id_num;
	cout << "ID Number: " << stud.id_num;
	
	cout << "Number of Subjects: ";
	cin >> stud.num_of_subjects;
	cout << "Subjects: " << stud.num_of_subjects;

	cout << "Number of Books: ";
	cin >> stud.num_of_subjects;
	cout << "Books: " << stud.num_books;	
	
}
