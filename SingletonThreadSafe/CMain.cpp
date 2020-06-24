
#include <iostream>
#include "CSingleton.h"

using std::cout;
using std::endl;

void main()
{
	CSingleton* pInst = CSingleton::getInstance();

	cout << "pInst : " << pInst << endl;
}