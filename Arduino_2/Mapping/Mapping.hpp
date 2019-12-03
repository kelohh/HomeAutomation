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
const uint8_t HALL_1_ID = 23;
const uint8_t HALL_2_ID = 24;
const uint8_t LAZ_UP_1_ID = 25;
const uint8_t LAZ_UP_2_ID = 26;
const uint8_t LAZ_LUSTRO_1_ID = 27;
const uint8_t LAZ_LUSTRO_2_ID = 28;
const uint8_t SYP_UP_1_ID = 29;
const uint8_t SYP_UP_2_ID = 30;
const uint8_t SYP_KINK_1_ID = 31;
const uint8_t SYP_KINK_2_ID = 32;
const uint8_t ZEW_WEJ_ID = 33;
const uint8_t ZEW_TARAS_ID = 34;
const uint8_t PODDASZE_ID = 35;
const uint8_t ZEW_FRONT_SCIANA_ID = 36;
const uint8_t ZEW_FRONT_OGROD_ID = 37;
const uint8_t ZEW_SCIANA_PODJAZD_ID = 38;
const uint8_t ZEW_TYL_SCIANA_ID = 39;


// Vector contaning child ID, description, output pin
std::vector<CustomSensor> customSensors = std::vector<CustomSensor>() = {
  { CustomSensor(HALL_1_ID,              "Hall S1",                  23) },
  { CustomSensor(HALL_2_ID,              "Hall S2",                  25) },
  { CustomSensor(LAZ_UP_1_ID,            "Lazienka sufit 1",         27) },
  { CustomSensor(LAZ_UP_2_ID,            "Lazinka sufit 2",          29) },
  { CustomSensor(LAZ_LUSTRO_1_ID,        "Lazienka lustro 1",        31) },
  { CustomSensor(LAZ_LUSTRO_2_ID,        "Lazienka lustro 2",        33) },
  { CustomSensor(SYP_UP_1_ID,            "Sypialnia sufit 1",        35) },
  { CustomSensor(SYP_UP_2_ID,            "Sypialnia sufit 2",        37) },
  { CustomSensor(SYP_KINK_1_ID,          "Sypialnia kinkiet 1",      39) },
  { CustomSensor(SYP_KINK_2_ID,          "Sypialnia kinkiet 2",      41) },
  { CustomSensor(ZEW_WEJ_ID,             "Zewnetrzne przy wejsciu",  43) },
  { CustomSensor(ZEW_TARAS_ID,           "Zewnetrzne taras",         45) },
  { CustomSensor(PODDASZE_ID,            "Poddasze",                 47) },
  { CustomSensor(ZEW_FRONT_SCIANA_ID,    "Zenetrzne sciana front",   49) },
  { CustomSensor(ZEW_FRONT_OGROD_ID,     "Zewnetrzne ogrod front",   51) },
  { CustomSensor(ZEW_SCIANA_PODJAZD_ID,  "Zewnetzne sciana podjazd", 53) },
  { CustomSensor(ZEW_TYL_SCIANA_ID,      "Zewnetrzne sciana tyl",    5) },
};

// Pushbuttons declaration
// Remember that names should be consistent with main loop in gateway.ino
OneButton hall1(22, true);
OneButton hall2(24, true);
OneButton hall3(6, true);
OneButton lazienkaS1(26, true);
OneButton lazienkaS2(28, true);
OneButton lazienkaL1(30, true);
OneButton lazienkaL2(32, true);
OneButton sypialniaS1(34, true);
OneButton sypialniaS2(36, true);
OneButton sypialniaK1(38, true);
OneButton sypialniaK2(40, true);
OneButton zewWej(42, true);
OneButton zewTaras(44, true);
OneButton poddasze(46, true);
OneButton zewFrontSciana(48, true);
OneButton zewFrontOgrod(50, true);
OneButton zewScianaPodjazd(52, true);
OneButton zewScianaTyl(4, true);

