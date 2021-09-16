#include "N2.h"
#include "N3.h"
#include "N4.h"
#include "N5.h"
#include "Log.h"
#include "Error.h"
#include <math.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    
    setlocale(LC_ALL, "ru");
    
    int n = 1000; // номер задания
    cout << "Домашнее задание 2" << endl;
    cout << "0 - конец программы" << endl;
    while (n != 0) 
    {
        cin >> n;

        if (n == 2)
        {
            int x, a;
            cout << "\nВведите число x: ";
            cin >> x;
            cout << "\nВведите число a: ";
            cin >> a;

            /*if (n2(x, a) == 404)
            {
                cout << getError();
                cout << endl;
                
            }
            */
            cout << "\nРезультат :" << n2(x, a);

           
            
        }

        if (n == 3)
        {
            int x, y, b;
            cout << "\nВведите x: " << endl;
            cin >> x;
            cout << "\nВведиту y: " << endl;
            cin >> y;
            cout << "\nВведите b: " << endl;
            cin >> b;

            if (n3(x, y, b) == 404)
            {
                cout << getError();
            }
            if (n3(x, y, b) != 404)
            {
                cout << "Результат :" << n3(x, y, b);
                cout << endl;
            }
        }

        if (n == 4)
        {
            cout << "\nВведите начальное число: " << endl;
            int i;
            cin >> i;
            n4(i);
        }

        if (n == 5)
        {
            cout << "\nпротабулировать функцию\n" << endl;
            
            for (int i = -4; i < 5; i += 1)
            {
                cout << n5(i) << "\t";


            }
            
        }
    }
    
    /*
    double x;
    cin >> x;
    x = fabs(x);
    cout << n2(x, 10);
    */

  
    return 0;

}
