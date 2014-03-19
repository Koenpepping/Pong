//
//  WallLeft.cpp
//  Pong
//
//  Created by Mark van Mameren on 12-03-14.
//
//

#include "WallLeft.h"

bool WallLeft::isOver(int ballX)
{
    return ballX <= x;
}