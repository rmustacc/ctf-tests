/*
 * Simulate the conversion failure from lib/libc/port/gen/time_data.c
 */

const int __mon_lengths[2][12] = { };

const int __year_lengths[2] = { 365, 366 };
const int __yday_to_month[12] = {0, 31, 59, 90, 120, 151, 181, 212,
	243, 273, 304, 334};
const int __lyday_to_month[12] = {0, 31, 60, 91, 121, 152, 182, 213,
	244, 274, 305, 335};
