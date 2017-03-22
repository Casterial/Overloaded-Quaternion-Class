#ifndef _QUATERNION_H_
#define _QUATERNION_H_
#include <iostream>

class Quaternion
{
private:
	float w, i, j, k;


public:
	//def ctor
	Quaternion(void);
	//ctor with arguments
	Quaternion(float wi, float ii, float ji, float k);
	//ctor
	Quaternion(float v[4]);
	//copy ctor
	Quaternion(const Quaternion& q);
	//dtor
	~Quaternion();

	//operator assignment =
	Quaternion& operator = (const Quaternion& q);
	//operator overloading
	// +
	Quaternion& operator + (const Quaternion& q);
	// -
	Quaternion& operator - (const Quaternion& q);
	// * 
	Quaternion& operator * (const Quaternion& q);

	//overloading <<
	//friend grants a function or another class access to a private and protected member of a class
	friend std::ostream& operator << (std::ostream& output, const Quaternion& q)
	{
		return(output << "[" << q.w << ", " << "(" << q.i << ", " << q.j << ", " << q.k << ")]");
		return output;
	}
	

};
























#endif