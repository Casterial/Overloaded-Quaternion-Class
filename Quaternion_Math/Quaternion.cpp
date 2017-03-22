#include "Quaternion.h"


//def ctor
Quaternion::Quaternion(void)
{
	w, i, j, k = 0;
}

//argument ctor
Quaternion::Quaternion(float wi, float ii, float ji, float ki)
{
	w = wi;
	i = ii;
	j = ji;
	k = ki;
}

//ctor array/vector
Quaternion::Quaternion(float v[4])
{
	w = v[0];
	i = v[1];
	j = v[2];
	k = v[3];
}

//copy ctor
Quaternion::Quaternion(const Quaternion& q)
{
	w = q.w;
	i = q.i;
	j = q.j;
	k = q.k;
}

//dtor
Quaternion::~Quaternion()
{
	
}

//operator =
Quaternion& Quaternion::operator = (const Quaternion& q)
{
	w = q.w;
	i = q.i;
	j = q.j;
	k = q.k;

	return (*this);
}

//operator +
Quaternion& Quaternion::operator + (const Quaternion& q)
{
	return Quaternion(w + q.w, i + q.i, j + q.j, k + q.k);
}

//operator -
Quaternion& Quaternion::operator - (const Quaternion& q)
{
	return Quaternion(w - q.w, i - q.i, j - q.j, k - q.k);
}

//operator *
Quaternion& Quaternion::operator * (const Quaternion& q)
{
	return Quaternion(
		w*q.w - i*q.i - j*q.j - k*q.k,
		w*q.i + i*q.w + j*q.k - k*q.j,
		w*q.j - i*q.k + j*q.w + k*q.w,
		w*q.k + i*q.j - j*q.i + k*q.w
	);
}
