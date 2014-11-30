//============================================================================
// Name        : helloworld.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Animal {
	protected:
		float weight;
	public:
		float getWeight () {
			return weight;
		}
		Animal () {
			weight = 10;
		}
		Animal (int x) {
			weight = x;
		}
};
class Person : public Animal {
private:
	int age;
public:
	int getAge () {
		return age;
	}
	Person () {
		age = 22;
		weight=100;
	}
	Person (float newweight, int newage) {
		age = newage;
		weight = newweight;
	}
};

int main() {
	int age;
	float weight;
	cout << "What is your age?" << endl;
	cin >> age;
	cout << "How much do you weigh?" <<endl;
	cin >> weight;
	Person bob(weight,age);
	cout<<bob.getAge()<<endl;
	return 0;
}
