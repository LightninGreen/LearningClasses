#include <iostream.h>

class CVector {
   public:
	int x, y;
	CVector () {};
	CVector (int a, int b) : x(a), y(b) {}
	CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param) {
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

void main() {
	CVector chump (3,1);
	CVector chumpette (1,2);
	CVector pimpmobile;
	pimpmobile = chump + chumpette;
	cout << pimpmobile.x << "," << pimpmobile.y << endl;
}
