#include <iostream>

int main()
{


    char znak;
    int x, y;

    std::cout <<"podaj liczbę:\n";
    std::cin >> x;

        std::cout <<"wybierz znak:\n";
        std::cin >>znak;

        switch (znak)
        {


            case '+':
             std::cout << x + y;
            break;

            case '*':
             std::cout << x * y;
            break;

            case '-':
             std::cout << x - y;
            break;

            case '/':
             std:: cout << x / y;
            break;
        }
        std::cout <<"podaj liczbę:\n";
        std::cin >> y;
        return 0;
}

