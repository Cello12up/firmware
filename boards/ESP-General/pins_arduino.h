#ifndef Pins_Arduino_h
#define Pins_Arduino_h
#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID 0x303a
#define USB_PID 0x1001

// Tidak ada RGB / LED onboard
// #define PIN_RGB_LED 48
// static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT + PIN_RGB_LED;
// #define RGB_BUILTIN LED_BUILTIN
// #define RGB_BRIGHTNESS 64
// #define PIN_LED 6

// ===== UART0 (USB) =====
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// ===== I2C (bebas pakai) =====
static const uint8_t SDA = 8;
static const uint8_t SCL = 9;

// ===== SPI untuk LCD & TF card =====
static const uint8_t SS   = 21;  // TF card CS
static const uint8_t MOSI = 11;  // LCD/TF MOSI
static const uint8_t MISO = 13;  // TF MISO
static const uint8_t SCK  = 12;  // LCD/TF SCK

// Pin khusus LCD (kalau dipakai di firmware)
#define LCD_CS   10
#define LCD_DC   8
#define LCD_RST  9
#define LCD_BL   7

// ===== Analog (optional mapping) =====
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
