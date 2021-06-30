#include <iostream>
#include <string>
#include <math.h>
#include <iomanip> 
using namespace std;
double convertirfc(double farenheit) {
	double celsius;
	celsius = (farenheit - 32) * 5 / 9;
	return celsius;
}
double convertircf(double c) {
	double f;
	f = c * 1.8 + 32;
	return f;
}
double redondear(double valor, int CantidadDecimales) {
	const double multiplicador = pow(10.0, CantidadDecimales);
	return ceil(valor * multiplicador) / multiplicador;
}
int main() {
	cout << "Grados Celsius a Farenheit:" << endl;
	for (int i = 0; i <=100 ; i++)
	{
		cout << " "<<i << "	Celsius  " << fixed << setprecision(2)  << redondear(convertircf(i), 2) << " Farenheit" <<endl;
		
	}
	cout << endl << endl;
	cout << "Grados Farenheit a Celsius:" << endl;
	for (int j = 32; j <= 212; j++)
	{
		cout << j << "	Farenheit  " << fixed << setprecision(2) << redondear(convertirfc(j), 2) << " Celsius"<<endl;
	
	}
	
	system("pause");
	return 0;
}