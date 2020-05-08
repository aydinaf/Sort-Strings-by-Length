//Aydin Azari Farhad
#include <iostream>
using namespace std;

int size(char *c) {
	int counter;
	counter = 0;
	while (*c != '\0') {//until end of string
		c++;
		counter++;
	}
	return counter;
}

int main() {
	char one[100] = {};
	char two[100] = {};
	char three[100] = {};

	cout << "please enter a string (100 characters max): " << endl;
	cin.getline(one, 100, '\n');//input
	cout << "please enter a second string (100 characters max): " << endl;
	cin.getline(two, 100, '\n');//input
	cout << "please enter a third string (100 characters max): " << endl;
	cin.getline(three, 100, '\n');//input
	//___________________________________ATTENTION____________________________________________
	//|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ATTENTION >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>|
	//|algorithm sorts strings in order of longest to shortest >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>|
	//|task is to print strings in order of shortest to longest (concatenated) >>>>>>>>>>>>>>>|
	//|therefor print functions will print in reverse order of which the algorithm is written.|
	//|_______________________________________________________________________________________|

	if (size(one) >= size(two) && size(one) >= size(three)) { //one largest
		if (size(two) >= size(three)) { // two middle ( 1 2 3 )
			cout << three << " " << two << " " << one << endl;
		}
		else if (size(two) < size(three)) { // three middle ( 1 3 2)
			cout << two << " " << three << " " << one << endl;//correctet
		}
	}
	else if (size(one) < size(two) && size(two) >= size(three)) { // two largest
		if (size(one) >= size(three)) { // one middle ( 2 1 3 )
			cout << three << " " << one << " " << two << endl;
		}
		else if (size(one) < size(three)) {// three middle ( 2 3 1)
			cout << one << " " << three << " " << two << endl;
		}
	}
	else if (size(three) >= size(one) && size(three) >= size(two)) { // three largest
		if (size(one) >= size(two)) { // one middle ( 3 1 2 )
			cout << two << " " << one << " " << three << endl;
		}
		else if (size(one) < size(two)) { //two middle ( 3 2 1)
			cout << one << " " << two << " " << three << endl;
		}
	}
	system("pause");
}
