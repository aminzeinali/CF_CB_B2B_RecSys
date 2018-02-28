#include "Attribute.h"
using namespace std;
class Node {
public:
	int nodeId;
	int parentId;
	int numericDegree; // designed for item tree-structured data model;
	double weight;
	Attribute feature;
	vector<vector<double> > preferenceValue;//designed for user's preference tree-structured data model;
	Node(int id, int pId, Attribute a,double wei, int numDeg, vector<vector<double> > prefValue );
};