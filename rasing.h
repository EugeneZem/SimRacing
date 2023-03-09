#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"camel.h"
#include"camelFast.h"
#include"centaur.h"
#include"boots.h"
#include"flyings.h"

/**
* Возвращает длину дистанции
*/
void racingType(int* racingType);

/**
* Возвращает длину дистанции
*/
int racingDist();

/**
* Возвращает true при создании нового игрока *player для участия в гонке типа *type
* проверка на дублирование не выполняется
*/
bool selectPlayer(Walkings* newWalking, Flyings* newFlyings, int* pType, int* newType);

/**
* Выводит информацию о дистанции и зарегестрированных участниках
*/ 
void rasingInfo(std::vector <Walkings>* rPlayersWalking, std::vector <Flyings>* rPlayersFlying, int* pType, int* rDist);

/**
* Проверяет попытку повторной регистрации уже зарегестрированного транспортного средства
*/
bool checkDouble(std::vector <Walkings>* rPlayersWalking, Walkings* newWalking);
bool checkDouble(std::vector <Flyings>* rPlayersFlying, Flyings* newFlying);