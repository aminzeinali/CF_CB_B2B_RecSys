#include <iostream>
#include "preferenceTree.h"
using namespace std;

int main(){
	vector<vector<string> > features;
	string s1 = "featureName";
	string s2 = "featureValue";
	vector<string> temp;
	temp.push_back(s1);
	temp.push_back(s2);
	features.push_back(temp);
	Attribute a = Attribute("complexAttribute", features);
	vector<vector<string> > test2 = a.getBasicAttributes();
	
	for(int i=0; i<test2.size();i++){
		for(int j=0; j<test2[i].size(); j++){
			cout<<test2[i][j]<<endl;
			cout<<i<<endl<<j<<endl;
		}
	}
	vector<double> r;
	r.push_back(1);
	r.push_back(0.65);
	vector<vector<double> > prefVal;
	prefVal.push_back(r);
	Node n(1,3,a,1.599,12,prefVal);
	Node n1(9,41,a,1.599,12,prefVal);
	vector<Node> vecNodes;
	vecNodes.push_back(n);
	vecNodes.push_back(n1);
	Item i(1, "TV", vecNodes);

	cout<< i.nodes[1].parentId<<endl;
	preferenceTree p1(1,"Amin", vecNodes);
	cout<< p1.nodes[0].parentId<<endl;
	// cout<<"our node constructed with these element values:"<<endl;
	// cout<<n.nodeId<<endl<<n.parentId<<endl<<n.numericDegree<<endl<<n.weight<<endl;
	// cout<<n.preferenceValue[0][0]<<endl<<n.preferenceValue[0][1]<<endl;
}