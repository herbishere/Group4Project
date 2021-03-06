/******************************************************************************
** Author:      Winter 162 400 Group 4
** Date:        02/01/2019
** Description: This is a declaration of the Critter, Ant, and Doodlebug
**              classes.
******************************************************************************/
#ifndef CRITTER_HPP
#define CRITTER_HPP
#include <iostream>
using std::cout;


class Critter
{
    protected:
        int x_pos;
        int y_pos;
        int age;
        int breedAge;
        char symbol;
        int moveSuccess;

    public:
        Critter(int, int);
        Critter(int, int, int);
        virtual ~Critter(){};
        virtual void move(Critter ***&, int, int) = 0;
        virtual void breed(Critter ***, int, int);
        virtual bool starve(Critter***);

        char getSymbol();
        int getX_pos();
        void setX_pos(int);
        int getY_pos();
        void setY_pos(int);
        int getAge();
        bool checkBounds(int, int, int, int);
	    void resetMoveSuccess();
        int getMoveSuccess();
        //helper function for breed testing
        virtual void setAge(int ageIn);
};
#endif
