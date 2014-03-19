//
//  WallRight.cpp
//  Pong
//
//  Created by Mark van Mameren on 12-03-14.
//
//

#include "WallRight.h"

bool WallRight::isOver(int ballX)
{
    return ballX >= x;
}