#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char firstName[10];
	char lastName[10];
	cout<<"First Name:";
	cin.getline(firstName,10);
	cout<<"Last Name:";
	cin.getline(lastName,10);
	cout<<"Hi "<<firstName<<lastName<<".";
	return 0;
}