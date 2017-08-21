#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofSetLineWidth(1);
	ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	this->cam.begin();

	for (int i = 1; i <= 10; i++) {
		ofSetColor(0, 255, 0, i * 25);
		ofBeginShape();
		for (int deg = 0; deg < 360; deg += 1) {
			float x = 300 * cos(deg * DEG_TO_RAD);
			float y = 300 * sin(deg * DEG_TO_RAD);

			float noise_value = ofNoise(x * 0.005, y * 0.005, (ofGetFrameNum() + i * 5) * 0.005);
			noise_value = ofMap(noise_value, 0, 1, 0.25, 1.2);

			float x2 = (300 * noise_value) * cos(deg * DEG_TO_RAD);
			float y2 = (300 * noise_value) * sin(deg * DEG_TO_RAD);

			ofVertex(x2, y2);
		}
		ofEndShape(true);
	}

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
