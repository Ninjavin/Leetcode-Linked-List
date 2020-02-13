// We have a list of points on the plane.  Find the K closest points to the origin (0, 0).
// Approach: We are creating a vector of pairs which stores the Euclidean distance of points and the index of it in pairs. We sort this vector. We create a vector of vectors which is the return type of the given function, and iterate through the number of points we need to return i.e K. Using the indexes in the vector of pairs, we move to the given points vector and store result in resultant result vector. 
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> my_pair;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<my_pair> dac(points.size());
        for(int i=0 ; i<points.size() ; i++){
            dac[i] = my_pair{(points[i][0]*points[i][0])+(points[i][1]*points[i][1]) ,i};
        }
        vector<vector<int>> result(K);
        sort(dac.begin(), dac.end());
        for(int i=0 ; i<K ; i++){
            result[i] = points[dac[i].second];
        }
        return result;
    }
};