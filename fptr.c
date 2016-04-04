typedef int (foo_t)(void *, const char *);

typedef void (*bar_t)(void *, ...);

typedef void (baz_t)(void);

int
mumble(foo_t *a, bar_t b)
{
	return ((int)a - (int)b);
}
