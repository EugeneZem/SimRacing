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

    int rType; // Тип гонки
    int rDist; // Гоночная дистанция
    std::vector <Walkings> rPlayersWalking;     // Массив участников наземного типа
    std::vector <Flyings> rPlayersFlying;     // Массив участников воздушного типа
    Walkings newWalking;    // Участник наземного типа
    Flyings newFlying;      // Участник воздушного типа
    int newType = 0;            // Тип выбранного транспорта

    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
    racingType(&rType);     // Получение типа гонки
    std::system("clear");
    rDist = racingDist();   // Получение гоночной дистанции

    while (selectPlayer(&newWalking, &newFlying, &rType, &newType))
    {
        std::system("clear");
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
        rasingInfo(&rPlayersWalking, &rPlayersFlying, &rType, &rDist);
    }//







    
    
    //Players rPlayers = nullptr;
    //Walkings newWalking;
    //Camel camel;
    //Boots boots;

    //newWalking = boots;

    //std::vector <Walkings> qqq(2);
    //qqq.at(0) = newWalking;

    //newWalking = camel;

    //qqq.at(1) = newWalking;






    //if (newPlayer(NewWalking, &rType)) 
    //{
        //std::cout << qqq.at(0).name() << std::endl;
        //std::cout << qqq.at(1).name() << std::endl;

    //}



//    racingPlayers(&rType, rPlayers, &rCount);

/*    std::cout << "Должно быть зарегестрировано хотя бы 2 транспортных средства" << std::endl;
    std::cout << "1. Зарегестрировать транспорт" << std::endl;
    std::cout << "2. Начать гонку" << std::endl;
    std::cout << "Выберите действие: ";
 */

   
    

    
 





 //   std::cout << rPlayers[0].name() << " " << rPlayers[0].speed() << std::endl;
 //   std::cout << rPlayers[1].name() << " " << rPlayers[1].speed() << std::endl;




/*   CamelFast* cam1 = new CamelFast();
    std::cout << cam1->name() << " " << cam1->run(4500) << std::endl;
    delete cam1;

    Centaur* cam2 = new Centaur();
    std::cout << cam2->name() << " " << cam2->run(4500) << std::endl;
    delete cam2;

    Boots* cam3 = new Boots();
    std::cout << cam3->name() << " " << cam3->run(4500) << std::endl;
    delete cam3;*/
}