#include <iostream>
#include <string>

unsigned int numeral_as_int(char c)
{
	if (c == 'I')
		return 1;
	else if (c == 'V')
		return 5;
	else if (c == 'X')
		return 10;
	else if (c == 'L')
		return 50;
	else if (c == 'C')
		return 100;
	else
	{
		std::printf("Incorrect roman numeral given, didn't expect %c", c);
		return 0;
	}

	return 0; //so visual studio will not say anything
}

int main()
{
	std::printf("Convert roman numerals to numbers\n");
	std::printf("This doesn't account for IV and IX and such\n");
	std::printf("Enter a roman numeral: ");

	std::string num;
	std::getline(std::cin, num);

	unsigned int total_value = 0; //uint because roman numerals can't go negative

	for (auto chr : num)
		total_value += numeral_as_int(chr);

	printf("The final value was %u\n", total_value);
	printf("Press a key to exit.");
	std::cin.get();
}
