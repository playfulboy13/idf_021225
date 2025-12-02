#include "main.h"

const char* TAG="NBN_KIT";

void app_main(void)
{
    nvs_flash_init();
    wifi_init_config();
    
    xTaskCreate(Task1,"Task1",4096,NULL,1,NULL);
}