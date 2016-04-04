struct s {
	int s_int;
};

void
foo(void)
{
}

int
bar(void)
{
	return (42);
}

int
baz(int a, float b, long c)
{
	return (a + (int)b + c);
}

int
var(int a, ...)
{
	return (a);
}

struct s *
mumble(struct s *s)
{
	return (s);
}
