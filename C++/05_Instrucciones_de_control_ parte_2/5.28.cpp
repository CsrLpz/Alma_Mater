#include <iostream>
using std::cout;
using std::endl;

int main()
{
    for (int dias = 1; dias <= 12; dias++)
    {
        switch (dias)
        {
            case 1:     cout << "Primer día:"           << endl;    break;
            case 2:     cout << "Segundo día:"          << endl;    break;
            case 3:     cout << "Tercer día:"           << endl;    break;
            case 4:     cout << "Cuarto día:"           << endl;    break;
            case 5:     cout << "Quinto día:"           << endl;    break;
            case 6:     cout << "Sexto día:"            << endl;    break;
            case 7:     cout << "Séptimo día:"          << endl;    break;
            case 8:     cout << "Octavo día:"           << endl;    break;
            case 9:     cout << "Noveno día:"           << endl;    break;
            case 10:    cout << "Décimo día:"           << endl;    break;
            case 11:    cout << "Décimo Primer día:"    << endl;    break;
            case 12:    cout << "Décimo Segundo día:"   << endl;    break;
            default:    cout << "--Día inválido--"      << endl;
        }

        for (int j = 1; j <= dias; j++)
        {
            switch (j)
            {
                case 1:     cout << "- Una perdiz en un peral"      << endl;    break;
                case 2:     cout << "- Dos tórtolas"                << endl;    break;
                case 3:     cout << "- Tres gallinas francesas"     << endl;    break;
                case 4:     cout << "- Cuatro pájaros cantores"     << endl;    break;
                case 5:     cout << "- Cinco anillos de oro"        << endl;    break;
                case 6:     cout << "- Seis gansos poniendo huevos" << endl;    break;
                case 7:     cout << "- Siete cisnes nadando"        << endl;    break;
                case 8:     cout << "- Ocho criadas ordeñando"      << endl;    break;
                case 9:     cout << "- Nueve damas bailando"        << endl;    break;
                case 10:    cout << "- Diez lores saltando"         << endl;    break;
                case 11:    cout << "- Once flautistas tocando"     << endl;    break;
                case 12:    cout << "- Doce tamborileros tocando"   << endl;    break;
                default:    cout << "--Estrofa invalida--"          << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
