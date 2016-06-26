/* If this struct is between 33 and 40 bits in size, we get DW_DLE_ATTR_FORM_BAD */
typedef	struct {
	unsigned int csts_rdy:7;
	unsigned int csts_cfs:32;
} __attribute__((__packed__)) nvme_reg_csts_t;

int _init(void) {
	nvme_reg_csts_t csts;
}
