#include <iostream>

#include "World.h"
#include "ShopItem.h"

using namespace std;

bool end_game = false;

Shop shop(16);
World world(&shop);
int main()
{
    init();
    world.init();

    world.music();
    //�������� ������ ������������ �� ������ ��� - �� �����
    while(!end_game){

        world.update();
        Sleep(200);
    }

    return 0;
}
