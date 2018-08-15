#pragma once

#include "ofMain.h"
#include "ofxFaceTracker.h"

#include "ofxOsc.h"

// send host (aka ip address)
#define HOST "localhost"

/// send port
#define PORT 8011

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

	ofVideoGrabber cam;
	ofxFaceTracker tracker;
	ExpressionClassifier classifier;
	ofxOscSender sender;

};
