#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

// USB descriptor (boleh dibiarkan sama seperti default ESP32-S3)
#define USB_VID 0x303a
#define USB_PID 0x1001

// ====== UART0 via USB-C ======
static const uint8_t TX = 43;   // GPIO43: U0TXD
static const uint8_t RX = 44;   // GPIO44: U0RXD

// ====== I2C bebas (SDA/SCL) ======
static const uint8_t SDA = 8;   // Sesuaikan kalau kamu pakai I2C fisik lain
static const uint8_t SCL = 9;

// ====== SPI utama (bisa untuk TFT) ======
static const uint8_t SS   = 21; // Default CS
static const uint8_t MOSI = 11;
static const uint8_t MISO = 13;
static const uint8_t SCK  = 12;

// ====== SD Card via HSPI (dari build_flags) ======
#define SDSPI_CLK   17   // SCK SD
#define SDSPI_MOSI  16   // MOSI SD
#define SDSPI_MISO  13   // MISO SD (shared)
#define SDSPI_CS    15   // CS SD
#define SD_ID       HSPI // sesuai -DSD_ID=HSPI

// ====== Backlight TFT (dari build_flags) ======
#define TFT_BACKLIGHT_ON HIGH
#define TFT_BL           7      // pilih GPIO yang kamu pakai untuk BL fisik

// Kalau kamu punya pin spesifik LCD, bisa tambah di sini:
// #define LCD_CS   10
// #define LCD_DC    8
// #define LCD_RST   9

// ====== (Opsional) mapping analog A0..A19 ke GPIO berurutan ======
static const uint8_t A0  = 1;
static const uint8_t A1  = 2;
static const uint8_t A2  = 3;
static const uint8_t A3  = 4;
static const uint8_t A4  = 5;
static const uint8_t A5  = 6;
static const uint8_t A6  = 7;
static const uint8_t A7  = 8;
static const uint8_t A8  = 9;
static const uint8_t A9  = 10;
static const uint8_t A10 = 11;
static const uint8_t A11 = 12;
static const uint8_t A12 = 13;
static const uint8_t A13 = 14;
static const uint8_t A14 = 15;
static const uint8_t A15 = 16;
static const uint8_t A16 = 17;
static const uint8_t A17 = 18;
static const uint8_t A18 = 19;
static const uint8_t A19 = 20;

#endif /* Pins_Arduino_h */
