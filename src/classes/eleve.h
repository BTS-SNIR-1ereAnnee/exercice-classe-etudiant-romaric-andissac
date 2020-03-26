#ifndef CLASS_Eleve
#define CLASS_Eleve
#include <iostream>
#include <string>

class Eleve
{
    private:
        std::string m_nomEleve;
        int m_note1;
        int m_note2;
    
    public:
        /*Constructeur*/
        Eleve();
        
        Eleve(std::string nomEleve, int note1, int note2);
        
        /*Mutateur pour modifier la donnée privée m_nomEleve*/
        void setnomEleve(std::string nomEleve);
        
        /*Accesseur pour nomEleve*/
        std::string getnomEleve();
        
        /*Mutateur pour modifier les donnnées privées m_note1 et m_note2*/
        void setnote1(int note);
        void setnote2(int note);
        
        /*Accesseur pour récupérer le contenue privé de la variable note1 et note2*/
        int getnote1();
        int getnote2();
        
        /*Affiche les note séparées par une virgule*/
        void afficherNote();
        
        /*Affiche la moyenne des notes*/
        float moyenne();
};

#endif
