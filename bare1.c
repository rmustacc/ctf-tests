/*
 * See if we emit the same things when using bare types.
 */

struct a {
	int a;
};

typedef struct b {
	int b;
} b_t;

enum c {
	C = 0
};

typedef enum d {
	D = 0
} d_t;

union e {
	int e;
};

typedef union f {
	int f;
} f_t; 
