#include "ofApp.h"
#include <random>
#include <vector>

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
	int num1 = 0;
	int num2 = 0;
	int count = 0;
	
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)

random_device rd;

mt19937 gen(rd());
//**NORMAL DISTRIBUTION**
normal_distribution <float> dis1(1000, 15);
normal_distribution <float> dis2(800, 15);


/* 	
	**UNIFORM DISTRIBUTION**
uniform_int_distribution <int> dis1(0, 1200);
uniform_int_distribution <int> dis2(0, 970);
 */

while(count < 20){
	

num1 = dis1(rd);
num2 = dis2(rd);
 cout << "X" << dis1(rd);
 cout << " Y" << dis2(rd) << endl;

X.push_back(num1);
Y.push_back(num2);

count++;
}


/*
random_device randrd;

	mt19937 mt(randrd());
	uniform_int_distribution<int> X (1, 3); 
	uniform_int_distribution<int> Y (3, 9);
	*/
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
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
