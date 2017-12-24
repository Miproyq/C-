#include <iostream>
#include <string.h>

using namespace std;

float convert(int,int);

int main(){
	int density;
	int Mr;
	char substance[20]; 
	float conc;
	cout<<"Enter substance:";
	cin.getline(substance,19);
	cout<<"Enter density of substance in g/cm3:";
	cin>>density;
	cout<<"Enter Relative MR of substance:";
	cin>>Mr;
	conc=convert(density,Mr);
	cout<<"The concentration of"<<substance<<"is:"<<conc<<" mol/dm3";
	return 0;
}

float convert(int d,int m){
	float conc;
	conc=(d*1000)/m;
	return conc;
}