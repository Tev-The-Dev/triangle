/*
Tevyn Payne
COP 3330 Section 7

Homework 1

This is a class called triangle that is meant to help with practicing our first instance of creating 
an object class

This class should create an equilateral triangle with a base minimum of 1
having a border character and a fill character

Prints the triangle to the screen with the appropriate dimensions 

 */


class Triangle
{
	public:

	Triangle(int, char b = '#', char f = '*');
	int GetSize();
	int Perimeter();
	double Area();
	
	void Grow();
	void Shrink();

	void SetBorder(char);
	void SetFill(char);

	void Draw();

	void Summary();

	
	private:
	int size, perimeter;
	double area;
	char border, fill;



};
