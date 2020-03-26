#ifndef CLASS_ELEVE
#define CLASS_ELEVE
#include <iostream>
#include <string>

class Eleve
{
    private:
        std::string m_nomEleve;
        int m_note1;
        int m_note2;
    
    public:
        Eleve();
        
        Eleve(std::string nomEleve, int note1, int note2);
        
        ~Eleve();
        
        std::string setnomEleve();
        
        void setnote1(int note);
        
        void setnote2(int note);
        
        int getnote1();
        
        int getnote2();
        
        void afficherNote();
        
        double moyenne();
};

#endif
