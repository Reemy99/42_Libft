***** atoi *****
int	main(void)
{
	char	x[] = " 	123b123hg";
	int		z;
	z = ft_atoi(x);
	printf("the result is:%d", z);
	return (0);
}

***** bzero *****
int main (void)
{
	char s[10] = "abcd";
	printf("Befor: %s\n", s);
	ft_bezero(s, 10);
	printf("After: %c\n", s[9]);
	return(0);
}

***** ft_itoa *****
int main()
{
	char *result;
	int nb;

	nb = 123999999;
	result = ft_itoa(nb);
	printf("%d : %s\n", nb, result);
	return(0);
}

*****ft_strmapi*****
 int main()
 {
	 char str1[] = "abc";
	 char* str2;
	 str2 = ft_strmapi(str1, *f);
	 printf("%s\n", str2);
	 return(0);
 }

***** ft_strtrim *****
int main(void)
{
	char str1[] = "aaa     ";
	char set[] = " ";

	printf("THE RESULT IS:%s\n",ft_strtrim(str1, set));
	return(0);
}

***** ft_split *****
int main(void)
{
	int i = 0;
	char str1[]= "This is my string";
	char c = ' ';
	char **ptr = ft_split(str1, c);
	while (i < 4)
	{
		printf("word num %d:%s\n", i, ptr[i]);
		i++;
	}
	return (0);
}



