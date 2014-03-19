//
//  WallLeft.h
//  Pong
//
//  Created by Mark van Mameren on 12-03-14.
//
//

#ifndef __Pong__WallLeft__
#define __Pong__WallLeft__

#include "Wall.h"

class WallLeft : public Wall
{
public:
    int x;
    bool isOver(int ballX);
};

#endif /* defined(__Pong__WallLeft__) */
