struct unpacked {
	char a;
	long b;
};

#pragma pack(1)
struct packed {
	char a;
	long b;
};
#pragma pack()

struct unpacked a;
struct packed b;
