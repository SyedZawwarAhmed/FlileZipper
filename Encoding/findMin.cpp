#include <limits>

int findMin(Character *frequenciesArray)
{
    int minimumFrequency = std::numeric_limits<int>::max();
    int index;
    for (int i = 0; i<256; i++) {
        if (frequenciesArray[i].frequency < minimumFrequency && frequenciesArray[i].frequency > 0) {
            minimumFrequency = frequenciesArray[i].frequency;
        }
    }
    return minimumFrequency;
}
