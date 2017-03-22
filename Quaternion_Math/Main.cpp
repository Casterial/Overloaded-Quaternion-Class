#include "Quaternion.h"

Quaternion qua;
int main()
{
	std::cout << "Quaternion Class Testing....\n";

	std::cout << "Ctor...testing\n";
	float vect[4] = { 1, 2, 5, 3 };
	float v[3] = { 1.1, 2.3, 0.5 };


	Quaternion q1;
	Quaternion q2{ 1.0f, 2.0f, 3.0f, 4.0f };
	Quaternion q3(q2);
	Quaternion q4(vect);
	Quaternion q7(4.0f, 1.0f, -2.0f, 2.0f);
	Quaternion q8(2.0f, -1.0f, 4.0f, -3.0f);
	Quaternion q9(2.0f, 1.0f, -2.0f, 2.0f);
	Quaternion q16(0.0f, 2.1f, 2.34f, 9.32f);
	
	std::cout << "Quaternions loading: \n";
	std::cout << "q1= " << q1 << std::endl;
	std::cout << "q2= " << q2 << std::endl;
	std::cout << "q3= " << q3 << std::endl;
	std::cout << "q4= " << q4 << std::endl;

	std::cout << "Operators: \n";
	std::cout << "Operator = \n";
	Quaternion q5 = q2;
	std::cout << "q5 = " << q5 << std::endl;
	
	std::cout << "Operator + \n";
	Quaternion q6 = q5 + q4;
	std::cout << "q5 + q4 = " << q6 << std::endl;

	std::cout << "Operator - \n";
	Quaternion q11 = q5 - q4;
	std::cout << "q5 - q4 = " << q11 << std::endl;
	

	std::cout << "Operator * \n";
	q6 = q7 * q8;
	std::cout << "q7 * q8 = " << q6 << std::endl;

	return 0;

}