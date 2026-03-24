#include <iostream>
#include <string>

class Figure {
public:
	Figure() {};
	std::string getName() const { return name; }
	int getSides() const { return amountSides; }
	virtual ~Figure() {};
protected:
	Figure(int amountSides,std::string name): 
		amountSides (amountSides),
		name (name)
	{};
private:
	int amountSides{0};
	std::string name{"Фигура"};
};

class Triangle : 
	public Figure {
public:
	Triangle() : 
		Figure(3,"Треугольник") 
	{};
	
};

class Quadrangle :
	public Figure{
public:
	Quadrangle() : 
		Figure(4,"Четырёхугольник")
	{};

};

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	Figure f;
	Triangle t;
	Quadrangle q;
	std::cout << "Количество сторон:\n"
		<< f.getName() << ": " << f.getSides() << "\n"
		<< t.getName() << ": " << t.getSides() << "\n"
		<< q.getName() << ": " << q.getSides() << "\n";

	return EXIT_SUCCESS;
}