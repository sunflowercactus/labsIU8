#include <iostream>
#include <math.h>
using namespace std;
// функция считывает число
float num()
{
    double chislo = 0;
    double k = 10;
    double p;
    char c;

    for (;;) //бесконечный перебор
    {
        c = cin.get();
        if (c >= '0' && c <= '9')
        {
            chislo = chislo * 10 + c - '0';
        }
        else{
            p = chislo;
            cin.putback(c);
            break;
        }
    }
    c = cin.get();
    if (c == '.')
    {
        for (;;)
        {
            c = cin.get();
            if (c >= '0' && c <= '9')
            {
                p = p + (c - '0') / k;
                k = k * 10.0;
            }
            else
            {
                cin.putback(c);
                break;
            }
        }
        return p;
    }
    else
    {
        cin.putback(c);
        return chislo;
    }
}

float plusminus();
float skobochki()
{
    char a = cin.get();
    if (a == '(')
    {
        float x = plusminus();
        cin.get();
        return x;
    }
    else
    {
        cin.putback(a);
        return num();
    }
}



// степень
float stepen()
{
    float x = skobochki();
    for (;;)
    {
        char a = cin.get();
        switch (a)
        {
        case '^':
            x = pow(x, skobochki());
            break;
        default:
            cin.putback(a);
            return x;
        }
    }

}
// умножение деление
float umnozdelit()
{
    float x = stepen();
    for (;;)
    {
        char a = cin.get();
        switch (a)    // как if
        {
        case '*':
            x *= stepen();
            break;
        case '/':
            x /= stepen();
            break;
        default:          // как else
            cin.putback(a);
            return x;
        }
    }

}

// плюс минус
float plusminus()
{
    float x = umnozdelit();
    for (;;)
    {
        char a = cin.get();
        switch (a)
        {
        case '+':  //ищем знак
            x += umnozdelit();
            break;
        case '-':
            x -= umnozdelit();
            break;
        default:
            cin.putback(a);
            return x;
        }
    }

}
int main()
{
    cout << "your task: ";
    double r = plusminus();
    cout << "now, the result is: " << r << endl;
    return 0;
}

