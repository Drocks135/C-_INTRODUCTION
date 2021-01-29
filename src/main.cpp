#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Game.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

std::vector<Game*>* getGames(){
    std::vector<Game*>* games = new std::vector<Game*>;
    std::ifstream dataFile("data\\video_games.csv");
    std::string line;

    std::getline(dataFile, line); //Uses the unessecary first line containing data names
    while(std::getline(dataFile, line)){
        std::istringstream iss(line);
        Game* tempGame(new Game(line));
        games->push_back(tempGame);
    }

    return games;
}

TEST_CASE( "Testing...", "[all]" ) {
    std::vector<Game*> *games = getGames();
    REQUIRE( games->size() == 1114);
    Game* g = games->at(222);
    REQUIRE( g->getName() == "WWE SmackDown vs. Raw 2007" );
    g = games->at(235);
    REQUIRE( g->getName() == "Rockstar Games presents Table Tennis");
    REQUIRE( !g->getOnline());
    g = games->at(254);
    REQUIRE( g->getSales() == 0.23 );
    g = games->at(541);
    REQUIRE( g->getConsole() == "PlayStation 3");
    g = games->at(978);
    REQUIRE( g->getRating() == 'M');
    g = games->at(1113);
    REQUIRE( g->getName() == "Chicken Hunter");
    REQUIRE( g->getReleaseYear() == 2008);
    double value = 0;
    for(auto it=games->begin(); it!=games->end(); ++it){
        value += (*it)->getSales();
    }
    REQUIRE( value > 574.3);
    REQUIRE( value < 574.4);
}
