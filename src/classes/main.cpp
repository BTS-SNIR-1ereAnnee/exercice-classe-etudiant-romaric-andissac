#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nomEleve("Sans nom");
    int note1(0), note2(0);
    
    cout << "Entrez le nom de l'élève : ";
    cin >> nomEleve;
    
    cout << "Entrez la première note : ";
    cin >> note1;
    
    cout << "Entrez la deuxième note : ";
    cin >> note2;
}
