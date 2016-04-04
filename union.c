union foo {
	int a;
	double b;
	unsigned long long c;
};

struct regs {
	int a:3;
	int b:4;
};

union bar {
	struct regs a;
	int b;
};

typedef union foo foo_t;

struct baz {
	int a;
	union {
		char b;
		double c;
	} d;
};

foo_t a;
foo_t b;
