//
//  Pad.cpp
//  Pong
//
//  Created by Mark van Mameren on 12-03-14.
//
//

#include "Pad.h"

Pad::Pad()
{
    width = 8;
    height = 90;
}

void Pad::up ()
{
    pos += -10;
}

void Pad::down ()
{
    pos += 10;
}