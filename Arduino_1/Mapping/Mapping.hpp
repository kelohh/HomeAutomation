/**
 * @file Mapping.h
 * @author Grzegorz Krajewski
 *
 * Mappings.
 *
 * @license GPL V2
 */

#pragma once

#include <OneButton.h>
#include "../CustomSensor/CustomSensor.hpp"

namespace Relay {
  const uint8_t OFF  = 0;
  const uint8_t ON   = 1;
  const uint8_t FLIP = 2;
}

// Child ID declaration of relays
const uint8_t SALOON_1_ID       = 1;
const uint8_t SALOON_2_ID       = 2;
const uint8_t SALOON_3_ID       = 3;
const uint8_t SALOON_4_ID       = 4;
const uint8_t KITCHEN_UP_1_ID   = 5;
const uint8_t KITCHEN_UP_2_ID   = 6;
const uint8_t KITCHEN_SIDE_1_ID = 7;
const uint8_t KITCHEN_SIDE_2_ID = 8;
const uint8_t STORAGE_ID        = 9;
const uint8_t ENTRANCE_ID       = 10;
const uint8_t TOILET_UP_ID      = 11;
const uint8_t TOILET_MIRROR_ID  = 12;
const uint8_t OFFICE_1_ID       = 13;
const uint8_t OFFICE_2_ID       = 14;
const uint8_t TECH_ROOM_UP_ID   = 15;
const uint8_t TECH_ROOM_RACK_ID = 16;
const uint8_t KIDS_1_1_ID       = 17;
const uint8_t KIDS_1_2_ID       = 18;
const uint8_t KIDS_2_1_ID       = 19;
const uint8_t KIDS_2_2_ID       = 20;
const uint8_t GUESTS_1_ID       = 21;
const uint8_t GUESTS_2_ID       = 22;

// Vector contaning child ID, description, output pin
std::vector<CustomSensor> customSensors = std::vector<CustomSensor>() = {
  { CustomSensor(SALOON_1_ID,       "Salon S1",         23) },
  { CustomSensor(SALOON_2_ID,       "Salon S2",         25) },
  { CustomSensor(SALOON_3_ID,       "Salon jadalnia 1", 27) },
  { CustomSensor(SALOON_4_ID,       "Salon jadalnia 2", 29) },
  { CustomSensor(KITCHEN_UP_1_ID,   "Kuchnia gora 1",   31) },
  { CustomSensor(KITCHEN_UP_2_ID,   "Kuchnia gora 2",   33) },
  { CustomSensor(KITCHEN_SIDE_1_ID, "Kuchnia boczne 1", 35) },
  { CustomSensor(KITCHEN_SIDE_2_ID, "Kuchnia boczne 2", 37) },
  { CustomSensor(STORAGE_ID,        "Spizarnia",        39) },
  { CustomSensor(ENTRANCE_ID,       "Wiatrolap",        41) },
  { CustomSensor(TOILET_UP_ID,      "WC gora",          43) },
  { CustomSensor(TOILET_MIRROR_ID,  "WC lustro",        45) },
  { CustomSensor(OFFICE_1_ID,       "Gabinet 1",        47) },
  { CustomSensor(OFFICE_2_ID,       "Gabinet 2",        49) },
  { CustomSensor(TECH_ROOM_UP_ID,   "Pom. Tech gora",   51) },
  { CustomSensor(TECH_ROOM_RACK_ID, "Pom. Tech szafa",  53) },
  { CustomSensor(KIDS_1_1_ID,       "Dzieci 1-1",       54) },
  { CustomSensor(KIDS_1_2_ID,       "Dzieci 1-2",       55) },
  { CustomSensor(KIDS_2_1_ID,       "Dzieci 2-1",       56) },
  { CustomSensor(KIDS_2_2_ID,       "Dzieci 2-2",       57) },
  { CustomSensor(GUESTS_1_ID,       "Goscinny 1",       58) },
  { CustomSensor(GUESTS_2_ID,       "Goscinny 2",       59) },
};

// Pushbuttons declaration
// Remember that names should be consistent with main loop in gateway.ino
OneButton salon1(22, true);
OneButton salon2(24, true);
OneButton salon3(26, true);
OneButton salon4(28, true);
OneButton kuchniaSufit1(30, true);
OneButton kuchniaSufit2(32, true);
OneButton kuchniaBok1(34, true);
OneButton kuchniaBok2(36, true);
OneButton spizarnia(38, true);
OneButton wiatrolap(40, true);
OneButton wcSufit(42, true);
OneButton wcLustro(44, true);
OneButton gabinet1(46, true);
OneButton gabinet2(48, true);
OneButton pomTechSufit(50, true);
OneButton pomTechSzafa(52, true);
OneButton dzieci11(4, true);
OneButton dzieci12(5, true);
OneButton dzieci21(6, true);
OneButton dzieci22(7, true);
OneButton goscinny1(8, true);
OneButton goscinny2(9, true);
OneButton wiatrolap2(10, true);