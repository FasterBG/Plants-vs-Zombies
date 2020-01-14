#include "World.h"
#include<windows.h>
World::World()
{
        m_pole_rows = pole_rows;
        m_pole_cols = pole_cols;
        m_UI_WIDTH = 16;
        m_LANE_COUNT = 5;
        m_SPACE_COUNT = 8;
        m_SCALE = 16;
        m_coins = 0;
}

World::~World()
{

}

void World::initWorld()
{
    init();
    m_shop = new Shop(16, m_SCALE);
    m_shop->initUI();
}

void World::addPlant(PLANTS type, int x, int y)
{

}

void World::addZombie(ZOMBIES type, int x, int y)
{

}

void World::addCoins()
{
    m_coins++;
}

void World::update()
{
    //zombies
    for(int i=0; i < m_zombies.size(); i++){
        m_zombies[i]->moveZombie();
    }
    //shop
    addCoins();
    m_shop->updateUI(m_coins);
    m_shop->buy(m_coins);
    m_shop->plant();
}

void World::draw()
{
    //zombies
    for(int i=0; i < m_zombies.size(); i++){
        m_zombies[i]->print();
    }
}
void World::music(){

Beep(277.18,300);

Beep(293.66,350);
Beep(277.18,300);
Beep(293.66,350);

Beep(233.08,300);
Beep(196,700);
Beep(233.08,300);
Beep(196,700);
Beep(277.18,300);
Beep(196,700);

}
