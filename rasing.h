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
* ���������� ����� ���������
*/
void racingType(int* racingType);

/**
* ���������� ����� ���������
*/
int racingDist();

/**
* ���������� true ��� �������� ������ ������ *player, ���������� �� ������ allPlayers ��� ������� � ����� ���� *type
* �������� �� ������������ �� �����������
* Players** rPlayers, Players** allPlayers, int* count, int* pType, int* newType
*/
bool selectPlayer(Players** ,Players**, int* , int* , int* );

/**
* ������� ���������� � ��������� � ������������������ ����������
* Players** rPlayers, int* count, int* pType, int* rDist
*/ 
void rasingInfo(Players** , int* , int* , int* );

/**
* ��������� ������� ��������� ����������� ��� ������������������� ������������� ��������
*/
bool checkDouble(Players**, int*);