#include <iostream>

using namespace std;

int main(){
	int number;
	int multiples;
	cout<<"Enter a number:";
	cin>>number;
	for(multiples=1;multiples<=100;multiples++){
		cout<<number*multiples<<" ";
	}
	return 0;
}