#ifndef LOADGAME_H // To make sure you don't declare the function more than once by including the header multiple times.
#define LOADGAME_H

class loadGame
{
private:
    int m_year;
    int m_month;
    int m_day;

public:
    loadGame();

    void SetDate();
};
#endif
