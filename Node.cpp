#include "Node.h"

Node::Node(int id, int pId, Attribute a,double wei, int numDeg, vector<vector<double> > prefValue ) :feature(a.getType(), a.getBasicAttributes() ){
	nodeId = id;
	parentId = pId;
	weight = wei;
	numericDegree = numDeg;
	//assign one vector to another;(set preferenceValue);
	for(int i=0; i<prefValue.size();i++){
		preferenceValue.push_back(prefValue[i]);
	}
}