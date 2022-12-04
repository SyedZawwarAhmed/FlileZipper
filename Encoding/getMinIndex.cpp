#include <limits>

int getMinIndex(vector<BinarySearchTreeNode*> frequenciesArray) {
    int minimumFrequency = std::numeric_limits<int>::max();
    int index;
    for (int i = 0; i<frequenciesArray.size(); i++) {
        if (frequenciesArray[i]->frequency < minimumFrequency && frequenciesArray[i]->frequency > 0) {
            minimumFrequency = frequenciesArray[i]->frequency;
            index = i;
        }
    }
    return index;
}