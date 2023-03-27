#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

        Difference(vector<int> e){
            elements = e;
        }

        void computeDifference(){
            int n = elements.size();
            int maxDiff = 0;

            for (int i = 0; i < n; i++){
                for (int j = i + 1; j < n; j++){
                    int diff = abs(elements[i] - elements[j]);
                    if (diff > maxDiff) {
                        maxDiff = diff;
                    }
                }
            }

            maximumDifference = maxDiff;
        }

        int getMaximumDifference() {
            return maximumDifference;
        }
};
