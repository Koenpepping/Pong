//
//  Ball.cpp
//  Pong
//
//  Created by Mark van Mameren on 12-03-14.
//
//

#include "Ball.h"

void Ball::move()
{

    x += dx * speed;
    y += dy * speed;
}