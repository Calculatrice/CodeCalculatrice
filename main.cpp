#include <stdio.h>
#include <iostream>
#include <stdint.h>
using namespace std;
int32_t addition (int32_t opA, int32_t opB)
{
    return opA + opB;
}
int64_t addition (int64_t opA, int64_t opB)
{
    return opA + opB;
}
float addition (float opA, float opB)
{
    return opA + opB;
}
double addition (double opA, double opB)
{
    return opA + opB;
}




int32_t soustraction (int32_t opA, int32_t opB)
{
    return opA - opB;
}
int64_t soustraction (int64_t opA, int64_t opB)
{
    return opA - opB;
}
float soustraction (float opA, float opB)
{
    return opA - opB;
}
double soustraction (double opA, double opB)
{
    return opA - opB;
}



int32_t multiplication (int32_t opA, int32_t opB)
{
    return opA * opB;
}
int64_t multiplication (int64_t opA, int64_t opB)
{
    return opA * opB;
}
float multiplication (float opA, float opB)
{
    return opA * opB;
}
double multiplication (double opA, double opB)
{
    return opA * opB;
}




int32_t division (int32_t opA, int32_t opB)
{
    return opA / opB;
}
int64_t division (int64_t opA, int64_t opB)
{
    return opA / opB;
}
float division (float opA, float opB)
{
    return opA / opB;
}
double division (double opA, double opB)
{
    return opA / opB;
}




int32_t modulo (int32_t opA, int32_t opB)
{
    return opA % opB;
}
int64_t modulo (int64_t opA, int64_t opB)
{
    return opA % opB;
}



int main() 
{

int operation,modA,modB;
double opA, opB;

cout << "Quel est l'operateur A ?" << endl;
cin >> opA;

cout << "Quel est l'operateur B ?" << endl;
cin >> opB;

cout << "Quelle opération? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division\n\t 5- Division euclidienne" << endl;
cin >> operation;

switch (operation)
{
case 1: cout << addition(opA, opB)<< endl;
break;
case 2: cout << soustraction(opA, opB)<< endl;
break;
case 3: cout << multiplication(opA, opB)<< endl;
break;
case 4: cout << division(opA, opB)<< endl;
break;
case 5: cout << modulo(modA = static_cast<int>(opA), modB = static_cast<int>(opB))<<endl;
break;
}

}



