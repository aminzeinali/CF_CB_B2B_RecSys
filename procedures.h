#include "preferenceTree.h"
//requiredFunctions
double conseptualSimilarity(Attribute a0, Attribute a1);

//AFuzzyPreferenceTree-BasedRecommenderSystemforPersonalizedBusiness-to-BusinessE-Services;
//contentBasedApproach(CB);
vector<vector<Node> > conceptualSimilarityMatchingMappedNodes(preferenceTree pt, Item i, string mode);
double conceptualSimilarityMatchingGradeLevel(preferenceTree pt, Item i, string mode, double threshold);
void preferenceTreeUpdateByMergeOperation(preferenceTree &pt, Item i);
double ratePredict(preferenceTree pt, Item i);
//collaborativeFiltering(CF);
vector<Attribute> extractInterestedFeatures(preferenceTree as, vector<preferenceTree> ass);
vector<Item> makePossibleItems(vector<Attribute> attrs);
