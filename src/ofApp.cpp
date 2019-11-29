#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableAlphaBlending();

    bgColor = ofColor(0, 255);
    blendIndex = 0;
    
    blendModes = {
        OF_BLENDMODE_DISABLED,
        OF_BLENDMODE_ALPHA,
        OF_BLENDMODE_ADD,
        OF_BLENDMODE_SUBTRACT,
        OF_BLENDMODE_MULTIPLY,
        OF_BLENDMODE_SCREEN
    };
    blendModeStrs = {
        "OF_BLENDMODE_DISABLED",
        "OF_BLENDMODE_ALPHA",
        "OF_BLENDMODE_ADD",
        "OF_BLENDMODE_SUBTRACT",
        "OF_BLENDMODE_MULTIPLY",
        "OF_BLENDMODE_SCREEN"
    };
    
    img.load("img.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushStyle();
    ofEnableBlendMode(blendModes[blendIndex]);
    
    ofBackground(bgColor);
    
    img.draw(0, 0);
    
    ofSetColor(100, 0, 0, 200);
    ofDrawRectangle(100, 100, 400, 400);
    
    ofSetColor(0, 100, 0, 200);
    ofDrawRectangle(200, 200, 400, 400);
    
    ofSetColor(0, 0, 100, 200);
    ofDrawRectangle(300, 300, 400, 400);
    
    ofDisableBlendMode();
    ofPopStyle();
    
    int x = 20;
    int y = 20;
    int lineHeight = 20;
    ofDrawBitmapStringHighlight("Press 'Space' key is Change BlendMode.", x, y);
    ofDrawBitmapStringHighlight("Press 'z' key is Change Background color.", x, y += lineHeight);
    ofDrawBitmapStringHighlight(ofToString(blendIndex) + ": " + blendModeStrs[blendIndex], x, y += lineHeight);
    ofDrawBitmapStringHighlight(ofToString(bgColor), x, y += lineHeight);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == ' '){
        blendIndex++;
        if(blendIndex >= blendModes.size()) blendIndex = 0;
    }
    if(key == 'z'){
        if(bgColor.r > 0){
            bgColor = ofColor(0, 255);
        }
        else{
            bgColor = ofColor(255, 255);
        }
    }
    
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
