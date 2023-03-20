/**
 * _isdigit - checks for a digit 0 through 9
 * @c: An input number
 * Description: function _isdigit
 * Return: 1 if c is digit and 0 if otherwise
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
