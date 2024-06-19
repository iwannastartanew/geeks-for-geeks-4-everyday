class Solution {
public:
    double maxVolume(double perimeter, double area) {
        double a = 4; //coefficient of x^2 in the expanded quadratic equation
        double b = -perimeter; //coefficient of x in the expanded quadratic equation
        double c = 4 * area; //constant term in the expanded quadratic equation
        
        //quadratic formula to find x
        double x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        
        //calculate y and z based on x
        double y = (perimeter / 4) - x;
        double z = perimeter / 2;
        
        //calculate the volume
        double volume = x * y * (z - 2 * x);
        
        return volume;
    }
};
