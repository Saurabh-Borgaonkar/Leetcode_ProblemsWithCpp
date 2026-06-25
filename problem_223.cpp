#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;

    cout << "Enter Rectangle A coordinates (ax1 ay1 ax2 ay2): ";
    cin >> ax1 >> ay1 >> ax2 >> ay2;

    cout << "Enter Rectangle B coordinates (bx1 by1 bx2 by2): ";
    cin >> bx1 >> by1 >> bx2 >> by2;

    // Area of Rectangle A
    int A1 = (ax2 - ax1) * (ay2 - ay1);

    // Area of Rectangle B
    int A2 = (bx2 - bx1) * (by2 - by1);

    // Calculate overlap dimensions
    int overlapWidth = min(ax2, bx2) - max(ax1, bx1);
    int overlapHeight = min(ay2, by2) - max(ay1, by1);

    // Calculate overlap area
    int overlapArea = 0;
    if (overlapWidth > 0 && overlapHeight > 0) {
        overlapArea = overlapWidth * overlapHeight;
    }

    // Total covered area
    int totalArea = A1 + A2 - overlapArea;

    cout << "\nRectangle A Area = " << A1 << endl;
    cout << "Rectangle B Area = " << A2 << endl;
    cout << "Overlap Area = " << overlapArea << endl;
    cout << "Total Covered Area = " << totalArea << endl;

    return 0;
}