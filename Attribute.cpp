#include "Attribute.h"
Attribute::Attribute(string t, vector<vector<string> > bA){
	type = t;
	//assign one vector to another;(set basicAttributes);
	for(int i=0; i< bA.size(); i++){
		basicAttributes.push_back(bA[i]);
	}
}
void Attribute::setType(string t){
	type = t;
}
string Attribute::getType(){
	return type;
}
vector<vector<string> > Attribute::getBasicAttributes(){
	return basicAttributes;
}
void Attribute::setAttributeValue(string attName, string newValue){
	int isExist = 0;
	for(int i = 0; i<basicAttributes.size();i++){
		if(basicAttributes[i][0] == attName){
			isExist = 1;
			basicAttributes[i][1] = newValue;	
		}
	}
	if(isExist == 0){
		vector<string> temp;
		temp.push_back(attName);
		temp.push_back(newValue);
		basicAttributes.push_back(temp);
	}
}
