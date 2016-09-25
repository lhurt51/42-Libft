int		main(void)
{ 
	char a[18] = "wow this	is great";
	char z[18] = "wow this	is great";
	unsigned int i;
	unsigned int j;

	i = ft_strlen(a);
	j = strlen(z);
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');

	const char *test1 = "fuckkkkk";
	char done1[9];
	const char *test2 = "fuckkkkk";
	char done2[9];

	strcpy(done1, test1);
	ft_putstr(done1);
	ft_putchar('\n');
	ft_strcpy(done2, test2);
	ft_putstr(done2);
	ft_putchar('\n');

	const char *test10 = "fuckkkkk";
	char done10[9];
	int count = 2;
	const char *test11 = "fuckkkkk";
	char done11[9];

	strncpy(done10, test10, count);
	ft_putstr(done10);
	ft_putchar('\n');
	ft_strncpy(done11, test11, count);
	ft_putstr(done11);
	ft_putchar('\n');

	const char *test3 = "Hello";
	char *test4;
	const char *test5 = "Hello";
	char *test6;

	test4 = strdup(test3);
	test6 = ft_strdup(test5);
	ft_putstr(test4);
	ft_putchar('\n');
	ft_putstr(test6);
	ft_putchar('\n');

	const char *test12 = "Hello";
	char *test13 = "cool";
	const char *test14 = "Hello";
	char *test15 = "cool";

	strcat(test12, test13);
	ft_strcat(test14, test15);
	ft_putstr(test4);
	ft_putchar('\n');
	ft_putstr(test6);
	ft_putchar('\n');

	memset(a, 'j', 18);
	ft_memset(z, 'j', 21);
	ft_putstr(a);
	ft_putchar('\n');
	ft_putstr(z);
	ft_putchar('\n');

	char t[6] = "Hello";
	char x[6] = "Hello";

	bzero(t, 0);
	ft_bzero(x, 0);
	ft_putstr(t);
	ft_putchar('\n');
	ft_putstr(x);
	ft_putchar('\n');

	char d[6] = "Hello";
	char f[6];
	char h[6] = "Hello";
	char v[6];

	memcpy(f, d, 6);
	ft_memcpy(v, h, 6);
	ft_putstr(f);
	ft_putchar('\n');
	ft_putstr(v);
	ft_putchar('\n');

	return (0);
}

int		main(void)
{
	char j[6] = "Hello";
	char l[6];
	char k[6] = "Hello";
	char c[6];

	ft_memcpy(l, j, 5);
	memcpy(c, k, 5);
	ft_putstr(l);
	ft_putchar('\n');
	ft_putstr(c);
	ft_putchar('\n');

	char p[10] = "123456789";
	char *o = &p[3];
	char i[10] = "123456789";
	char *u = &i[3];

	ft_memmove(o, p, 5);
	memmove(u, i, 5);
	ft_putstr(o);
	ft_putchar('\n');
	ft_putstr(u);
	ft_putchar('\n');

	char r[7] = "ABCDEF";
	char *ret1;
	char y[7] = "ABCDEF";
	char *ret2;

	ret1 = ft_memchr(r, 'D', 5);
	ret2 = memchr(y, 'D', 5);
	ft_putchar(*ret1);
	ft_putchar('\n');
	ft_putchar(*ret2);
	ft_putchar('\n');
	*ret1 = 'F';
	*ret2 = 'F';
	ft_putstr(r);
	ft_putchar('\n');
	ft_putstr(y);
	ft_putchar('\n');

	char m[5] = "this";
	char n[5] = "that";
	char z[5] = "this";
	char x[5] = "that";
	int w;
	int q;

	w = ft_memcmp(m, n, 5);
	q = memcmp(z, x, 5);
	ft_putnbr(w);
	ft_putchar('\n');
	ft_putnbr(q);
	ft_putchar('\n');
}
