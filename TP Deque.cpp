// TP Deque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <memory>
#include <deque>
#include "TP Deque.h"


std::deque<std::deque<bool>> create_deque() 
{
    std::deque<std::deque<bool>> map;
    map.push_back({ 0,0,1,0,0 });
    map.push_back({ 0,1,1,0,0 });
    map.push_back({ 0,0,0,0,0 });
    map.push_back({ 0,0,1,0,1 });
    map.push_back({ 0,0,0,1,0 });

    return map;
}


void show_deques(std::deque<std::deque<bool>> deques)
{
    int nbRows = deques.size();
    int nbCol = deques[0].size();
    std::cout << "\n\n";

    for (int x = 0; x < nbCol; ++x) 
    {
        for (int y = 0; y < nbRows; ++y) 
        {
            std::cout << deques[y][x] << ' ';
        }
        std::cout << std::endl;
    }
}


void addHaut(std::deque<std::deque<bool>>& map) 
{
    int nbRows = map.size();
        
    for (int y = 0; y < nbRows; ++y)
    {
        map[y].push_front(0);
    }

}
void addBas(std::deque<std::deque<bool>>& map) 
{
    int nbRows = map.size();

    for (int y = 0; y < nbRows; ++y) 
    {
        map[y].push_back(0);
    }
}
void addGauche(std::deque<std::deque<bool>>& map) 
{
    int nbCol = map[0].size();

    std::deque<bool> col;

    for (int x = 0; x < nbCol; ++x) 
    {
        col.push_back(0);
    }

    map.push_front(col);
}
void addDroite(std::deque<std::deque<bool>>& map) 
{
    int nbCol = map[0].size();

    std::deque<bool> col;

    for (int x = 0; x < nbCol; ++x) 
    {
        col.push_back(0);
    }

    map.push_back(col);
}

void add(std::string direction, std::deque<std::deque<bool>>& map) 
{
    std::cout << direction;

    if (direction == "H") 
    {
        addHaut(map);
    }
    else if (direction == "B") 
    {
        addBas(map);
    }
    else if (direction == "G") 
    {
        addGauche(map);
    }
    else if (direction == "D") 
    {
        addDroite(map);
    }
    else if (direction == "HG") 
    {
        addHaut(map);
        addGauche(map);
    }
    else if (direction == "HD")
    {
        addHaut(map);
        addDroite(map);
    }
    else if (direction == "BG")
    {
        addBas(map);
        addGauche(map);
    }
    else if (direction == "BD") 
    {
        addBas(map);
        addDroite(map);
    }

    show_deques(map);
}


void getShortestPath(std::deque<std::deque<bool>> map, int Xstart, int Ystart, int Xend, int Yend)
{
    std::deque<std::deque<int>> siblings;
    siblings.push_back({ Xstart, Ystart });
    while (siblings.size() > 0) 
    {
        //get siblings

        //get cost by sibling
    }
}

int main()
{
    std::deque<std::deque<bool>> map = create_deque();
    show_deques(map);
    add("BD", map);
    getShortestPath(map, 0, 1, 3, 1);
}
