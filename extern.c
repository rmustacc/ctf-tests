struct foo;

struct bar {
	struct foo *prev;
	struct foo *next;
	int forward;
};

struct bar a;
