#include<iostream>
#include<string>
#include<vector>
#include"camel.h"
#include"camelFast.h"
#include"centaur.h"
#include"boots.h"
#include"rasing.h"

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

    bool rPlay = true;                          // Флаг готовности к игре
    int rType;                                  // Тип гонки
    int rDist;                                  // Гоночная дистанция
    std::vector <Walkings> rPlayersWalking;     // Массив участников наземного типа
    std::vector <Flyings> rPlayersFlying;       // Массив участников воздушного типа
    Walkings newWalking;                        // Участник наземного типа
    Flyings newFlying;                          // Участник воздушного типа
    int newType;                                // Тип выбранного транспорта
    char iAgain;
    
    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;

    do  // цикл игр до выхода из программы
    {
        newType = 0;                            // Тип выбранного транспорта
        racingType(&rType);                     // Получение типа гонки
        std::system("clear");
        rDist = racingDist();                   // Получение гоночной дистанции
        char iSel;
        bool iReady = false;                    // Готовность к гонке
        bool iRegistr = false;                  // Окончание регистрации

        do  // цикл регистрации 
        {

            if ((rPlayersWalking.size() + rPlayersFlying.size()) < 2)
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
            if ((static_cast<int>(iSel) - 48) == 1)
            {

                do  // цикл регистрации 
                {
                    rasingInfo(&rPlayersWalking, &rPlayersFlying, &rType, &rDist);
                    if (selectPlayer(&newWalking, &newFlying, &rType, &newType))
                    {
                        iRegistr = false;
                        switch (newType)
                        {
                        case 0:
                        {
                            std::cout << "Попытка зарегестрировать неправильный тип транспортного средства" << std::endl;
                            break;
                        }
                        case 1:
                        {
                            if (!checkDouble(&rPlayersWalking, &newWalking))
                            {
                                rPlayersWalking.push_back(newWalking);
                                std::cout << newWalking.name() << " успешно зарегестрирован" << std::endl;
                            }
                            else
                            {
                                std::cout << newWalking.name() << " уже зарегестрирован!" << std::endl;
                            }   
                            break;
                        }
                        case 2:
                        {
                            if (!checkDouble(&rPlayersFlying, &newFlying))
                            {
                                rPlayersFlying.push_back(newFlying);
                                std::cout << newFlying.name() << " успешно зарегестрирован" << std::endl;
                            }
                            else
                            {
                                std::cout << newFlying.name() << " уже зарегестрирован!" << std::endl;
                            }
                            break;
                        }
                        }
                    }
                    else
                    {
                        iRegistr = true;
                    }
                }
                while (!iRegistr);

            }
            if ((static_cast<int>(iSel) - 48) == 2)
            {
                iReady = true;
            }
        } while (!iReady);
        
        // Расчет значений
        struct Result {
            int type; // 1 - walkings; 2 - flyings
            int index;
            float result;
        };
        std::vector <Result> results;

        if (rPlayersWalking.size() > 0)
        {
            for (int i = 0; i < rPlayersWalking.size(); i++)
            {
                results.push_back({1, i, rPlayersWalking.at(i).run(&rDist)});
            }
        }
        
        if (rPlayersFlying.size() > 0)
        {
            Flyings* pFlying;
            for (int i = 0; i < rPlayersFlying.size(); i++)
            {
                pFlying = &rPlayersFlying.at(i);
                results.push_back({ 2, (int)rPlayersWalking.size(), pFlying->run(&rDist) });
            }
        }

        // Сортировка
        int _index, _type;
        float _result;
        for (int i = 0; i < results.size(); i++)
        {
            for (int j = 0; j < (results.size() - i - 1); j++)
            {
                if (results.at(j).result > results.at(j + 1).result)
                {
                    _index = results.at(j + 1).index;
                    _type = results.at(j + 1).type;
                    _result = results.at(j + 1).result;
                    results.at(j + 1).index = results.at(j).index;
                    results.at(j + 1).type = results.at(j).type;
                    results.at(j + 1).result = results.at(j).result;
                    results.at(j).index = _index;
                    results.at(j).type = _type;
                    results.at(j).result = _result;
                }
            }
        }

        // Вывод результатов
        std::cout << "Результаты гонки:" << std::endl;
        for (int i = 0; i < results.size(); i++)
        {
            std::cout << i + 1 << ". ";
            if (results.at(i).type == 1)
            {
                std::cout << rPlayersWalking.at(results.at(i).index).name();
            }
            else
            {
                std::cout << rPlayersFlying.at(results.at(i).index).name();
            }
            std::cout << ". Время: " << results.at(i).result << std::endl;
        }

        // 
        std::cout << "1. Провести еще одну гонку" << std::endl;
        std::cout << "2. Выйти" << std::endl;
        std::cout << "Выберите действие: ";

        std::cin >> iAgain;

        // Завершение гонки
        rPlayersWalking.clear();
        rPlayersFlying.clear();
        iReady = false;
        
        if ((static_cast<int>(iAgain) - 48) == 2)
            {
                rPlay = false;
            }
    }
    while (rPlay);

    // Завершение программы

}