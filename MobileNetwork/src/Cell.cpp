#include "Cell.h"
#include "Point.h"

//par default couleur blanc
Cell::Cell(int x, int y, int i, int j)
    :x(x),
    y(y),
    i(i),
    j(j)

{
    red = green = blue = 0;
    alpha = 1;
    centerPoint = new Point (x, y);
}

Cell::~Cell()
{
    //dtor
}


int Cell::getX(){
        centerPoint.getX();
}
int Cell::getY(){
    centerPoint.getY();
}
//Alpha must be in range beteween 0.0-1.0
void Cell::changeColor(int red, int green, int blue, double alpha){
		this->red = red;
		this->green = green;
		this->blue = blue;
}
