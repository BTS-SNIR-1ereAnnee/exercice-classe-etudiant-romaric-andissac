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
    eleve.setnomEleve(nomEleve);
    eleve.setnote1(note1);
    eleve.setnote2(note2); 
    
    //cout << eleve.getnomEleve() << " : ";
    eleve.afficheNom();
    eleve.afficherNote();
    cout << "moyenne = " << eleve.moyenne() << endl;
    
    return 0;
}
