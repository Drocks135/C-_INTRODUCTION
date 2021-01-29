#include "Game.hpp"
#include <vector>
#include <string>
#include <sstream>

Game::Game(std::string csvString){
    std::vector <std::string> tokens;
    std::stringstream ss(csvString);
    std::string tempString;

    while(getline(ss, tempString, ',')) 
    { 
        tokens.push_back(tempString); 
    }

    setName(tokens[0]);
    setIsHandeld(tokens[1] == "true");
    setMaxPlayers(std::stoi(tokens[2]));
    setIsMultiplatform(tokens[3] == "true");
    setOnline(tokens[4] == "true");
    setGenre(tokens[5]);
    setIsLicensed(tokens[6] == "true");
    setPublisher(tokens[7]);
    setIsSequel(tokens[8] == "true");
    setReviewScore(std::stoi(tokens[9]));
    setSales(std::stod(tokens[10]));
    setUsedPrice(std::stod(tokens[11]));
    setConsole(tokens[12]);
    setRating(tokens[13][0]);
    setIsReRelease(tokens[14] == "true");
    setReleaseYear(std::stoi(tokens[15]));
}

std::string Game::getName()
{
    return this->Title;
}

void Game::setName(std::string Title)
{
    this->Title = Title;
}

bool Game::isHandeld()
{
    return this->handeld;
}

void Game::setIsHandeld(bool isHandeld)
{
    this->handeld = isHandeld;
}

int Game::getMaxPlayers()
{
    return this->maxPlayers;
}

void Game::setMaxPlayers(int maxPlayers)
{
    this->maxPlayers = maxPlayers;
}

bool Game::isMultiplatform()
{
    return this->multiplatform;
}

void Game::setIsMultiplatform(bool isMultiplatform)
{
    this->multiplatform = isMultiplatform;
}

bool Game::getOnline()
{
    return this->hasOnline;
}

void Game::setOnline(bool hasOnline)
{
    this->hasOnline = hasOnline;
}

std::string Game::getGenre()
{
    return this->genre;
}

void Game::setGenre(std::string genre)
{
    this->genre = genre;
}

bool Game::isLicensed()
{
    return this->licensed;
}

void Game::setIsLicensed(bool isLicensed)
{
    this->licensed = isLicensed;
}

std::string Game::getPublisher()
{
    return this->Publisher;
}

void Game::setPublisher(std::string Publisher)
{
    this->Publisher = Publisher;
}

bool Game::isSequel()
{
    return this->sequel;
}

void Game::setIsSequel(bool isSequel)
{
    this->sequel = isSequel;
}

int Game::getReviewScore()
{
    return this->reviewScore;
}

void Game::setReviewScore(int reviewScore)
{
    this->reviewScore = reviewScore;
}

double Game::getSales()
{
    return this->sales;
}

void Game::setSales(double sales)
{
    this->sales = sales;
}

double Game::getUsedPrice()
{
    return this->usedPrice;
}

void Game::setUsedPrice(double usedPrice)
{
    this->usedPrice = usedPrice;
}

std::string Game::getConsole()
{
    return this->console;
}

void Game::setConsole(std::string console)
{
    this->console = console;
}

char Game::getRating()
{
    return this->maturityRating;
}

void Game::setRating(char maturityRating)
{
    this->maturityRating = maturityRating;
}

bool Game::isReRelease()
{
    return this->reRelease;
}

void Game::setIsReRelease(bool isReRelease)
{
    this->reRelease = isReRelease;
}

int Game::getReleaseYear()
{
    return this->releaseYear;
}

void Game::setReleaseYear(int releaseYear)
{
    this->releaseYear = releaseYear;
}