#pragma once


class Ball
{
public:
	double radiuse;
	double SquareBallRadiuse(double a)
	{
		return 4 * 3.14 * (a * a);
	}
	double SquareBallDiameter(double a)
	{
		return 3.14 * (a * a);
	}
	double VolumeBallRadiuse(double a)
	{
		return (4 / 3 * 3.14 * (a * a * a));
	}
	double VolumeBallDiameter(double a)
	{
		return 3.14 / 6 * (a * a * a);
	}
};

class Ñylinder 
{
public:
	double radiuse;
	double height;
	double SquareÑylinderRadiuse(double a, double b)
	{
		return 2 * 3.14 * a * (a + b);
	}
	double VolumeÑylinderRadiuse(double a, double b)
	{
		return 3.14 * a * a * b;
	}
};

class Tor
{
public:
	double Radiuse;
	double radiuse;
	double SquareTor(double a, double b)
	{
		return 4 * 3.14 * 3.14 * (a * b);
	}
	double VolumeTor(double a, double b) // a > b, a and b - radiuses
	{
		return 2 * 3.14 * 3.14 * (a * b * b);
	}
};

class Cone
{
public:
	double radiuse;
	double height;
	double SquareCone(double a, double b) // a - radiuse, b - height
	{
		return 3.14 * a * (a + b);
	}
	double VolumeCone(double a, double b) // a - radiuse, b - height
	{
		return 3.14 / 3 * a * (a * b);
	}
};

