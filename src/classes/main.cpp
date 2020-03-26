#include <iostream>
#include <string>
#include "eleve.h"

using namespace std;

int main()
{
    string nomEleve("Sans nom");
    int note1(0), note2(0);
    double moyenne(0);
    
    cout << "Entrez le nom de l'élève : ";
    cin >> nomEleve;
    cout << "Entrez la première note sur 20 : ";
    cin >> note1;
    cout << "Entrez la deuxième note sur 10 : ";
    cin >> note2;
     
     Eleve eleve;
    
    cout << "\n" << nomEleve << " : " << note1 << "/20, " <<  note2 << "/10" << endl;
    cout << "moyenne" << " : " << moyenne << endl;
}
