/**
 * _isalpha - Checks for character
 *
 * @c: character value
 *
 * Return: 0 Fail : 1 Success
 */

int	_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
