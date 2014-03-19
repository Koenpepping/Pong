//
//  Ball.h
//  Pong
//
//  Created by Mark van Mameren on 12-03-14.
//
//

#ifndef __Pong__Ball__
#define __Pong__Ball__

#include "Wall.h"

class Ball
{
public:
    void move();
    
    int speed;
    int x;
    int y;
    int dx;
    int dy;
    int radius;
    int bl; // linkerkant van de ball
    int br; // rechterkant van de ball
    int bb; // bovenkant van de ball
    int bo; // onderkant van de ball
};

#endif /* defined(__Pong__Ball__) */
