/* De base dans un fichier .h */
#ifndef CLASS_Eleve
#define CLASS_Eleve  
         
#include <iostream>
#include <string>

class Eleve
{
    private:
    
        /* Je déclare une chaîne de caractère */
        std::string m_nomEleve;
        
        /* Je déclare un tableau de 2 entiers qui seront les notes */
        int m_note[2];
    
    public:
    
        /* Constructeur */
        Eleve();
        
        Eleve(std::string nomEleve, int noteSur20, int noteSur10);
        
        /* Destructeur */
        ~Eleve();
        
        /* Mutateur pour modifier la donnée privée m_nomEleve */
        void setnomEleve(std::string nomEleve);
        
        /* Mutateur pour modifier les donnnées privées m_note1 et m_note2 */
        void setnoteSur20(int note);
        void setnoteSur10(int note);
        
        /* Accesseur pour récupérer le contenue privé de la variable note1 et note2 */
        int getnoteSur20();
        int getnoteSur10();
        
        /* Affiche les notes séparées par une virgule */
        void afficheLesNote();
        
        /* Affiche la moyenne des notes */
        float calulerMoyenne();
        
        /* Affiche le nom de l'éleve*/
        void afficheLeNomEleve();
};

/* De base dans un fichier .h */
#endif      
