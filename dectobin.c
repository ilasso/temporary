/**
 * binario - function that convert a decimal to bin
 * @num: decimal number
 * Return: int number decimal
 * On error, return 0
 */
int binario(int num)
{

	if (num <= 2)
		return (num);
	else
		return ((num % 2) + (10 * binario(num / 2)));
}
