#include <stdio.h>
#include <iostream>
#include <stdint.h>
using namespace std;
int32_t addition(int32_t opA, int32_t opB)
{
	return opA + opB;
}
int64_t addition(int64_t opA, int64_t opB)
{
	return opA + opB;
}
float addition(float opA, float opB)
{
	return opA + opB;
}
double addition(double opA, double opB)
{
	return opA + opB;
}




int32_t soustraction(int32_t opA, int32_t opB)
{
	return opA - opB;
}
int64_t soustraction(int64_t opA, int64_t opB)
{
	return opA - opB;
}
float soustraction(float opA, float opB)
{
	return opA - opB;
}
double soustraction(double opA, double opB)
{
	return opA - opB;
}



int32_t multiplication(int32_t opA, int32_t opB)
{
	return opA * opB;
}
int64_t multiplication(int64_t opA, int64_t opB)
{
	return opA * opB;
}
float multiplication(float opA, float opB)
{
	return opA * opB;
}
double multiplication(double opA, double opB)
{
	return opA * opB;
}




int32_t division(int32_t opA, int32_t opB)
{
	return opA / opB;
}
int64_t division(int64_t opA, int64_t opB)
{
	return opA / opB;
}
float division(float opA, float opB)
{
	return opA / opB;
}
double division(double opA, double opB)
{
	return opA / opB;
}




int32_t modulo(int32_t opA, int32_t opB)
{
	return opA % opB;
}
int64_t modulo(int64_t opA, int64_t opB)
{
	return opA % opB;
}

int main()
{

	int operation, type;
	bool veriftype = false, verifop = false;

	do{
		cout << "Quel type voulez-vous utiliser? \n\t 1- int32_t\n\t 2- int64_t\n\t 3- float\n\t 4- double" << endl;
		cin >> type;

		switch (type)
		{
		case 1: int32_t opA32, opB32;

			cout << "Quel est l'operateur A ?" << endl;
			cin >> opA32;

			cout << "Quel est l'operateur B ?" << endl;
			cin >> opB32;
			do{
				cout << "Quelle opération? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division\n\t 5- Division euclidienne" << endl;
				cin >> operation;

				switch (operation)
				{
				case 1: cout <<"Le resultat est : " << addition(opA32, opB32) << endl; verifop = true;
					break;
				case 2: cout <<"Le resultat est : " << soustraction(opA32, opB32) << endl; verifop = true;
					break;
				case 3: cout <<"Le resultat est : " << multiplication(opA32, opB32) << endl; verifop = true;
					break;
				case 4: cout <<"Le resultat est : " << division(opA32, opB32) << endl; verifop = true;
					break;
				case 5: cout <<"Le resultat est : " << modulo(opA32, opB32) << endl; verifop = true;
					break;
				default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
					break;
				}
			} while (verifop == false);

			veriftype = true;
			break;

		case 2: int64_t opA64, opB64;

			cout << "Quel est l'operateur A ?" << endl;
			cin >> opA64;

			cout << "Quel est l'operateur B ?" << endl;
			cin >> opB64;

			cout << "Quelle opération? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division\n\t 5- Division euclidienne" << endl;
			cin >> operation;

			do{
				switch (operation)
				{
				case 1: cout << "Le resultat est : " << addition(opA64, opB64) << endl; verifop = true;
					break;
				case 2: cout << "Le resultat est : " << soustraction(opA64, opB64) << endl; verifop = true;
					break;
				case 3: cout << "Le resultat est : " << multiplication(opA64, opB64) << endl; verifop = true;
					break;
				case 4: cout << "Le resultat est : " << division(opA64, opB64) << endl; verifop = true;
					break;
				case 5: cout << "Le resultat est : " << modulo(opA64, opB64) << endl; verifop = true;
					break;
				default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
					break;
				}
			} while (verifop == false);

			veriftype = true;
			break;

		case 3: float opAfl, opBfl;

			cout << "Quel est l'operateur A ?" << endl;
			cin >> opAfl;

			cout << "Quel est l'operateur B ?" << endl;
			cin >> opBfl;

			cout << "Quelle opération? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division" << endl;
			cin >> operation;

			do{
				switch (operation)
				{
				case 1: cout << "Le resultat est : " << addition(opAfl, opBfl) << endl; verifop = true;
					break;
				case 2: cout << "Le resultat est : " << soustraction(opAfl, opBfl) << endl; verifop = true;
					break;
				case 3: cout << "Le resultat est : " << multiplication(opAfl, opBfl) << endl; verifop = true;
					break;
				case 4: cout << "Le resultat est : " << division(opAfl, opBfl) << endl; verifop = true;
					break;
				default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
					break;
				}
			} while (verifop == false);

			veriftype = true;
			break;

		case 4: double opAdb, opBdb;

			cout << "Quel est l'operateur A ?" << endl;
			cin >> opAdb;

			cout << "Quel est l'operateur B ?" << endl;
			cin >> opBdb;

			cout << "Quelle opération? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division" << endl;
			cin >> operation;

			do{
				switch (operation)
				{
				case 1: cout << "Le resultat est : " << addition(opAdb, opBdb) << endl; verifop = true;
					break;
				case 2: cout << "Le resultat est : " << soustraction(opAdb, opBdb) << endl; verifop = true;
					break;
				case 3: cout << "Le resultat est : " << multiplication(opAdb, opBdb) << endl; verifop = true;
					break;
				case 4: cout << "Le resultat est : " << division(opAdb, opBdb) << endl; verifop = true;
					break;
				default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
					break;
				}
			} while (verifop == false);

			veriftype = true;
			break;

		default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
			break;
		}
	} while (veriftype == false);
}

