#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int scalar_product(int vektor_a_x, int vektor_a_y, int vektor_b_x, int vektor_b_y) {
	

	int result = (vektor_a_x * vektor_b_x) + (vektor_a_y * vektor_b_y);

	return result;
}
float vektor_length(int vektor_x, int vektor_y) {
	
	float result = sqrt(pow(vektor_x, 2) + pow(vektor_y, 2));

	return result;
}

int main() {
	// TODO: Scale for more vektors

	int vektor_a_x = 0;
	int vektor_a_y = 0;
	int vektor_b_x = 0;
	int vektor_b_y = 0;

	cout << "Give me Ax: ";
	cin >> vektor_a_x;
	cout << endl;
	cout << "Give me Ay: ";
	cin >> vektor_a_y;
	cout << endl;
	cout << "Give me Bx: ";
	cin >> vektor_b_x;
	cout << endl;
	cout << "Give me By: ";
	cin >> vektor_b_y;
	cout << endl << endl;

	cout << "--------------------------------------------------------------------------" << endl;
	cout << "vektor 'a': (" << vektor_a_x << ";" << vektor_a_y << ")" << endl;
	cout << "vektor 'b': (" << vektor_b_x << ";" << vektor_b_y << ")" << endl;
	cout << "scalar product: " << scalar_product(vektor_a_x, vektor_a_y, vektor_b_x, vektor_b_y) << endl;
	cout << "|a|: " << vektor_length(vektor_a_x, vektor_a_y) << endl;
	cout << "|b|: " << vektor_length(vektor_b_x, vektor_b_y) << endl;


	return 0;
}