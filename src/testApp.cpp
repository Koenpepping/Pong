#include "testApp.h"



testApp::testApp(int w, int h)
{
    width = w;
    height = h;
    wallLeft.x = 0;
    wallRight.x = width;
    ball.x = width / 2;
    ball.y = height / 2;
    ball.dx = -1;
    ball.dy = 1;
    ball.speed = 3;
    ball.radius = 10;
    ball.br = ball.x + ball.radius;
    ball.bl = ball.x - ball.radius;
    ball.bb = ball.y - ball.radius;
    ball.bo = ball.y + ball.radius;
    padLeft.pos = height / 2;
    padRight.pos = height / 2;
    score1 = score2 = 0;
}

//--------------------------------------------------------------
void testApp::setup(){
    
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    
    applause.loadSound("sounds/applause.wav");
    pong.loadSound("sounds/pong.wav");
    ping.loadSound("sounds/pong.wav");
    wall.loadSound("sounds/wall.wav");
}

void testApp::resetBoard()
{
    counter = 0;
    ball.speed = 3;
    ball.x = width / 2;
    ball.y = height / 2;
    padLeft.height = 90;
    padRight.height = 90;
    
    srand (time(NULL));

    if (rand() % 2)
    {
        ball.dx *= -1;
        ball.dy *= -1;
    }

    
}

//--------------------------------------------------------------
void testApp::update(){

    counter ++;
    if (counter >= 60)
        {
            ball.move();
            if (counter % 501 >= 500)
            {
                ball.speed++;
                padLeft.height -= 2;
                padRight.height -= 2;
            }
            

            
            
            // bounce top/bottom of field
            if (ball.y < 0 || ball.y > height)
                {
                ball.dy *= -1;
                wall.play();
                }
    
            // bounce pads
            if (ball.x <= 10 + ball.radius && (ball.y > padLeft.pos - padLeft.height / 2 && ball.y < padLeft.pos + padLeft.height / 2))
            {
                ball.dx *= -1;
                pong.play();
            }
    
            if (ball.x >= width - 10 - ball.radius && (ball.y > padRight.pos - padRight.height / 2 && ball.y < padRight.pos + padRight.height / 2))
            {
                ball.dx *= -1;
                ping.play();
            }
    
            // score
            if (wallLeft.isOver(ball.x))
            { // player 2 scores
                score2++;
                applause.play();
                resetBoard();
            }
            else if (wallRight.isOver(ball.x))
            {
                // player 1 scores
                score1++;
                applause.play();
                resetBoard();
            }
        }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofFill();
    ofSetColor(255, 255, 255);
    ofRect(10 - padLeft.width / 2, padLeft.pos - padLeft.height / 2, padLeft.width, padLeft.height);
    
    ofRect(width - 10 - padRight.width / 2, padRight.pos - padRight.height / 2, padRight.width, padRight.height);
    ofCircle(ball.x, ball.y, ball.radius);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == 'w')
        // player 1 up
        padLeft.up();
            if( padLeft.pos <= 0)
            {
                padLeft.pos = 0;
            }
    if (key == 's')
        // player 1 down
        padLeft.down();
            if( padLeft.pos >= height)
            {
                padLeft.pos = height;
            }

    if (key == OF_KEY_UP)
        // player 2 up
        padRight.up();
            if( padRight.pos <= 0)
            {
                padRight.pos = 0;
            }
    
    if (key == OF_KEY_DOWN)
        // player 2 down
          padRight.down();
            if( padRight.pos >= height)
            {
                padRight.pos = height;
            }
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
