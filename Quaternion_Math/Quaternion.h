#ifndef _QUATERNION_H_
#define _QUATERNION_H_
#include <iostream>
/*
***SUMMARY***
*This class allows the functions to be called in .cpp
*every function is created in the .h
*Pragma used in VS to help readability.
*/
class Quaternion
{
private:
	float w, i, j, k;


public:
#pragma region Constructors
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
#pragma endregion Constructors

#pragma region Overloading
	//operator assignment =
	Quaternion& operator = (const Quaternion& q);
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
	// +=
	Quaternion& operator += (const Quaternion& q);
	//-=
	Quaternion& operator -= (const Quaternion& q);
	// *=
	Quaternion& operator *= (const Quaternion& q);
	// /=
	Quaternion& operator /= (const Quaternion& q);
	// !=
	Quaternion& operator != (const Quaternion& q);
	// ==
	Quaternion& operator == (const Quaternion& q);
#pragma endregion Overloading

#pragma region Math
	// norm
	int norm();
	//magnitude
	int magnitude();
	//scale
	Quaternion& scale(float s);
	//inverse
	Quaternion& inverse();
	//conjugate
	Quaternion& conjugate();
	//unit Quaternions
	Quaternion& UnitQuaternion();
#pragma endregion Math

	//Quaternion Rotations
	void QuaterionRotation(float v[3]);
	
};

#endif