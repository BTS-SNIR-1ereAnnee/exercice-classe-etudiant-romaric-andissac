#include <iostream>
#include <string>
#include "eleve.h"

using namespace std;

/*Constructeur*/
Eleve::Eleve()
{
    
}


Eleve::Eleve(std::string nomEleve, int noteSur20, int noteSur10)
{
    this->setnomEleve(nomEleve);
    this->setnoteSur20(noteSur20);
    this->setnoteSur10(noteSur10);
}

Eleve::~Eleve()
{

}

void Eleve::setnomEleve(std::string nomEleve)
{
    m_nomEleve = nomEleve;
}

void Eleve::setnoteSur20(int note)
{
    m_note[0]= note;
}
 
void Eleve::setnoteSur10(int note)
{
    m_note[1]= note;
}

int Eleve::getnoteSur20()
{
    return m_note[0];
}
    
int Eleve::getnoteSur10()
{
    return m_note[1];
}

/* Me permet d'afficher les notes de l'élève séparé par une virgule -> ex: 15/20, 5/10 */        
void Eleve::afficheLesNote()
{
    cout << m_note[0] << "/20" << ", " << m_note[1] << "/10" << endl;
}

/* Retourne la valeur moyenne qui est calculé ci-dessous, j'ai mis du temps avant de me dire de mettre (float) car mon resultat était toujours 12 en moyene avec 15/20 et 5/10 */        
float Eleve::calulerMoyenne()
{
    return ((float)m_note[0] + ((float)m_note[1] * 2))/2;
}

/* méthode afficheNom pour pouvoir afficher le nom de l'éleve */
void Eleve::afficheLeNomEleve()
{
    cout << m_nomEleve << " : ";
}


