
#pragma weak  _strong = strong
#pragma weak _mumble = mumble

int strong = 3;

int
mumble(void)
{
	return (42);
}
