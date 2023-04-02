#include<iostream>
#include<string>
#include<vector>
#include"players.h"
#include"walkings.h"
#include"camel.h"
#include"camelFast.h"
#include"centaur.h"
#include"boots.h"
#include"rasing.h"
#include"flyings.h"
#include"eagle.h"
#include"broom.h"
#include"magicCarpet.h"

#define MODE 0 // 1 - отладка, 0 - рабочий

#if MODE == 1

int test1(Players**, int);



#endif




int main()
{

    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

#if MODE == 1
    std::cout << "- = ОТЛАДКА = -" << std::endl;

    int dist = 4500;

    Eagle pl1;
    Broom pl2;
    MagicCarpet pl3;
    Camel pl4;
    CamelFast pl5;
    Centaur pl6;
    Boots pl7;

    int count; // Счетчик зарегестрированных участников
    Players* Players[7]; // Массив участников гонки

    Players[0] = &pl1;
    Players[2] = &pl2;
    Players[1] = &pl3;

//    std::cout << Players[0]->run(dist) << std::endl;
//    std::cout << Players[2]->name() << std::endl;

    std::cout << Players[1]->name() << " : " << Players[1]->run(dist) << std::endl;

    std::cout << test1(Players, 2) << std::endl;

    std::cout << Players[1]->name() << " : " << Players[1]->run(dist) << std::endl;

        
    


#elif MODE == 0

    bool rPlay = true;                          // Флаг готовности к игре
    int rType;                                  // Тип гонки
    int rDist;                                  // Гоночная дистанция
    int count = 0;                              // Количество зарегестрированных участников
    Players* rPlayers[7];                       // Массив участников гонки
    Boots boost;
    Broom broom;
    Camel camel;
    Centaur centaur;
    Eagle eagle;
    CamelFast camelFast;
    MagicCarpet magicCarpet;
    Players* allPlayers[] = {                  // Массив всех возможных участников гонки
        &boost, &broom, &camel, &centaur, 
        &eagle, &camelFast, &magicCarpet };
    int newType;                                // Тип выбранного транспорта
    char iAgain;
    
    std::system("clear");
    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;

    do  // цикл игр до выхода из программы
    {
        newType = 0;                            // Тип выбранного транспорта
        racingType(&rType);                     // Получение типа гонки
        std::system("clear");
        rDist = racingDist();                   // Получение гоночной дистанции
        std::system("clear");
        char iSel;
        bool iReady = false;                    // Готовность к гонке
        bool iRegistr = false;                  // Окончание регистрации

        do  // цикл регистрации 
        {
            std::system("clear");
            if (count < 2)
            {
                std::cout << "Должно быть зарегестрировано хотя бы 2 транспортных средства" << std::endl;
                std::cout << "1. Зарегестрировать транспорт" << std::endl;
            }
            else
            {
                std::cout << "1. Зарегестрировать транспорт" << std::endl;
                std::cout << "2. Начать гонку" << std::endl;
            }
            std::cout << "Выберите действие: ";
            std::cin >> iSel;

            std::system("clear");

            if ((static_cast<int>(iSel) - 48) == 1)
            {

                do  // цикл регистрации 
                {
                    if (count > 0)
                    {
                        std::cout << std::endl;
                    }

                    rasingInfo(rPlayers, &count, &rType, &rDist);
                    if (selectPlayer(rPlayers, allPlayers, &count, &rType, &newType))
                    {
                        iRegistr = false;
                        
                        if (newType)
                        {
                            if (!checkDouble(rPlayers, &count))
                            {
                                std::cout << rPlayers[count]->name() << " успешно зарегестрирован" << std::endl;
                                count++;
                            }
                            else
                            {
                                std::cout << rPlayers[count]->name() << " уже зарегестрирован!" << std::endl;
                            }
                        }
                        else
                        {
                            std::cout << "Попытка зарегестрировать неправильный тип транспортного средства" << std::endl;
                        }
                    }
                    else
                    {
                        iRegistr = true;
                    }
                } while (!iRegistr);

            }
            if ((static_cast<int>(iSel) - 48) == 2)
            {
                iReady = true;
            }
        } while (!iReady);
        
        // Расчет значений
        struct Result {
            std::string name;
            float result;
        };
        
        Result* results = new Result[count];

        for (int i = 0; i < count; i++)
        {
            results[i].name = rPlayers[i]->name();
            results[i].result = rPlayers[i]->run(rDist);
        }

        // Сортировка
        std::string _name;
        float _result;
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < (count - i - 1); j++)
            {
                if (results[j].result > results[j + 1].result)
                {
                    _name = results[j + 1].name;
                    _result = results[j + 1].result;
                    results[j + 1].name = results[j].name;
                    results[j + 1].result = results[j].result;
                    results[j].name = _name;
                    results[j].result = _result;
                }
            }
        }

        // Вывод результатов
        std::system("clear");
        std::cout << "Результаты гонки:" << std::endl;
        for (int i = 0; i < count; i++)
        {
            std::cout << i + 1 << ". " << results[i].name << ". Время: " << results[i].result << std::endl;
        }

        // 
        std::cout << std::endl;
        std::cout << "1. Провести еще одну гонку" << std::endl;
        std::cout << "2. Выйти" << std::endl;
        std::cout << "Выберите действие: ";

        std::cin >> iAgain;

        // Завершение гонки
        count = 0;
        if ((static_cast<int>(iAgain) - 48) == 2)
        {
            rPlay = false;
        }
        std::system("clear");
    }
    while (rPlay);

    // Завершение программы

#endif
}


int test1(Players** player, int count)
{
    std::cout << (*player[count]).name() << std::endl;
    (*player[1]) = (*player[count]);

    return count;
}