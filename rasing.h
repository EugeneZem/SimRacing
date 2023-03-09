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
* ���������� true ��� �������� ������ ������ *player ��� ������� � ����� ���� *type
* �������� �� ������������ �� �����������
*/
bool selectPlayer(Walkings* newWalking, Flyings* newFlyings, int* pType, int* newType);

/**
* ������� ���������� � ��������� � ������������������ ����������
*/ 
void rasingInfo(std::vector <Walkings>* rPlayersWalking, std::vector <Flyings>* rPlayersFlying, int* pType, int* rDist);

/**
* ��������� ������� ��������� ����������� ��� ������������������� ������������� ��������
*/
bool checkDouble(std::vector <Walkings>* rPlayersWalking, Walkings* newWalking);
bool checkDouble(std::vector <Flyings>* rPlayersFlying, Flyings* newFlying);