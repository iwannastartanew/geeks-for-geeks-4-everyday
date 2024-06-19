#include <cmath>
class Solution {
public:
    double length(double perimeter, double area) {
        //derived formula
        double l = (perimeter - std::sqrt((perimeter * perimeter) - (24 * area))) / 12;
        return l;
    }
    //compute the maximum volume V
    double maxVolume(double perimeter, double area) {
        //for optimal length l directly
        double l = (perimeter - std::sqrt((perimeter * perimeter) - (24 * area))) / 12;
        //for the volume using the computed length l
        double volume = ((perimeter * l * l) - (8 * l * l * l)) / 4;
        return volume;
    }
};
