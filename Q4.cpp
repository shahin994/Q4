#include <iostream>
#include <cmath>

struct Point3D {
    double x;
    double y;
    double z;
};

double calculateDistance(Point3D p1, Point3D p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

void checkPlane(Point3D p1, Point3D p2) {
    if (p1.z == p2.z) {
        std::cout << "The two points are in the same plane." << std::endl;
        std::cout << "Z value of the plane: " << p1.z << std::endl;
    } else {
        std::cout << "The two points are not in the same plane." << std::endl;
    }
}

int main() {
    Point3D point1, point2;

    std::cout << "Enter coordinates of Point 1 (x y z): ";
    std::cin >> point1.x >> point1.y >> point1.z;

    std::cout << "Enter coordinates of Point 2 (x y z): ";
    std::cin >> point2.x >> point2.y >> point2.z;

    std::cout << "Point 1: (" << point1.x << ", " << point1.y << ", " << point1.z << ")" << std::endl;
    std::cout << "Point 2: (" << point2.x << ", " << point2.y << ", " << point2.z << ")" << std::endl;

    double distance = calculateDistance(point1, point2);
    std::cout << "Distance between the two points: " << distance << std::endl;

    checkPlane(point1, point2);

    return 0;
}