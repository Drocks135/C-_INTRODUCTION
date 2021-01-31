#ifndef __HPP__GAME
#define __HPP__GAME
#include <string>

class Game{
    public:
        Game(std::string csvString);
    
        std::string getName();
        void setName(std::string Title);
        bool isHandeld();
        void setIsHandeld(bool isHandeld);
        int getMaxPlayers();
        void setMaxPlayers(int maxPlayers);
        bool isMultiplatform();
        void setIsMultiplatform(bool isMultiplatform);
        bool getOnline();
        void setOnline(bool hasOnline);
        std::string getGenre();
        void setGenre(std::string genre);
        bool isLicensed();
        void setIsLicensed(bool isLicensed);
        std::string getPublisher();
        void setPublisher(std::string Publisher);
        bool isSequel();
        void setIsSequel(bool isSequel);
        int getReviewScore();
        void setReviewScore(int reviewScore);
        double getSales();
        void setSales(double sales);
        double getUsedPrice();
        void setUsedPrice(double usedPrice);
        std::string getConsole();
        void setConsole(std::string console);
        char getRating();
        void setRating(char maturityRating);
        bool isReRelease();
        void setIsReRelease(bool isReRelease);
        int getReleaseYear();
        void setReleaseYear(int releaseYear);

        private:
        std::string Title;
        bool handeld;
        int maxPlayers;
        bool multiplatform;
        bool hasOnline;
        std::string genre;
        bool licensed;
        std::string Publisher;
        bool sequel;
        int reviewScore;
        double sales;
        double usedPrice;
        std::string console;
        char maturityRating;
        bool reRelease;
        int releaseYear;
};

#endif

