//
//  Pad.h
//  Pong
//
//  Created by Mark van Mameren on 12-03-14.
//
//

#ifndef __Pong__Pad__
#define __Pong__Pad__

class Pad
{
public:
    Pad();
    void up ();
    void down ();
    
    int pos;
    int width;
    int height;
};

#endif /* defined(__Pong__Pad__) */
