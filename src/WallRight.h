//
//  WallRight.h
//  Pong
//
//  Created by Mark van Mameren on 12-03-14.
//
//

#ifndef __Pong__WallRight__
#define __Pong__WallRight__

#include "Wall.h"

class WallRight : public Wall
{
public:
    int x;
    bool isOver(int ballX);
};

#endif /* defined(__Pong__WallRight__) */
