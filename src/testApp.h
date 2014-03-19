#pragma once

#include "ofMain.h"
#include "Pad.h"
#include "Ball.h"
#include "WallLeft.h"
#include "WallRight.h"

class testApp : public ofBaseApp{

	public:
        testApp(int w, int h);
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofSoundPlayer applause;
        ofSoundPlayer ping;
        ofSoundPlayer pong;
        ofSoundPlayer wall;
    
    
    
    
    
private:
    void resetBoard();
    int score1, score2;
    int width, height;
    Ball ball;
    WallLeft wallLeft;
    WallRight wallRight;
    Pad padLeft;
    Pad padRight;
    int counter;
    
};
