idf_component_register(SRCS "main.c" "user_task.c" "mqtt.c"
INCLUDE_DIRS "."
REQUIRES driver freertos esp_wifi nvs_flash json mqtt
EMBED_TXTFILES "hivemq_root_ca.pem")