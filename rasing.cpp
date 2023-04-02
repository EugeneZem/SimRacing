#include<iostream>
#include<string>
#include<vector>
#include"camel.h"
#include"camelFast.h"
#include"centaur.h"
#include"boots.h"
#include"flyings.h"
#include"broom.h"
#include"eagle.h"
#include"magicCarpet.h"

void racingType(int* racingType)
{
    char iType;

    do
    {
        std::cout << "1. ����� ��� ��������� ����������" << std::endl;
        std::cout << "2. ����� ��� ���������� ����������" << std::endl;
        std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
        std::cout << "�������� ��� �����: ";
        std::cin >> iType;
            *racingType = static_cast<int>(iType) - 48;
        if (*racingType < 1 || *racingType > 3)
        {
            racingType = 0;
            std::cout << std::endl << "��� ����� ������ �������" << std::endl;
        }
    } while (!racingType);
}

int racingDist()
{
    bool check;
    std::string iDist;

    do
    {
        std::cout << "������� ����� ��������� (������ ���� �������������): ";
        std::cin >> iDist;
        check = true;
        int n = iDist.length() - 1;
        int s;

        while (n >= 0 && check)
        {
            s = static_cast<int>(iDist[n]) - 48;
            if (!(s >= 0 && s <= 9))
            {
                check = false;
            }
            n--;
        }
        if (check == false || !std::stoi(iDist))
        {
            check = false;
            std::cout << std::endl << "��������� ����� ������� �������" << std::endl;
        }
    } while (!check);
    return std::stoi(iDist);
}

void racingPlayers(int* type, Players* nPlayer, int* count)
{

}


/**
* ���������� true ��� �������� ������ ������ *player, ������������ � ����� ���� *type
* �������� �� ������������ �� �����������
*/
bool selectPlayer(Players** rPlayers, Players** allPlayers, int* count, int* pType, int* newType)
{
    bool result = true;
    char value;
    std::cout << "1. �������-���������" << std::endl;
    std::cout << "2. �����" << std::endl;
    std::cout << "3. �������" << std::endl;
    std::cout << "4. �������" << std::endl;
    std::cout << "5. ����" << std::endl;
    std::cout << "6. �������-���������" << std::endl;
    std::cout << "7. �����-�������" << std::endl;
    std::cout << "0. ��������� �����������" << std::endl;
    std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
    std::cin >> value;

    std::system("clear");

    switch (static_cast<int>(value) - 48)
    {
    case 0:
    {
        result = false;
        break;
    }
    case 1:
    {
        if (*pType == 1 || *pType == 3)
        {
            rPlayers[*count] = allPlayers[0];
            *newType = 1;
        }
        else
        {
            *newType = 0;
        }
        break;
    }
    case 2:
    {
        if (*pType == 2 || *pType == 3)
        {
            rPlayers[*count] = allPlayers[1];
            *newType = 2;
        }
        else
        {
            *newType = 0;
        }
        break;
    }
    case 3:
    {
        if (*pType == 1 || *pType == 3)
        {
            rPlayers[*count] = allPlayers[2];
            *newType = 1;
        }
        else
        {
            *newType = 0;
        }
        break;
    }
    case 4:
    {
        if (*pType == 1 || *pType == 3)
        {
            rPlayers[*count] = allPlayers[3];
            *newType = 1;
        }
        else
        {
            *newType = 0;
        }
        break;
    }
    case 5:
    {
        if (*pType == 2 || *pType == 3)
        {
            rPlayers[*count] = allPlayers[4];
            *newType = 2;
        }
        else
        {
            *newType = 0;

        }
        break;
    }
    case 6:
    {
        if (*pType == 1 || *pType == 3)
        {
            CamelFast nPlayer;
            rPlayers[*count] = allPlayers[5];
            *newType = 1;
        }
        else
        {
            *newType = 0;
        }
        break;
    }
    case 7:
    {
        if (*pType == 2 || *pType == 3)
        {
            rPlayers[*count] = allPlayers[6];
            *newType = 2;
        }
        else
        {
            *newType = 0;
        }
        break;
    }
    }
    return result;
}

/**
* ��������� ������� ��������� ����������� ��� ������������������� ������������� ��������
*/
bool checkDouble(Players** rPlayers, int* count)
{
    bool result = false;
    for (int i = 0; i < *count; i++)
    {
        if (rPlayers[i]->name() == rPlayers[*count]->name())
        {
            result = true;
            break;
        }
    }
    return result;
}

/**
* ������� ���������� � ���� ����� � ������������������ ������������ ��������� 
*/
void rasingInfo(Players** rPlayers, int* count, int* pType, int* rDist)
{
    switch (*pType)
    {
    case 1:
        std::cout << "����� ��� ��������� ����������. ����������: " << *rDist << std::endl;
        break;
    case 2:
        std::cout << "����� ��� ���������� ����������. ����������: " << *rDist << std::endl;
        break;
    case 3:
        std::cout << "����� ��� ��������� � ���������� ����������. ����������: " << *rDist << std::endl;
        break;
    }

    std::string out;
    bool cont = false;

    if (*count > 0)
    {
        out = "������������������ ������������ ��������: ";
        for (int i = 0; i < *count; i++)
        {
            if (cont)
            {
                out = out + ", ";
            }
            out = out + (*rPlayers[i]).name();
            cont = true;
        }
        std::cout << out << std::endl;
    }
}