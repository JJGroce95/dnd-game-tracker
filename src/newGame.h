#ifndef NEWGAME_H // To make sure you don't declare the function more than once by including the header multiple times.
#define NEWGAME_H

class newGame
{
private:
    int m_year;
    int m_month;
    int m_day;

public:
    newGame();

    void SetDate();
};
#endif
