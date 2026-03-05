#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

//структура 
struct Patient
{
	string name;
	string surname;
	string birth;

};
int main() 
{
	ifstream file("patients.txt");

	string line;
	while (getline(file, line)) {
	}
}