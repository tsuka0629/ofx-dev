#ifndef _TEST_APP
#define _TEST_APP

#define OF_ADDON_USING_OFXMSAPHYSICS

#include "ofMain.h"
#include "ofAddons.h"

#define	WIDTH		1280
#define HEIGHT		720

class testApp : public ofBaseApp {
	
public:
	
	ofxMSAPhysics physics;
	
	void initScene();
	void addRandomParticle();
	void addRandomSpring();
	
	void setup();
	void update();
	void draw();
	
	void keyPressed  (int key);
	void keyReleased (int key);
	
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased();
};

#endif