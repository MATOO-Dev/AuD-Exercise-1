#include <iostream>

void CollatzConjecture(int startingPoint)
{
	int iterations = 0;
	int currentvalue = startingPoint;
	std::cout << "Calculated values are: " << currentvalue << ", ";
	//keep looping until end is reached
	while (currentvalue > 1)
	{
		//if remainder of current/2 is 0, divide by 2
		if (currentvalue % 2 == 0)
			currentvalue = currentvalue / 2;
		//else multiply by 3, then add one
		else
			currentvalue = (currentvalue * 3) + 1;
		//add current value to console
		std::cout << currentvalue << ", ";
		//increase iteration counter to verify value later
		iterations++;
	}
	std::cout << std::endl << std::endl << "Finished in " << iterations << " iterations" << " for input value " << startingPoint << std::endl << std::endl;
}








int main()
{
	CollatzConjecture(27);
	CollatzConjecture(37);
	CollatzConjecture(42);
	return 0;
}