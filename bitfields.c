struct foo {
	char start;
	int a:3;
	int b:5;
	char c;
};

#pragma pack(1)
struct bar {
	int a:3;
	int b:5;
	char c;
};
#pragma pack()

struct odd_bits {
	char a:2;
	char b:4;
	char c:2;
	long long d:1;
	long long e:31;
	int f;
};

struct foo a;
struct bar b;
struct odd_bits c;
