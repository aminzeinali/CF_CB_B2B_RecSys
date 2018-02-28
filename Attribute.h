#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Attribute{
private:
	string type;
	vector<vector<string> > basicAttributes;
public:
	Attribute(string t, vector<vector<string> > bA);
	string getType();
	void setType(string t);
	vector<vector<string> > getBasicAttributes();
	void setAttributeValue(string attName, string newValue);
}; 