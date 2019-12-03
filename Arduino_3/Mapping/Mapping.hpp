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
const uint8_t SYP_ROL_UP_ID     = 40;
const uint8_t SYP_ROL_DOWN_ID   = 41;
const uint8_t LAZ_ROL_UP_ID     = 42;
const uint8_t LAZ_ROL_DOWN_ID   = 43;
const uint8_t GOSC_ROL_UP_ID    = 44;
const uint8_t GOSC_ROL_DOWN_ID  = 45;
const uint8_t DZ1_ROL_UP_ID     = 46;
const uint8_t DZ1_ROL_DOWN_ID   = 47;
const uint8_t DZ2_ROL_UP_ID     = 48;
const uint8_t DZ2_ROL_DOWN_ID   = 49;
const uint8_t GAB_ROL_UP_ID     = 50;
const uint8_t GAB_ROL_DOWN_ID   = 51;
const uint8_t KUCH_ROL_UP_ID    = 52;
const uint8_t KUCH_ROL_DOWN_ID  = 53;
const uint8_t SAL1_ROL_UP_ID    = 54;
const uint8_t SAL1_ROL_DOWN_ID  = 55;
const uint8_t SAL2_ROL_UP_ID    = 56;
const uint8_t SAL2_ROL_DOWN_ID  = 57;

// Vector contaning child ID, description, output pin
std::vector<CustomSensor> customSensors = std::vector<CustomSensor>() = {
  { CustomSensor(SYP_ROL_UP_ID,       "Sypialnia roleta w gore",       23) },
  { CustomSensor(SYP_ROL_DOWN_ID,       "Sypialnia roleta w dol",       25) },
  { CustomSensor(LAZ_ROL_UP_ID,       "Lazienka roleta w gore",       27) },
  { CustomSensor(LAZ_ROL_DOWN_ID,       "Lazienka roleta w dol",       29) },
  { CustomSensor(GOSC_ROL_UP_ID,         "Goscinny roleta w gore",       31) },
  { CustomSensor(GOSC_ROL_DOWN_ID,         "Goscinny roleta w dol",       33) },
  { CustomSensor(DZ1_ROL_UP_ID,          "Dzieci 1 roleta w gore",       35) },
  { CustomSensor(DZ1_ROL_DOWN_ID,         "Dzieci 2 roleta w dol",       37) },
  { CustomSensor(DZ2_ROL_UP_ID,          "Dzieci 2 roleta w gore",       39) },
  { CustomSensor(DZ2_ROL_DOWN_ID,         "Dzieci 2 roleta w dol",       41) },
  { CustomSensor(GAB_ROL_UP_ID,          "Gabinet roleta w gore",       43) },
  { CustomSensor(GAB_ROL_DOWN_ID,         "Gabinet roleta w dol",       45) },
  { CustomSensor(KUCH_ROL_UP_ID,         "Kuchnia roleta w gore",       47) },
  { CustomSensor(KUCH_ROL_DOWN_ID,         "Kuchnia roleta w dol",       49) },
  { CustomSensor(SAL1_ROL_UP_ID,          "Salon 1 roleta w gore",       51) },
  { CustomSensor(SAL1_ROL_DOWN_ID,       "Salon 1 roleta w dol",       53) },
  { CustomSensor(SAL2_ROL_UP_ID,           "Salon 2 roleta w gore",       6) },
  { CustomSensor(SAL2_ROL_DOWN_ID,         "Salon 2 roleta w dol",       7) },
};

// Pushbuttons declaration
// Remember that names should be consistent with main loop in gateway.ino
OneButton sypialnia_gora(22, true);
OneButton sypialnia_dol(24, true);
OneButton sypialnia_kon_gora(8, true);
OneButton sypialnia_kon_dol(9, true);
OneButton lazienka_gora(26, true);
OneButton lazienka_dol(28, true);
OneButton lazienka_kon_gora(10, true);
OneButton lazienka_kon_dol(11, true);
OneButton goscinny_gora(30, true);
OneButton goscinny_dol(32, true);
OneButton goscinny_kon_gora(12, true);
OneButton goscinny_kon_dol(13, true);
OneButton dzieci_1_gora(34, true);
OneButton dzieci_1_dol(36, true);
OneButton dzieci_1_kon_gora(54, true);
OneButton dzieci_1_kon_dol(55, true);
OneButton dzieci_2_gora(38, true);
OneButton dzieci_2_dol(40, true);
OneButton dzieci_2_kon_gora(56, true);
OneButton dzieci_2_kon_dol(57, true);
OneButton gabinet_gora(42, true);
OneButton gabinet_dol(44, true);
OneButton gabinet_kon_gora(58, true);
OneButton gabinet_kon_dol(59, true);
OneButton kuchnia_gora(46, true);
OneButton kuchnia_dol(48, true);
OneButton kuchnia_kon_gora(60, true);
OneButton kuchnia_kon_dol(61, true);
OneButton salon_1_gora(50, true);
OneButton salon_1_dol(52, true);
OneButton salon_1_kon_gora(62, true);
OneButton salon_1_kon_dol(63, true);
OneButton salon_2_gora(4, true);
OneButton salon_2_dol(5, true);
OneButton salon_2_kon_gora(64, true);
OneButton salon_2_kon_dol(65, true);
