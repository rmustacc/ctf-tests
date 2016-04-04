#if 0
struct sigact {
	int sa_flags;
	union {
		void (*handler)();
		void (*sigact)(int, void *, void *);
	} _funcptr;
};

struct sigact foo;
#endif

void (*handler)();
