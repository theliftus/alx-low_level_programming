/**
 * _isdigit - checks for a digit 0 through 9
 * @c: An input number
 * Description: function _isdigit
 * Return: 1 if c is digit and 0 if otherwise
 */
int _isdigit(int c)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	if (num == c)
	return (1);
	}
	return (0);
}
