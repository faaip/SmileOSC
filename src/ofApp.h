#pragma once

#include "ofMain.h"
#include "ofxFaceTracker.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

	ofVideoGrabber cam;
	ofxFaceTracker tracker;
	ExpressionClassifier classifier;
};
