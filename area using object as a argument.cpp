#include <iostream>

using namespace std;

class Rectangle
{
     int l,b;
      
	public:
		int length;
		int breadth;
		Rectangle() // constructor//
		{
			length = l;
			breadth = b;
		}
		int printArea()
		{
			return length * breadth;
		}
};

int main()
{
	Rectangle rt1( 7, 4 );
	Rectangle rt2( 4, 5 );
	cout << "Area of first rectangle " << rt1.printArea() << endl;
	cout << "Area of second rectangle " << rt2.printArea() << endl;
	return 0;
}