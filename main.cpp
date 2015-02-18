#include <stdio.h>
#include <iostream>
#include <stdint.h>
using namespace std;

/// \brief Fonction d'addition de deux nombres de type int32_t
///
/// La fonction d'addition est polymorphe, c'est à dire qu'elle dépend du type des paramètres fournis.
/// Celle-ci correspond au type int32_t
///
/// \param opA un entier 32 bits
/// \param opB un entier 32 bits
/// \return La somme des deux entiers 32bits fournis en paramètres
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///
int32_t addition(int32_t opA, int32_t opB)
{
	return opA + opB;
}

/// \brief Fonction d'addition de deux nombres de type int64_t
///
/// La fonction d'addition est polymorphe, c'est à dire qu'elle dépend du type des paramètres fournis.
/// Celle-ci correspond au type int64_t
///
/// \param opA un entier 64 bits
/// \param opB un entier 64 bits
/// \return La somme des deux entiers 64bits fournis en paramètres
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)
///

int64_t addition(int64_t opA, int64_t opB)
{
	return opA + opB;
}

/// \brief Fonction d'addition de deux nombres de type float
///
/// La fonction d'addition est polymorphe, c'est à dire qu'elle dépend du type des paramètres fournis.
/// Celle-ci correspond au type float
///
/// \param opA un decimal float
/// \param opB un decimal float
/// \return La somme des deux decimaux float fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(int32_t, int32_t)
///

float addition(float opA, float opB)
{
	return opA + opB;
}

/// \brief Fonction d'addition de deux nombres de type double
///
/// La fonction d'addition est polymorphe, c'est à dire qu'elle depend du type des parametres fournis.
/// Celle-ci correspond au type double
///
/// \param opA un decimal double
/// \param opB un decimal double
/// \return La somme des deux decimaux double fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(int32_t, int32_t). ajouter(float, float)
///

double addition(double opA, double opB)
{
	return opA + opB;
}






/// \brief Fonction de soustraction de deux nombres de type int32_t
///
/// La fonction de soustraction combine deux nombres de meme type pour donner un seul nombre : la difference.
/// Celle-ci correspond au type 32 bits.
/// 
/// \param opA un entier 32 bits
/// \param opB un entier 32 bits
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///

int32_t soustraction(int32_t opA, int32_t opB)
{
	return opA - opB;
}

/// \brief Fonction de soustraction de deux nombres de type int64_t
///
/// La fonction de soustraction combine deux nombres de meme type pour donner un seul nombre : la difference.
/// Celle-ci correspond au type 64 bits.
/// 
/// \param opA un entier 64 bits
/// \param opB un entier 64 bits
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)
///

int64_t soustraction(int64_t opA, int64_t opB)
{
	return opA - opB;
}

/// \brief Fonction de soustraction de deux nombres de type float
///
/// La fonction de soustraction combine deux nombres de meme type pour donner un seul nombre : la difference.
/// Celle-ci correspond au type float
/// 
/// \param opA un decimal float
/// \param opB un decimal float
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(int64_t, int64_t)
///

float soustraction(float opA, float opB)
{
	return opA - opB;
}

/// \brief Fonction de soustraction de deux nombres de type double
///
/// La fonction de soustraction combine deux nombres de meme type pour donner un seul nombre : la difference.
/// Celle-ci correspond au type double
/// 
/// \param opA un decimal double
/// \param opB un decimal double
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int32_t, int32_t). ajouter(float, float). ajouter(int64_t, int64_t)
///

double soustraction(double opA, double opB)
{
	return opA - opB;
}







/// \brief Fonction de multiplication de deux nombres de type int32_t
///
/// La fonction de multiplication est une "addition repetee" autant de fois que necessaire. Son resultat est un produit.
/// Celle-ci correspond au type 32 bits.
/// 
/// \param opA un entier 32 bits
/// \param opB un entier 32 bits
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///

int32_t multiplication(int32_t opA, int32_t opB)
{
	return opA * opB;
}

/// \brief Fonction de multiplication de deux nombres de type int64_t
///
/// La fonction de multiplication est une "addition repetee" autant de fois que necessaire. Son resultat est un produit.
/// Celle-ci correspond au type 64 bits.
/// 
/// \param opA un entier 64 bits
/// \param opB un entier 64 bits
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)
///

int64_t multiplication(int64_t opA, int64_t opB)
{
	return opA * opB;
}

/// \brief Fonction de multiplication de deux nombres de type float
///
/// La fonction de multiplication est une "addition repetee" autant de fois que necessaire. Son resultat est un produit.
/// Celle-ci correspond au type float
/// 
/// \param opA un decimal float
/// \param opB un decimal float
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(int32_t, int32_t)
///

float multiplication(float opA, float opB)
{
	return opA * opB;
}

/// \brief Fonction de multiplication de deux nombres de type double
///
/// La fonction de multiplication est une "addition repetee" autant de fois que necessaire. Son resultat est un produit.
/// Celle-ci correspond au type double
/// 
/// \param opA un decimal double
/// \param opB un decimal double
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(float, float). ajouter(int32_t, int32_t)
///

double multiplication(double opA, double opB)
{
	return opA * opB;
}










/// \brief Fonction de division de deux nombres de type int32_t
///
/// La fonction de division est une operation qui a deux nombres a et b associe un troisieme nombre, appele quotient.
/// Celle-ci correspond au type int32_t
/// 
/// \param opA un entier int32_t
/// \param opB un entier int32_t
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///

int32_t division(int32_t opA, int32_t opB)
{
	return opA / opB;
}

/// \brief Fonction de division de deux nombres de type int64_t
///
/// La fonction de division est une operation qui a deux nombres a et b associe un troisieme nombre, appele quotient.
/// Celle-ci correspond au type int64_t
/// 
/// \param opA un entier int64_t
/// \param opB un entier int64_t
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)
///

int64_t division(int64_t opA, int64_t opB)
{
	return opA / opB;
}

/// \brief Fonction de division de deux nombres de type float
///
/// La fonction de division est une operation qui a deux nombres a et b associe un troisieme nombre, appele quotient.
/// Celle-ci correspond au type float
/// 
/// \param opA un decimal float
/// \param opB un decimal float
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(int32_t, int32_t)
///

float division(float opA, float opB)
{
	return opA / opB;
}

/// \brief Fonction de division de deux nombres de type double
///
/// La fonction de division est une operation qui a deux nombres a et b associe un troisieme nombre, appele quotient.
/// Celle-ci correspond au type double
/// 
/// \param opA un decimal double
/// \param opB un decimal double
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(float, float). ajouter(int32_t, int32_t)
///

double division(double opA, double opB)
{
	return opA / opB;
}







/// \brief Fonction de modulo de deux nombres de type int32_t
///
/// La fonction de modulo correspond a l'operation de calcul du reste de la division euclidienne.
/// Celle-ci correspond au type int32_t
/// 
/// \param opA un entier int32_t
/// \param opB un entier int32_t
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int64_t, int64_t). 
///

int32_t modulo(int32_t opA, int32_t opB)
{
	return opA % opB;
}

/// \brief Fonction de modulo de deux nombres de type int64_t
///
/// La fonction de modulo correspond a l'operation de calcul du reste de la division euclidienne.
/// Celle-ci correspond au type int64_t
/// 
/// \param opA un entier int64_t
/// \param opB un entier int64_t
/// \return La difference des deux entiers fournis en parametres
/// \sa ajouter(int32_t, int32_t). 
///

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

