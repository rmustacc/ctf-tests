typedef struct foo {
	int a;
	char b;
	float c;
} foo_t;

typedef struct bar {
	foo_t fist;
	foo_t second;
} bar_t;

typedef struct list {
	struct list *list_head;
	struct list *list_tail;
	int count;
} list_t;

struct baz;

struct baz_list {
	list_t baz_list;
	struct baz *baz;
};

typedef struct baz {
	double sin;
	double cos;
} baz_t;

typedef struct forward forward_t;

struct forward {
	long count;
};

foo_t a;
bar_t b;
list_t c;
baz_t d;
struct baz_list e;
forward_t g;
