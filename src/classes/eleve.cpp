#include <iostream>
#include <string>
#include "eleve.h"

using namespace std;

/*Constructeur*/
Eleve::Eleve()
{
    
}


Eleve::Eleve(std::string nomEleve, int note1, int note2)
{
    this->setnomEleve(nomEleve);
    this->setnote1(note1);
    this->setnote2(note2);
}

Eleve::~Eleve()
{

}

void Eleve::setnomEleve(std::string nomEleve)
{
    m_nomEleve = nomEleve;
}

/*std::string getnomEleve()     
{
    return m_nomEleve;      Je ne comprend pas pourquoi avec cette méthode m_nomEleve était pas déclaré mais à la ligne 68 quand j'ai créé la méthode afficheNom, là m_nomEleve était reconnu 
}*/

void Eleve::setnote1(int note)
{
    m_note1 = note;
}
 
void Eleve::setnote2(int note)
{
    m_note2 = note;
}

int Eleve::getnote1()
{
    return m_note1;
}
    
int Eleve::getnote2()
{
    return m_note2;
}

/* Me permet d'afficher les notes de l'élève séparé par une virgule -> ex: 15/20, 5/10 */        
void Eleve::afficherNote()
{
    cout << m_note1 << "/20" << ", " << m_note2 << "/10" << endl;
}

/* Retourne la valeur moyenne qui est calculé ci-dessous, j'ai mis du temps avant de me dire de mettre (float) car mon resultat était toujours 12 en moyene avec 15/20 et 5/10 */        
float Eleve::moyenne()
{
    return ((float)m_note1 + ((float)m_note2 * 2))/2;
}

/* méthode afficheNom pour pouvoir afficher le nom de l'éleve */
void Eleve::afficheNom()
{
    cout << m_nomEleve << " : ";
}


