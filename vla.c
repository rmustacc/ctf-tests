struct foo {
	int len;
	int args[1];
};

struct bar {
	int len;
	int args[0];
};

struct baz {
	int len;
	int args[];
};

struct really {
	int gnu[0];
};

struct foo a;
struct bar b;
struct baz c;
struct really d;
