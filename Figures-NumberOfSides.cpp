#include <iostream>
#include <string>
#include <Windows.h>

class Figure
{
	protected:
		std::string name;
		unsigned int sides_count;

	public:
		std::string get_name()
		{
			return name;
		}

		int get_sides_count()
		{
			return sides_count;
		}

		Figure() : name("Фигура"), sides_count(0) {}
};
	
class Triangle : public Figure
{
	public:
		Triangle() : Figure()
		{
			name = "Треугольник";
			sides_count = 3;
		}
};

class Quadrangle : public Figure
{
	public:
		Quadrangle() : Figure()
		{
			name = "Четырёхугольник";
			sides_count = 4;
		}
};
/*
inline void print_info_link(Figure &objClass)
{
	std::cout << objClass.get_name() << ": " << objClass.get_sides_count() << std::endl;
}

inline void print_info_pointer(Figure *objClass)
{
	std::cout << objClass->get_name() << ": " << objClass->get_sides_count() << std::endl;
}
*/
int main() // Задача 1. Фигуры. Количество сторон
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
    
	Figure* unkFigure = new Figure;
	Triangle* triangle = new Triangle;
	Quadrangle* quadrangle = new Quadrangle;

	std::cout << unkFigure->get_name() << ": " << unkFigure->get_sides_count() << std::endl;
	std::cout << triangle->get_name() << ": " << triangle->get_sides_count() << std::endl;
	std::cout << quadrangle->get_name() << ": " << quadrangle->get_sides_count() << std::endl;
/*
	print_info_link(*unkFigure);
	print_info_link(*triangle);
	print_info_link(*quadrangle);

	print_info_pointer(unkFigure);
	print_info_pointer(triangle);
	print_info_pointer(quadrangle);
*/
	delete quadrangle;
	delete triangle;
	delete unkFigure;
}
