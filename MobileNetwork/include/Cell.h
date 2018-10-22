#include "Point.h"
#ifndef CELL_H
#define CELL_H


class Cell
{
    public:
        Cell(int x, int y, int i, int j);
        virtual ~Cell();
        int getX();
        int getY();
        void drawHexagon();
        void changeColor(int red, int green, int blue, double alpha);

    protected:

    private:
        int x, y, i, j, red, green, blue;
        double alpha;
        Point *centerPoint;

};

#endif // CELL_H
