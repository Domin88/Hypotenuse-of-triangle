#include <iostream>
#include <cmath>


double f(double x, double y) {

	

	if (x == 0 || y == 0)
		std::cout << "Error:: you write wrong number" << std::endl;
	else
		return pow(x,2) + pow(y,2);

}

int main() {

	double x, y;

	std::cout << "Please enter 1st side of triangle : \n" << std::endl;
	std::cin >> x;

	std::cout << "Please enter 2nd side of triangle : \n" << std::endl;
	std::cin >> y;

	std::cout <<"Hypotenuse of triangle equal to "<< sqrt(f(x, y)) << std::endl;

	return 0;
	



}
