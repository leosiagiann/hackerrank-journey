#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
public:
    int height;
    int width;

public:
    void display()
    {
        cout << width << " " << height << endl;
    }
};
class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        int w, h;
        cin >> w >> h;
        height = h;
        width = w;
    }

public:
    void display()
    {
        cout << (height * width) << endl;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}