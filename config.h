#define CONFIG_SERIAL_BAUD 115200
#define CONFIG_SEND_INTERVAL 60000
#define CONFIG_LOGO_DELAY 5000
#define CONFIG_BUTTON_PIN 38
#define CONFIG_LED_OFF 1
#define CONFIG_I2C_SDA 21
#define CONFIG_I2C_SCL 22
#define CONFIG_AXP192_ADDR 0x34
#define CONFIG_SPS30_ADDR 0x69
#define CONFIG_BME680_ADAFRUIT 1
#define CONFIG_HAS_SEN0170 1
#define CONFIG_HAS_LPPYRA03AV 1
#define CONFIG_DCDC1_DEVICE "BME680"
#define CONFIG_PMU_IRQ 35
#define CONFIG_MAX_PAYLOAD 200
#define CONFIG_CHAN_BME680_TEMP 1
#define CONFIG_CHAN_BME680_AVGTEMP 2
#define CONFIG_CHAN_BME680_PRESS 3
#define CONFIG_CHAN_BME680_GAS 4
#define CONFIG_CHAN_BME680_HUM 5
#define CONFIG_CHAN_BME680_ALT 6
#define CONFIG_CHAN_SEN0170_WIND 7
#define CONFIG_CHAN_LPPYRA03AV_IRRAD 8
#define CONFIG_CHAN_SPS30_PM1Ugm3 9
#define CONFIG_CHAN_SPS30_PM2Ugm3 10
#define CONFIG_CHAN_SPS30_PM4Ugm3 11
#define CONFIG_CHAN_SPS30_PM10Ugm3 12
#define CONFIG_CHAN_SPS30_PM0Particlem3 13
#define CONFIG_CHAN_SPS30_PM1Particlem3 14
#define CONFIG_CHAN_SPS30_PM2Particlem3 15
#define CONFIG_CHAN_SPS30_PM4Particlem3 16
#define CONFIG_CHAN_SPS30_PM10Particlem3 17
#define CONFIG_CHAN_SPS30_PMAverageUm 18
#define CONFIG_CHAN_GPS 19
#define CONFIG_GPS_SERIAL_NUM 1
#define CONFIG_GPS_BAUDRATE 9600
#define CONFIG_GPS_RX_PIN 34
#define CONFIG_GPS_TX_PIN 12
#define CONFIG_GPS_WAIT_FOR_LOCK 10000000
#define CONFIG_SCK_GPIO 5
#define CONFIG_MISO_GPIO 19
#define CONFIG_MOSI_GPIO 27
#define CONFIG_NSS_GPIO 18
#define CONFIG_RESET_GPIO 14
#define CONFIG_DIO0_GPIO 26
#define CONFIG_DIO1_GPIO 33
#define CONFIG_DIO2_GPIO 32
#define CONFIG_LORAWAN_PORT 10
#define CONFIG_LORA_SPREADING_FACTOR 5
#define CONFIG_LORA_TX_POW 14
#define CONFIG_LORA_ADR 1
#define CONFIG_SPS30_CLEAN_NOW 1
#define CONFIG_SEN0170_PIN 0
#define CONFIG_LPPYRA03AV_PIN 36
#define CONFIG_BME680_TEMP_MV_AVG 5
#define CONFIG_SEALEVELPRESSURE_HPA 1013
#define CONFIG_BME680_ADDR1 0x76
#define CONFIG_BME680_ADDR2 0x77
