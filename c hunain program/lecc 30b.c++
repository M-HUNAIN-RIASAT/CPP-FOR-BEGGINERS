/* PRACTICE AND CHALLENGE QUESTION :
CREATE A FUNCTION THAT TAKE TWO POINT OBJECTS AND COMPUTE THE DISTANCE BETWEEN TWO POINTS(HINT: FRIEND FUNCTION)

*/
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    // Constructor to initialize the point coordinates
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    // Friend function to compute the distance between two points
    friend  distance(const Point p1, const Point p2);
};

// Friend function definition
 distance(const Point M, const Point N) 
{
    int dx = M.x - N.x;
    int dy = M.y - N.y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1(3, 4);
    Point p2(6, 8);

    cout << "The distance between the points is: " << distance(p1, p2) << endl;

    return 0;
}

