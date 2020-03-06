
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vector1;
	

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "elements of vector 1:\n";
	for (int i = 0; i < vector1.size(); i++) {
	
		cout << vector1.at(i) << endl;
	}

	cout << "\nsize of vector 1:\n " << vector1.size() << endl;

	vector <int> vector2;
	vector2.push_back(100);
	vector2.push_back(200);

	cout << "\nelements of vector 2:\n";
	for (int i = 0; i < vector2.size(); i++) {

		cout << vector2.at(i) << endl;
	}

	cout << "\nsize of vector 2:\n " << vector2.size();

	vector <vector <int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "\nelements of vector 2d: \n" << vector_2d.at(1).at(0) << endl << vector_2d.at(1).at(1);

	vector1.at(0) = 1000;

	//cout << "elements of vector_2d \n" << vector_2d.at();


	//cout << "elements of vector1 \n" << vector1.at(0) << endl << vector1.at(1);


	
}