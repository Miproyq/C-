#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int number,i;
	int multiples;
	cout<<"Enter a number:";
	cin>>number;
	for(multiples=1;multiples<=100;multiples++){
		cout<<number*multiples<<" ";
	}
	cin.get();
	cin.get();
	return 0;
}
