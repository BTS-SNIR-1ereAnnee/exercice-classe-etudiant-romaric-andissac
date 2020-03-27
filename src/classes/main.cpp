#include <iostream>
#include <string>
#include "eleve.h"

using namespace std;

int main()
{
    /* Je crée une chaîne de caractère que je nomme "Sans nom" par défault */
    string nomEleve("Sans nom"); 
    
    /* Variable de type int pour les note et double pour la moyenne car nombre a virgule */   
    int noteSur20(0), noteSur10(0);
    double caluleLaMoyenne(0);
    
    /* Basique, le programme demmande le nom, la première note sur 20 et la deuxième note sur 10 */
    cout << "\nEntrez le nom de l'élève : ";
    cin >> nomEleve;
    
    cout << "Entrez la première note sur 20 : ";
    cin >> noteSur20;
    
    /* Pour éviter de rentrer des nombre plus haut que 20 et 10 et plus petit que 0 */
    if (noteSur20 > 20)
        {
            cout << "\nImpossible que la note soit plus haute que 20, fermeture du programme.\n" << endl;
            return 0;
        }
        else if (noteSur20 < 0)
        {
            cout << "\nIl est pas aussi nul quand même... fermeture du programme...\n" << endl;
            return 0;
        }
        
    cout << "Entrez la deuxième note sur 10 : ";
    cin >> noteSur10;
    
    if (noteSur10 > 10)
        {
            cout << "\nImpossible que la note soit plus haute que 10... fermeture du programme...\n" << endl;
            return 0;
        }
        else if (noteSur10 < 0)
        {
            cout << "\nIl est pas aussi nul quand même... fermeture du programme.\n" << endl;
            return 0;
        }
    
    /* Instance de la classe Eleve */
    Eleve eleve;
    
    /* Tout les mutateurs */
    eleve.setnomEleve(nomEleve);
    eleve.setnoteSur20(noteSur20);
    eleve.setnoteSur10(noteSur10); 
    
    cout << endl;
    
    eleve.afficheLeNomEleve();
    eleve.afficheLesNote();
    cout << "moyenne : " << eleve.calulerMoyenne() << endl;
    
    return 0;
}
