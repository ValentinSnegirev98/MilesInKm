#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    /* Изменение кодировки консоли: */
    system("chcp 1251>nul");
    
    /* Количество футов в миле: */
    const int ftInMile = 5280;

    /* Количество километров в миле: */
    const double kmInMile = 1.609344;

    /* Целочисленные переменные для записи кол-ва миль, футов, километров и метров: */
    int dMile, dFt, dKm, dM;

    /* Ввод расстояния в милях и футах: */
    cout << "Расстояние в милях и футах." << endl;
    cout << "Мили: ";
    cin >> dMile;
    cout << "Футы: ";
    cin >> dFt;

    /* Расстояние в милях: */
    double distMile = dMile + (double)dFt / ftInMile;

    /* Расстояние в километрах: */
    double distKm = distMile * kmInMile;

    /* Километры: */
    dKm = (int)distKm;

    /* Метры: */
    dM = (int)((distKm - dKm) * 1000);

    /* Отображение результатов вычислений: */
    cout << "Расстояние в километрах и метрах." << endl;
    cout << "Километры: " << dKm << endl;
    cout << "Метры: " << dM << endl;

    /* Задержка консольного окна: */
    system("pause");
    return 0;
}