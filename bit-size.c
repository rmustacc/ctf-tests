/*
 * Test that we can generate the right final structure size for the following
 * structure.
 */

typedef unsigned long long uint64_t;
typedef struct system_desc {
        uint64_t ssd_lolimit:16;        /* segment limit 15:0 */
        uint64_t ssd_lobase:16;         /* segment base 15:0 */
        uint64_t ssd_midbase:8;         /* segment base 23:16 */
        uint64_t ssd_type:4;            /* segment type */
        uint64_t ssd_zero1:1;           /* must be zero */
        uint64_t ssd_dpl:2;             /* segment descriptor priority level */
        uint64_t ssd_p:1;               /* segment descriptor present */
        uint64_t ssd_hilimit:4;         /* segment limit 19:16 */
        uint64_t ssd_avl:1;             /* available to sw, but not used */
        uint64_t ssd_resv1:2;           /* unused, ignored */
        uint64_t ssd_gran:1;            /* limit unit (bytes vs pages) */
        uint64_t ssd_hibase:8;          /* segment base 31:24 */
        uint64_t ssd_hi64base:32;       /* segment base 63:32 */
        uint64_t ssd_resv2:8;           /* unused, ignored */
        uint64_t ssd_zero2:5;           /* must be zero */
        uint64_t ssd_resv3:19;          /* unused, ignored */
} system_desc_t;

system_desc_t d;
