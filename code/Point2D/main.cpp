#include <iostream>
#include "Point.h"

int main()
{

    Point myPt(10, 5, 8);
    Point myPt2(3, 10, 15);

    int myX = myPt.getX();

    std::cout << myX << std::endl;

    std::cout << myPt.toCord() << std::endl;

    myPt.setX(3);

    std::cout << myPt.toCord() << std::endl;

    myPt++;

    myPt.toCord();

    Date tomorrow = today;

    tomorrow.toCord();


return 0;
}