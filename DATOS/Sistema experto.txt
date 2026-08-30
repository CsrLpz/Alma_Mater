#include <conio.h>	   
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>	//Archivo de encabezado para archivos.

using std::cout;
using std::endl;
using std::cin;
using std::ofstream;
using std::string;

int main()
{
	int size_Atomo = 0;	//Sé el tamaño de caracteres de cada átomo.
	ofstream PremisaTxt("Premisa.txt");	//Creo un archivo "premisa.txt".
	ofstream ConclusionTxt("Conclusion.txt");	//Creo un archivo "conclusion.txt".
	ofstream AtomosTxt("Atomos.txt");	//Creo un archivo "atomo.txt"
	string sTexto = " ", sPremisa = " ", sConclusion = " ", sAtomo = " ";	//Variables de tipo string vacías.
	cout << "Ingrese un texto par favar." << endl;
	getline(cin, sTexto);	//Leo un texto desde teclado incluyendo espacios y lo almaceno en "sTexto".
	for (size_t i = 0; i <= sTexto.length(); i++)
		sTexto[i] = tolower(sTexto[i]);	//Cambio el texto introducido a minusculas con "tolower" (To Lower) para trabajar todo en minúsculas.
	size_t size_Premisa = sTexto.find("entonces");	//Almaceno la cantidad de carácteres que existen antes de la palabra "entonces".
	sPremisa = sTexto.substr(0, size_Premisa);	//**Guardo en "sPremisa" una subcadena del texto que metí empezando desde la posicion 0 hasta "size_premisa" (valor de caracteres encontrado antes).
	sConclusion = sTexto.substr(size_Premisa + 9, sTexto.length());	//Hace lo mismo que arriba pero cuenta después de la palabra "entonces" mas 9 posiciones (cantidad de letras que tiene la palabra "entonces") hasta el tamaño del texto.
	cout << endl << "Premisas: " << endl << sPremisa << endl << endl << "Conclusion:" << endl << sConclusion << endl << endl << "Atomos: " << endl;	//Imprimo los textos.
	PremisaTxt << sPremisa << endl;	//Guardo texto "premisa" en archivo premisa.txt.
	ConclusionTxt << sConclusion << endl;	//Guardo texto "conclusion" en archivo conclusion.txt.
	while (size_Atomo >= 0)	//Mientras sea mayor o igual que 0 el tamaño del átomo..
	{
		size_Atomo = sPremisa.find("y");	//Hago lo mismo que antes, esta vez en lugar de buscar "entonces" busco las "y" para separar.
		sAtomo = sPremisa.substr(0, size_Atomo);	//Misma lógica de antes**.
		sPremisa = sPremisa.substr(size_Atomo + 2, sPremisa.length());	//Misma lógica**.
		cout << sAtomo << endl;	//Imprimo el texto de atomos.
		AtomosTxt << sAtomo << endl;	//Guardo en el archivo de atomo.
	}	//Para este entonces el while en la última vuelta dejó "size_Atomo" en negativo (compruebalo con un breakpoint).
	size_Atomo = 0;	//Por eso igualo a cero de nuevo para que entre en el siguiente while().
	while (size_Atomo >= 0)	//Este while hace lo mismo que el anterior pero para la conclusión.
	{
		size_Atomo = sConclusion.find("y");
		sAtomo = sConclusion.substr(0, size_Atomo);
		sConclusion = sConclusion.substr(size_Atomo + 2, sConclusion.length());
		cout << sAtomo << endl;
		AtomosTxt << sAtomo << endl;
	}
	_getch();
	return 0;
}