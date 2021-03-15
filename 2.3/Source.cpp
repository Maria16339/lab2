#include "Point.h"

double S;
int main()
{
	Point A(1,1);
	cin >> A;
	cout << "A " << A;

	Point B(2,2);
	cin >> B;
	cout << "B " << B;
	cout << endl;
	
	
	cout << "A " << A;
	cout << "B " << B;
	cout << endl;
	
	cout << "Moving the point x:";
	A.movingThePoint_X();
	cout << endl;
	cout << "Moving the point y:";
	A.movingThePoint_Y();
	cout << endl;
	

	cout << (string)A;
	cout << "++A " << ++A;
	cout << "A-- " << A--;
	cout << A;


}