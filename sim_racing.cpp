#include<iostream>
#include"camel.h"
#include"camelFast.h"
#include"centaur.h"
#include"boots.h"

int main()
{
    setlocale(LC_ALL, "ru-RU");
    system("chcp 1251");

    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;

    Camel* cam = new Camel();
    std::cout << cam->run(4500) << std::endl;
    delete cam;

    CamelFast* cam1 = new CamelFast();
    std::cout << cam1->run(4500) << std::endl;
    delete cam1;

    Centaur* cam2 = new Centaur();
    std::cout << cam2->run(4500) << std::endl;
    delete cam2;

    Boots* cam3 = new Boots();
    std::cout << cam3->run(4500) << std::endl;
    delete cam3;
}