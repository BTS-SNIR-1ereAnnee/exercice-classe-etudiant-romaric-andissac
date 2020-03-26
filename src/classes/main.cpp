#include <iostream>
#include <string>
#include "eleve.h"

using namespace std;

int main()
{
    /* Je crée une chaîne de caractère que je nomme "Sans nom" par défault */
    string nomEleve("Sans nom"); 
    
    /* Variable de type int pour les note et double pour la moyenne car nombre a virgule */   
    int note1(0), note2(0);
    double moyenne(0);
    
    /* Basique, le programme demmande le nom, la première note sur 20 et la deuxième note sur 10 */
    cout << "Entrez le nom de l'élève : ";
    cin >> nomEleve;
    cout << "Entrez la première note sur 20 : ";
    cin >> note1;
    cout << "Entrez la deuxième note sur 10 : ";
    cin >> note2;
    
    /* Instance de la classe Eleve */
    Eleve eleve;
    
    /* Tout les mutateurs */
    eleve.setnomEleve(nomEleve);
    eleve.setnote1(note1);
    eleve.setnote2(note2); 
    
    /* cout << eleve.getnomEleve() << " : "; J'ai eu un probleme avec getnomEleve donc j'ai utilisé une méthode afficheNom */
    eleve.afficheNom();
    eleve.afficherNote();
    cout << "moyenne = " << eleve.moyenne() << endl;
    
    return 0;
}
