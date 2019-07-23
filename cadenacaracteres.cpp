#include <iostream>

using namespace std;

int main()
{
    char cadena[255];
    int vocal_a=0,vocal_e=0,vocal_i=0,vocal_u=0,vocal_o=0;
    cout << "Por favor ingrese cadena de caracteres: ";
    cin.getline(cadena,255);
    for(int i=0;i<255;i++){
        switch (cadena[i]) {
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    }
    cout << "vocal a: "<<vocal_a<< endl;
    cout << "vocal e: "<<vocal_e<< endl;
    cout << "vocal i: "<<vocal_i<< endl;
    cout << "vocal o: "<<vocal_o<< endl;
    cout << "vocal u: "<<vocal_u<< endl;
    return 0;
}
