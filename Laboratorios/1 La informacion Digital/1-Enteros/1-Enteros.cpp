#include <iostream>
using namespace std;

int main()
{
	int a = 2000000000;
	int b = 2000000000;
	int d = a / 2 + b / 2;

	cout << "a: " << a << " b: " << b << endl;

	int c = a + b;
	if (a > 0 && b > 0) {
		if (c > 0) {
			cout << "c: " << c << endl;
		}
		else {
			cout << "Error de desbordamiento en c" << endl;
		}
	}
	if (a < 0 && b < 0) {
		if (c < 0) {
			cout << "c: " << c << endl;
		}
		else {
			cout << "Error de desbordamiento en c " << endl;
		}
	}

	cout << "d: " << d << endl;



	const int UN_MILLON = 1000000;
	int contador = 0;
	for (int i = 0; i < 3000 * UN_MILLON; i++)
		contador++;
	cout << "contador " << contador << endl;

		

	return 0;
}
