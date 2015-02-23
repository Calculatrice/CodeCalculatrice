#include <stdio.h>
#include <iostream>
#include <stdint.h>
using namespace std;

/// \brief Fonction d'addition de deux nombres de type int32_t
///
/// La fonction d'addition est polymorphe, c'est a dire qu'elle dépend du type des paramètres fournis.
/// Celle-ci correspond au type int32_t.
///
/// \param opA un entier 32 bits
/// \param opB un entier 32 bits
/// \return La somme des deux entiers 32bits fournis en parametres
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///
int32_t addition(int32_t opA, int32_t opB)
{
	return opA + opB;
}

/// \brief Fonction d'addition de deux nombres de type int64_t
///
/// La fonction d'addition est polymorphe, c'est a dire qu'elle dépend du type des paramètres fournis.
/// Celle-ci correspond au type int64_t.
///
/// \param opA un entier 64 bits
/// \param opB un entier 64 bits
/// \return La somme des deux entiers 64bits fournis en parametres
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)
///

int64_t addition(int64_t opA, int64_t opB)
{
	return opA + opB;
}

/// \brief Fonction d'addition de deux nombres de type float
///
/// La fonction d'addition est polymorphe, c'est a dire qu'elle dépend du type des paramètres fournis.
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
/// La fonction d'addition est polymorphe, c'est a dire qu'elle depend du type des parametres fournis.
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



/// \brief Fonction pour utiliser le type int32_t
///
/// A l'interieur se trouve tout le programme permettant de demander les operateurs, l'operande et l'affichage du resultat.
/// Celle-ci correspond au type int32_t
/// 
/// \sa entier64(). flottant(). nbdouble().
///
void entier32()
{
	/// \brief Declaration et initialisation des variables
	int32_t opA, opB; /// < Declaration des variables opA et opB, utilisees lors du choix de l'utilisateur.
	int operation; /// < Declaration de la variable operation, utilisee lors du choix de l'utilisateur.
	bool verifop = false; /// < Declaration et initialisation des variables utilise pour la verification des choix de l'utilisateur.
		
	/// \brief Affichage a l'utilisateur de la demande des operateurs
	/// L'utilisateur choisi ses deux operateurs, attention l'ordre est important si on utilise la soustraction ou la division.
	/// Le choix est enregistre dans les variables opA et opB.
	cout << "Quel est l'operateur A ?" << endl;
	cin >> opA;

	cout << "Quel est l'operateur B ?" << endl;
	cin >> opB;
	
	/// \brief Boucle de verification.
	///
	/// La boucle while permet la verification pour la question a propos du choix de l'operande a utiliser entre addiction, soustraction, multiplication, division, et division euclidienne.
	/// Tant que la variable verifop est regle sur "faux", le programme continu dans la boucle.
	///
	/// \param verifop est un booleen
	while (verifop == false)
	{	
		/// \brief Affichage a l'utilisateur de la demande de l'operande
		/// L'utilisateur choisi entre 5 nombres pour choisir son operande.
		/// Le choix est enregistre dans la variable operation.
		cout << "Quelle opÃ©ration? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division\n\t 5- Division euclidienne" << endl;
		cin >> operation;
		
		/// \brief Structure de controle
		/// Le choix de l'operande est utilise comme parametre et le nombre choisi permet de lancer la fonction correspondant a l'option.
		///
		/// \param operation est un entier
		switch (operation)
		{
			/// \brief Premiere option :
			///
			/// Ce premier "case" lance la fonction addition avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 1: cout << "Le resultat est : " << addition(opA, opB) << endl; verifop = true;
			break;
			/// \brief Deuxieme option :
			///
			/// Ce deuxieme "case" lance la fonction soustraction avec comme parametres les deux operateurs.
		/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 2: cout << "Le resultat est : " << soustraction(opA, opB) << endl; verifop = true;
			break;
			/// \brief Troisieme option :
			///
			/// Ce troisieme "case" lance la fonction multiplication avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 3: cout << "Le resultat est : " << multiplication(opA, opB) << endl; verifop = true;
			break;
			/// \brief Quatrieme option :
			///
			/// Ce quatrieme "case" lance la fonction division avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 4: cout << "Le resultat est : " << division(opA, opB) << endl; verifop = true;
			break;
			/// \brief Cinquieme option :
			///
			/// Ce cinquieme "case" lance la fonction modulo avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 5: cout << "Le resultat est : " << modulo(opA, opB) << endl; verifop = true;
			break;
			/// \brief L'option par defaut :
			///
			/// Cette option permet d'indiquer a l'utilisateur une erreur de saisie, car si les precedentes options ne sont pas lancees, forcement il y a une erreur de saisie lors du choix du type a utiliser.
		default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
			break;
		}
	}
}

/// \brief Fonction pour utiliser le type int64_t
///
/// A l'interieur se trouve tout le programme permettant de demander les operateurs, l'operande et l'affichage du resultat.
/// Celle-ci correspond au type int64_t
/// 
/// \sa entier32(). flottant(). nbdouble().
///
void entier64()
{
	/// \brief Declaration et initialisation des variables
	int64_t opA, opB; /// < Declaration des variables opA et opB, utilisees lors du choix de l'utilisateur.
	int operation; /// < Declaration de la variable operation, utilisee lors du choix de l'utilisateur.
	bool verifop = false; /// < Declaration et initialisation des variables utilise pour la verification des choix de l'utilisateur.
		
	/// \brief Affichage a l'utilisateur de la demande des operateurs
	/// L'utilisateur choisi ses deux operateurs, attention l'ordre est important si on utilise la soustraction ou la division.
	/// Le choix est enregistre dans les variables opA et opB.
	cout << "Quel est l'operateur A ?" << endl;
	cin >> opA;

	cout << "Quel est l'operateur B ?" << endl;
	cin >> opB;

	/// \brief Boucle de verification.
	///
	/// La boucle while permet la verification pour la question a propos du choix de l'operande a utiliser entre addiction, soustraction, multiplication, division, et division euclidienne.
	/// Tant que la variable verifop est regle sur "faux", le programme continu dans la boucle.
	///
	/// \param verifop est un booleen
	while (verifop == false)
	{
		/// \brief Affichage a l'utilisateur de la demande de l'operande
		/// L'utilisateur choisi entre 5 nombres pour choisir son operande.
		/// Le choix est enregistre dans la variable operation.
		cout << "Quelle opÃ©ration? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division\n\t 5- Division euclidienne" << endl;
		cin >> operation;

		/// \brief Structure de controle
		/// Le choix de l'operande est utilise comme parametre et le nombre choisi permet de lancer la fonction correspondant a l'option.
		///
		/// \param operation est un entier
		switch (operation)
		{
			/// \brief Premiere option
			///
			/// Ce premier "case" lance la fonction addition avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 1: cout << "Le resultat est : " << addition(opA, opB) << endl; verifop = true;
			break;
			/// \brief Deuxieme option
			///
			/// Ce deuxieme "case" lance la fonction soustraction avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 2: cout << "Le resultat est : " << soustraction(opA, opB) << endl; verifop = true;
			break;
			/// \brief Troisieme option
			///
			/// Ce troisieme "case" lance la fonction multiplication avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 3: cout << "Le resultat est : " << multiplication(opA, opB) << endl; verifop = true;
			break;
			/// \brief Quatrieme option
			///
			/// Ce quatrieme "case" lance la fonction division avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 4: cout << "Le resultat est : " << division(opA, opB) << endl; verifop = true;
			break;
			/// \brief Cinquieme option
			///
			/// Ce cinquieme "case" lance la fonction modulo avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 5: cout << "Le resultat est : " << modulo(opA, opB) << endl; verifop = true;
			break;
			/// \brief L'option par defaut
			///
			/// Cette option permet d'indiquer a l'utilisateur une erreur de saisie, car si les precedentes options ne sont pas lancees, forcement il y a une erreur de saisie lors du choix du type a utiliser.
		default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
			break;
		}
	}
}

/// \brief Fonction pour utiliser le type float
///
/// A l'interieur se trouve tout le programme permettant de demander les operateurs, l'operande et l'affichage du resultat.
/// Celle-ci correspond au type float
/// 
/// \sa entier32(). entier64(). nbdouble().
///
void flottant()
{
	/// \brief Declaration et initialisation des variables
	float opA, opB; /// < Declaration des variables opA et opB, utilisees lors du choix de l'utilisateur.
	int operation; /// < Declaration de la variable operation, utilisee lors du choix de l'utilisateur.
	bool verifop = false; /// < Declaration et initialisation des variables utilise pour la verification des choix de l'utilisateur.
	
	/// \brief Affichage a l'utilisateur de la demande des operateurs
	/// L'utilisateur choisi ses deux operateurs, attention l'ordre est important si on utilise la soustraction ou la division.
	/// Le choix est enregistre dans les variables opA et opB.
	cout << "Quel est l'operateur A ?" << endl;
	cin >> opA;

	cout << "Quel est l'operateur B ?" << endl;
	cin >> opB;
	
	/// \brief Boucle de verification.
	///
	/// La boucle while permet la verification pour la question a propos du choix de l'operande a utiliser entre addiction, soustraction, multiplication, et division.
	/// Tant que la variable verifop est regle sur "faux", le programme continu dans la boucle.
	///
	/// \param verifop est un booleen
	while (verifop == false)
	{
		/// \brief Affichage a l'utilisateur de la demande de l'operande
		/// L'utilisateur choisi entre 4 nombres pour choisir son operande.
		/// Le choix est enregistre dans la variable operation.
		cout << "Quelle opÃ©ration? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division" << endl;
		cin >> operation;
		
		/// \brief Structure de controle
		/// Le choix de l'operande est utilise comme parametre et le nombre choisi permet de lancer la fonction correspondant a l'option.
		///
		/// \param operation est un entier
		switch (operation)
		{
			/// \brief Premiere option
			///
			/// Ce premier "case" lance la fonction addition avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 1: cout << "Le resultat est : " << addition(opA, opB) << endl; verifop = true;
			break;
			/// \brief Deuxieme option
			///
			/// Ce deuxieme "case" lance la fonction soustraction avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 2: cout << "Le resultat est : " << soustraction(opA, opB) << endl; verifop = true;
			break;
			/// \brief Troisieme option
			///
			/// Ce troisieme "case" lance la fonction multiplication avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 3: cout << "Le resultat est : " << multiplication(opA, opB) << endl; verifop = true;
			break;
			/// \brief Quatrieme option
			///
			/// Ce quatrieme "case" lance la fonction division avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 4: cout << "Le resultat est : " << division(opA, opB) << endl; verifop = true;
			break;
			/// \brief L'option par defaut
			///
			/// Cette option permet d'indiquer a l'utilisateur une erreur de saisie, car si les precedentes options ne sont pas lancees, forcement il y a une erreur de saisie lors du choix du type a utiliser.
		default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
			break;
		}
	}
}

/// \brief Fonction pour utiliser le type double
///
/// A l'interieur se trouve tout le programme permettant de demander les operateurs, l'operande et l'affichage du resultat.
/// Celle-ci correspond au type double
/// 
/// \sa entier32(). entier64(). flottant().
///
void nbdouble()
{
	/// \brief Declaration et initialisation des variables
	double opA, opB; /// < Declaration des variables opA et opB, utilisees lors du choix de l'utilisateur.
	int operation; /// < Declaration de la variable operation, utilisee lors du choix de l'utilisateur.
	bool verifop = false; /// < Declaration et initialisation des variables utilise pour la verification des choix de l'utilisateur.
	
	/// \brief Affichage a l'utilisateur de la demande des operateurs
	/// L'utilisateur choisi ses deux operateurs, attention l'ordre est important si on utilise la soustraction ou la division.
	/// Le choix est enregistre dans les variables opA et opB.
	cout << "Quel est l'operateur A ?" << endl;
	cin >> opA;

	cout << "Quel est l'operateur B ?" << endl;
	cin >> opB;
	
	/// \brief Boucle de verification.
	///
	/// La boucle while permet la verification pour la question a propos du choix de l'operande a utiliser entre addiction, soustraction, multiplication, et division.
	/// Tant que la variable verifop est regle sur "faux", le programme continu dans la boucle.
	///
	/// \param verifop est un booleen
	while (verifop == false)
	{
		/// \brief Affichage a l'utilisateur de la demande de l'operande
		/// L'utilisateur choisi entre 4 nombres pour choisir son operande.
		/// Le choix est enregistre dans la variable operation.
		cout << "Quelle opÃ©ration? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division" << endl;
		cin >> operation;

		/// \brief Structure de controle
		/// Le choix de l'operande est utilise comme parametre et le nombre choisi permet de lancer la fonction correspondant a l'option.
		///
		/// \param operation est un entier
		switch (operation)
		{
			/// \brief Premiere option
			///
			/// Ce premier "case" lance la fonction addition avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 1: cout << "Le resultat est : " << addition(opA, opB) << endl; verifop = true;
			break;
			/// \brief Deuxieme option
			///
			/// Ce deuxieme "case" lance la fonction soustraction avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 2: cout << "Le resultat est : " << soustraction(opA, opB) << endl; verifop = true;
			break;
			/// \brief Troisieme option
			///
			/// Ce troisieme "case" lance la fonction multiplication avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 3: cout << "Le resultat est : " << multiplication(opA, opB) << endl; verifop = true;
			break;
			/// \brief Quatrieme option
			///
			/// Ce quatrieme "case" lance la fonction division avec comme parametres les deux operateurs.
			/// La variable de verification verifop est regle sur "vrai" pour sortir de la boucle de verification.
		case 4: cout << "Le resultat est : " << division(opA, opB) << endl; verifop = true;
			break;
			/// \brief L'option par defaut
			///
			/// Cette option permet d'indiquer a l'utilisateur une erreur de saisie, car si les precedentes options ne sont pas lancees, forcement il y a une erreur de saisie lors du choix du type a utiliser.
		default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
			break;
		}
	}
}

/// \brief Fonction principal executant le code
///
int main()
{
	/// \brief Declaration et initialisation des variables
	int type; /// < Declaration de la variable type, utilisee lors du choix de l'utilisateur.
	bool veriftype = false; /// < Declaration et initialisation de la variable utilisee pour la verification des choix de l'utilisateur.

	/// \brief Boucle de verification.
	///
	/// La boucle while permet la verification pour la question a propos du choix du type a utiliser entre int32_t, int64_t, float et double.
	/// Tant que la variable veriftype est regle sur "faux", le programme continu dans la boucle.
	///
	/// \param veriftype est un booleen 
	while (veriftype == false)
	{
		/// \brief Affichage a l'utilisateur de la demande du type a utiliser.
		/// L'utilisateur doit choisir entre 4 nombre pour choisir son type.

		/// Le choix est enregistre dans la variable type.
		cout << "Quel type voulez-vous utiliser? \n\t 1- int32_t\n\t 2- int64_t\n\t 3- float\n\t 4- double" << endl;
		cin >> type;

		/// \brief Structure de controle
		/// Le choix du type est utilise comme parametre et le nombre choisi permet de lancer la fonction correspondant a l'option.
		///
		/// \param type est un entier
		switch (type)
		{
			/// \brief Premiere option
			///
			/// Ce premier "case" lance la fonction entier32 pour le type int32_t.
			/// La variable de verification veriftype est regle sur "vrai" pour sortir de la boucle de verification.
		case 1: entier32(); veriftype = true;
			break;
			/// \brief Deuxieme option
			///
			/// Ce deuxieme "case" lance la fonction entier64 pour le type int64_t.
			/// La variable de verification veriftype est regle sur "vrai" pour sortir de la boucle de verification.
		case 2: entier64(); veriftype = true;
			break;
			/// \brief Troisieme option
			///
			/// Ce troisieme "case" lance la fonction flottant pour le type float.
			/// La variable de verification veriftype est regle sur "vrai" pour sortir de la boucle de verification.
		case 3: flottant(); veriftype = true;
			break;
			/// \brief Quatrieme option
			///
			/// Ce quatrieme "case" lance la fonction nbdouble pour le type double.
			/// La variable de verification veriftype est regle sur "vrai" pour sortir de la boucle de verification.
		case 4: nbdouble();	veriftype = true;
			break;
			/// \brief L'option par defaut
			///
			/// Cette option permet d'indiquer a l'utilisateur une erreur de saisie, car si les precedentes options ne sont pas lancees, forcement il y a une erreur de saisie lors du choix du type a utiliser.
		default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
			break;
		}
	}
}
