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
* Возвращает true при создании нового игрока *player, выбранного из масива allPlayers для участия в гонке типа *type
* проверка на дублирование не выполняется
* Players** rPlayers, Players** allPlayers, int* count, int* pType, int* newType
*/
bool selectPlayer(Players** ,Players**, int* , int* , int* );

/**
* Выводит информацию о дистанции и зарегестрированных участниках
* Players** rPlayers, int* count, int* pType, int* rDist
*/ 
void rasingInfo(Players** , int* , int* , int* );

/**
* Проверяет попытку повторной регистрации уже зарегестрированного транспортного средства
*/
bool checkDouble(Players**, int*);