#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nomEleve("Sans nom");
    int note1(0), note2(0);
    
    cout << "Entrez le nom de l'élève : ";
    cin >> nomEleve;
    
    cout << "Entrez la première note sur 20 : ";
    cin >> note1;
    
    cout << "Entrez la deuxième note sur 10 : ";
    cin >> note2;
    
    cout << "Nom de l'élève :\n" << nomEleve << endl;
    cout << "Note de l'éleve sur 20 :\n" << note1 << endl;
    cout << "Note de l'élève sur 10 :\n" << note2 << endl;
    
    cout << "\n" << nomEleve << " : " << note1 << "/20, " <<  note2 << "/10" << endl;
}
