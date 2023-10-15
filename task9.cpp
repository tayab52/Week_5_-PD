#include <iostream>

using namespace std;

string checkPointPosition(int height, int xCoordinate, int yCoordinate);

main()
{

    int height, xCoordinate, yCoordinate;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> xCoordinate;
    cout << "Enter y coordinate: ";
    cin >> yCoordinate;

    cout << checkPointPosition(height, xCoordinate, yCoordinate);
}

string checkPointPosition(int height, int xCoordinate, int yCoordinate)
{
    int xBlocks, yBlocks;
    xBlocks = 2 * height;
    yBlocks = 4 * height;
    string position;

    if ((xCoordinate > height && xCoordinate < xBlocks) && (yCoordinate > height && yCoordinate < yBlocks))
    {
        position = "Inside";
    }
    else if ((xCoordinate > 0 && (xCoordinate < height * 3)) && (yCoordinate > 0 && yCoordinate < height))
    {

        position = "Inside";
    }
    else if (xCoordinate == height || xCoordinate == xBlocks && (yCoordinate == height || yCoordinate == yBlocks || yCoordinate == (height * 3) || yCoordinate == (height * 4)))
    {
        position = "Border";
    }
    else if (xCoordinate == 0 || xCoordinate == xBlocks || xCoordinate == (height * 3) && (yCoordinate == height || yCoordinate == yBlocks))
    {
        position = "Border";
    }
    else
    {
        position = "Outside";
    }
    return position;
}
