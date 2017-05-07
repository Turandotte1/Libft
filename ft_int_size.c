int		ft_int_size(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	while (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
