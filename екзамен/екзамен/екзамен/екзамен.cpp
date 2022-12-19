#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int  f1(int n, int mas[10]);




int main() {
    setlocale(0, ".1251");
    int n, mas[10], el = 10000;
    cout << "Введiть кiлькiсть елементiв масиву: ";
    cin >> n;
    for (int j = 0; j < n; j++) {
        cout << "mas[" << j << "]= ";
        cin >> mas[j];
    }


    cout << "Сума елементів масиву з непарними номерами :" << f1(n, mas) << endl;


    for (int j = 0; j < 10; j++)
        cout << mas[j] << " ";
    for (int j = 0; j < n; j++)
        if (el > mas[j])
            el = mas[j];

    int j = 0, sum1 = 0;
    while (mas[j++] >= 0);
    while (mas[j] >= 0) {
        sum1 += mas[j++];
    }

    cout << "Cума елементів масиву між від'ємними елементами  " << sum1 << endl;


    int h = 0, r = 0;
    while (h < n - r)
    {
        if (fabs(mas[h]) == 1)
        {
            for (int j = h; j < n - r - 1; j++)
                mas[j] = mas[j + 1];
            ++r;
        }
        else
            ++h;
    }
    for (h = n - 1; r != 0; mas[h] = 0, r--, h--);
    for (int h = 0; h < n; h++)
        cout << mas[h] << ' ';
    cout << endl;

}

int  f1(int n, int mas[10]) {
    int sum;
    sum = 0;
    for (int k = 0; k < n; k++) {
        if ((k % 2 == 1))
            sum += mas[k];
    }
    return sum;

}
