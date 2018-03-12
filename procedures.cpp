#include "procedures.h"
double conseptualSimilarity(Attribute a0, Attribute a1){
	double similarity = -1;
	//body
	return similarity;
}
vector<vector<Node> > conceptualSimilarityMatchingMappedNodes(preferenceTree pt, Item i, string mode, double threshold){
	vector<vector<Node> > mappedNodesSet;
	string situation = "-1";
	if(conseptualSimilarity(pt.nodes[0].feature, i.nodes[0].feature) >= threshold){
		situation = 1;
	}
	else if (true/* condition */)
	{
		situation = 2;
	}
	else if (true/* condition */)
	{
		situation = 3;
	}
	return mappedNodesSet;
}