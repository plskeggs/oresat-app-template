#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include <zephyr/sys/printk.h>

LOG_MODULE_REGISTER(app_template, LOG_LEVEL_DBG);

int main(void)
{
    LOG_INF("Oresat app template starting up on board: %s", CONFIG_BOARD_TARGET);

    printk("Logging from printk\r\n");

    LOG_DBG("Done.");
    return 0;
}


