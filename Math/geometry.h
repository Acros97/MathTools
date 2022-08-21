#pragma once
 class geometry
{
	double base;
	double height;

public:void set_values(int pBase, int pHeight) {
		base = pBase;
		height = pHeight;
	
	}


public:double CalculateTriangleArea() {
	return (base * height) / 2;

}

public: double CalculateRectangleArea() {
	return base * height;
}



};

