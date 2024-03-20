/*
Tevyn Payne
COP 3330 Section 7
Project #1
This project is our first example of how to build and call classes. Using function calls outside of the class
with 2 different files.

*/

#include <iomanip>
#include <iostream>
#include "triangle.h"
#include <cmath>

using namespace std;


Triangle::Triangle(int s, char b, char f)
{
	if(s <= 1 )
	{
	
	size = 1;
	}

	else if(s >= 39)
	{
		size = 39;
	
	}
	else
	size = s;
	
	if(b < '!' || b > '~')
	{
		border = '#';
	}
	else 
		border = b;
	if(f < 	'!' || f > '~')
	{	
		fill = '*';
	}	
	else 
		fill = f;



}
int Triangle::GetSize()
{
return size;
}

int Triangle::Perimeter()
{
	perimeter = 3 * size;
	return perimeter;
}

double Triangle::Area()
{
	area = (sqrt(3)/4)*pow(size,2);
	return area;
}
void Triangle::Grow()
{
	if(size >= 1 && size < 39)
	size++;

}

void Triangle::Shrink()
{
	if(size > 1 && size <= 39)
	size--;
}

void Triangle::SetBorder(char b)
{
	if(b >= '!' && b <= '~')
		border = b;
}

void Triangle:: SetFill(char f)
{
	if(f >= '!' && f <= '~')
		fill = f;
}

void Triangle::Draw()
{
	for(int i = 0; i <= size; i++)
	{
		for(int j = 0; j <=(size - i); j++)
		{
			cout << " ";	//this prints a space before the triangle
		}
		for(int k = 1; k <= i; k++)
		{
		if(k == i || k == 1) 	//if my k == the first iteration of the first loop or is 0
		cout << border << " ";	//this creates the correct spacingof the triangle
		else if(i == size)
		cout << border << " ";
		else
		cout << fill << " ";

		}
		cout << endl;
	}
}

void Triangle::Summary()
{
cout << "Size of triangle's side = " << size << " units." << endl;
cout << "Perimeter of triangle = "<< perimeter << " units." << endl;
cout << "Area of triangle = " <<fixed << setprecision(2)<< area << " units." << endl;
cout << "Triangle looks like: \n";
Draw();

	
}
