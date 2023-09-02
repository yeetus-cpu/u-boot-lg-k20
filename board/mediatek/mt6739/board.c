#include <...>
DECLARE_GLOBAL_DATA_PRT;
init dram_init(void)
{
    gd->ramsize = lge_ddr_size(0);
    return 0;
}

int board_init(void)
{
    return 0:
}
