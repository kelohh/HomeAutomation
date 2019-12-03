/**
 * @file Automation.h
 * @author Grzegorz Krajewski
 *
 * Automation for buttons & sensors.
 *
 * @license GPL V2
 */

#pragma once

#include "../CustomSensor/CustomSensor.hpp"
#include "../Mapping/Mapping.hpp"

void setOutput(const uint8_t& sensorId, const uint8_t& cmd = Relay::FLIP) {
  CustomSensor sensor = CustomSensor::getSensorById(sensorId, customSensors);
  const uint8_t state = (cmd == Relay::FLIP) ? !loadState(sensor.id) : cmd;

  saveState(sensor.id, state);
  digitalWrite(sensor.pin, state);

  send(sensor.message.set(state));
}

void syp_gora_longStart() {
  setOutput(SYP_ROL_UP_ID, Relay::ON);
  setOutput(SYP_ROL_DOWN_ID, Relay::OFF);
}
void syp_gora_longStop() {
  setOutput(SYP_ROL_UP_ID, Relay::OFF);
  setOutput(SYP_ROL_DOWN_ID, Relay::OFF);
}
void syp_gora_doubleClick() {
  setOutput(SYP_ROL_UP_ID);
  setOutput(SYP_ROL_DOWN_ID, Relay::OFF);
}
void syp_dol_longStart() {
  setOutput(SYP_ROL_UP_ID, Relay::OFF);
  setOutput(SYP_ROL_DOWN_ID, Relay::ON);
}
void syp_dol_longStop() {
  setOutput(SYP_ROL_UP_ID, Relay::OFF);
  setOutput(SYP_ROL_DOWN_ID, Relay::OFF);
}
void syp_dol_doubleClick() {
  setOutput(SYP_ROL_UP_ID, Relay::OFF);
  setOutput(SYP_ROL_DOWN_ID);
}
void syp_kon_gora() {
  setOutput(SYP_ROL_UP_ID, Relay::OFF);
}
void syp_kon_dol() {
  setOutput(SYP_ROL_DOWN_ID, Relay::OFF);
}

void laz_gora_longStart() {
  setOutput(LAZ_ROL_UP_ID, Relay::ON);
  setOutput(LAZ_ROL_DOWN_ID, Relay::OFF);
}
void laz_gora_longStop() {
  setOutput(LAZ_ROL_UP_ID, Relay::OFF);
  setOutput(LAZ_ROL_DOWN_ID, Relay::OFF);
}
void laz_dol_longStart() {
  setOutput(LAZ_ROL_UP_ID, Relay::OFF);
  setOutput(LAZ_ROL_DOWN_ID, Relay::ON);
}
void laz_dol_longStop() {
  setOutput(LAZ_ROL_UP_ID, Relay::OFF);
  setOutput(LAZ_ROL_DOWN_ID, Relay::OFF);
}
void laz_gora_doubleClick() {
  setOutput(LAZ_ROL_UP_ID);
  setOutput(LAZ_ROL_DOWN_ID, Relay::OFF);
}
void laz_dol_doubleClick() {
  setOutput(LAZ_ROL_UP_ID, Relay::OFF);
  setOutput(LAZ_ROL_DOWN_ID);
}
void laz_kon_gora() {
  setOutput(LAZ_ROL_UP_ID, Relay::OFF);
}
void laz_kon_dol() {
  setOutput(LAZ_ROL_DOWN_ID, Relay::OFF);
}

void gosc_gora_longStart() {
  setOutput(GOSC_ROL_UP_ID, Relay::ON);
  setOutput(GOSC_ROL_DOWN_ID, Relay::OFF);
}
void gosc_gora_longStop() {
  setOutput(GOSC_ROL_UP_ID, Relay::OFF);
  setOutput(GOSC_ROL_DOWN_ID, Relay::OFF);
}
void gosc_dol_longStart() {
  setOutput(GOSC_ROL_UP_ID, Relay::OFF);
  setOutput(GOSC_ROL_DOWN_ID, Relay::ON);
}
void gosc_dol_longStop() {
  setOutput(GOSC_ROL_UP_ID, Relay::OFF);
  setOutput(GOSC_ROL_DOWN_ID, Relay::OFF);
}
void gosc_gora_doubleClick() {
  setOutput(GOSC_ROL_UP_ID);
  setOutput(GOSC_ROL_DOWN_ID, Relay::OFF);
}
void gosc_dol_doubleClick() {
  setOutput(GOSC_ROL_UP_ID, Relay::OFF);
  setOutput(GOSC_ROL_DOWN_ID);
}
void gosc_kon_gora() {
  setOutput(GOSC_ROL_UP_ID, Relay::OFF);
}
void gosc_kon_dol() {
  setOutput(GOSC_ROL_DOWN_ID, Relay::OFF);
}

void dz1_gora_longStart() {
  setOutput(DZ1_ROL_UP_ID, Relay::ON);
  setOutput(DZ1_ROL_DOWN_ID, Relay::OFF);
}
void dz1_gora_longStop() {
  setOutput(DZ1_ROL_UP_ID, Relay::OFF);
  setOutput(DZ1_ROL_DOWN_ID, Relay::OFF);
}
void dz1_dol_longStart() {
  setOutput(DZ1_ROL_UP_ID, Relay::OFF);
  setOutput(DZ1_ROL_DOWN_ID, Relay::ON);
}
void dz1_dol_longStop() {
  setOutput(DZ1_ROL_UP_ID, Relay::OFF);
  setOutput(DZ1_ROL_DOWN_ID, Relay::OFF);
}
void dz1_gora_doubleClick() {
  setOutput(DZ1_ROL_UP_ID);
  setOutput(DZ1_ROL_DOWN_ID, Relay::OFF);
}
void dz1_dol_doubleClick() {
  setOutput(DZ1_ROL_UP_ID, Relay::OFF);
  setOutput(DZ1_ROL_DOWN_ID);
}
void dz1_kon_gora() {
  setOutput(DZ1_ROL_UP_ID, Relay::OFF);
}
void dz1_kon_dol() {
  setOutput(DZ1_ROL_DOWN_ID, Relay::OFF);
}

void dz2_gora_longStart() {
  setOutput(DZ2_ROL_UP_ID, Relay::ON);
  setOutput(DZ2_ROL_DOWN_ID, Relay::OFF);
}
void dz2_gora_longStop() {
  setOutput(DZ2_ROL_UP_ID, Relay::OFF);
  setOutput(DZ2_ROL_DOWN_ID, Relay::OFF);
}
void dz2_dol_longStart() {
  setOutput(DZ2_ROL_UP_ID, Relay::OFF);
  setOutput(DZ2_ROL_DOWN_ID, Relay::ON);
}
void dz2_dol_longStop() {
  setOutput(DZ2_ROL_UP_ID, Relay::OFF);
  setOutput(DZ2_ROL_DOWN_ID, Relay::OFF);
}
void dz2_gora_doubleClick() {
  setOutput(DZ2_ROL_UP_ID);
  setOutput(DZ2_ROL_DOWN_ID, Relay::OFF);
}
void dz2_dol_doubleClick() {
  setOutput(DZ2_ROL_UP_ID, Relay::OFF);
  setOutput(DZ2_ROL_DOWN_ID);
}
void dz2_kon_gora() {
  setOutput(DZ2_ROL_UP_ID, Relay::OFF);
}
void dz2_kon_dol() {
  setOutput(DZ2_ROL_DOWN_ID, Relay::OFF);
}

void gab_gora_longStart() {
  setOutput(GAB_ROL_UP_ID, Relay::ON);
  setOutput(GAB_ROL_DOWN_ID, Relay::OFF);
}
void gab_gora_longStop() {
  setOutput(GAB_ROL_UP_ID, Relay::OFF);
  setOutput(GAB_ROL_DOWN_ID, Relay::OFF);
}
void gab_dol_longStart() {
  setOutput(GAB_ROL_UP_ID, Relay::OFF);
  setOutput(GAB_ROL_DOWN_ID, Relay::ON);
}
void gab_dol_longStop() {
  setOutput(GAB_ROL_UP_ID, Relay::OFF);
  setOutput(GAB_ROL_DOWN_ID, Relay::OFF);
}
void gab_gora_doubleClick() {
  setOutput(GAB_ROL_UP_ID);
  setOutput(GAB_ROL_DOWN_ID, Relay::OFF);
}
void gab_dol_doubleClick() {
  setOutput(GAB_ROL_UP_ID, Relay::OFF);
  setOutput(GAB_ROL_DOWN_ID);
}
void gab_kon_gora() {
  setOutput(GAB_ROL_UP_ID, Relay::OFF);
}
void gab_kon_dol() {
  setOutput(GAB_ROL_DOWN_ID, Relay::OFF);
}

void kuch_gora_longStart() {
  setOutput(KUCH_ROL_UP_ID, Relay::ON);
  setOutput(KUCH_ROL_DOWN_ID, Relay::OFF);
}
void kuch_gora_longStop() {
  setOutput(KUCH_ROL_UP_ID, Relay::OFF);
  setOutput(KUCH_ROL_DOWN_ID, Relay::OFF);
}
void kuch_dol_longStart() {
  setOutput(KUCH_ROL_UP_ID, Relay::OFF);
  setOutput(KUCH_ROL_DOWN_ID, Relay::ON);
}
void kuch_dol_longStop() {
  setOutput(KUCH_ROL_UP_ID, Relay::OFF);
  setOutput(KUCH_ROL_DOWN_ID, Relay::OFF);
}
void kuch_gora_doubleClick() {
  setOutput(KUCH_ROL_UP_ID);
  setOutput(KUCH_ROL_DOWN_ID, Relay::OFF);
}
void kuch_dol_doubleClick() {
  setOutput(KUCH_ROL_UP_ID, Relay::OFF);
  setOutput(KUCH_ROL_DOWN_ID);
}
void kuch_kon_gora() {
  setOutput(KUCH_ROL_UP_ID, Relay::OFF);
}
void kuch_kon_dol() {
  setOutput(KUCH_ROL_DOWN_ID, Relay::OFF);
}

void sal1_gora_longStart() {
  setOutput(SAL1_ROL_UP_ID, Relay::ON);
  setOutput(SAL1_ROL_DOWN_ID, Relay::OFF);
}
void sal1_gora_longStop() {
  setOutput(SAL1_ROL_UP_ID, Relay::OFF);
  setOutput(SAL1_ROL_DOWN_ID, Relay::OFF);
}
void sal1_dol_longStart() {
  setOutput(SAL1_ROL_UP_ID, Relay::OFF);
  setOutput(SAL1_ROL_DOWN_ID, Relay::ON);
}
void sal1_dol_longStop() {
  setOutput(SAL1_ROL_UP_ID, Relay::OFF);
  setOutput(SAL1_ROL_DOWN_ID, Relay::OFF);
}
void sal1_gora_doubleClick() {
  setOutput(SAL1_ROL_UP_ID);
  setOutput(SAL1_ROL_DOWN_ID, Relay::OFF);
}
void sal1_dol_doubleClick() {
  setOutput(SAL1_ROL_UP_ID, Relay::OFF);
  setOutput(SAL1_ROL_DOWN_ID);
}
void sal1_kon_gora() {
  setOutput(SAL1_ROL_UP_ID, Relay::OFF);
}
void sal1_kon_dol() {
  setOutput(SAL1_ROL_DOWN_ID, Relay::OFF);
}

void sal2_gora_longStart() {
  setOutput(SAL2_ROL_UP_ID, Relay::ON);
  setOutput(SAL2_ROL_DOWN_ID, Relay::OFF);
}
void sal2_gora_longStop() {
  setOutput(SAL2_ROL_UP_ID, Relay::OFF);
  setOutput(SAL2_ROL_DOWN_ID, Relay::OFF);
}
void sal2_dol_longStart() {
  setOutput(SAL2_ROL_UP_ID, Relay::OFF);
  setOutput(SAL2_ROL_DOWN_ID, Relay::ON);
}
void sal2_dol_longStop() {
  setOutput(SAL2_ROL_UP_ID, Relay::OFF);
  setOutput(SAL2_ROL_DOWN_ID, Relay::OFF);
}
void sal2_gora_doubleClick() {
  setOutput(SAL2_ROL_UP_ID);
  setOutput(SAL2_ROL_DOWN_ID, Relay::OFF);
}
void sal2_dol_doubleClick() {
  setOutput(SAL2_ROL_UP_ID, Relay::OFF);
  setOutput(SAL2_ROL_DOWN_ID);
}
void sal2_kon_gora() {
  setOutput(SAL2_ROL_UP_ID, Relay::OFF);
}
void sal2_kon_dol() {
  setOutput(SAL2_ROL_DOWN_ID, Relay::OFF);
}

void setupButtons() {
  // Setup the button.
 // mybutton1.attachClick(osluga_click1); //deklaracja wywołania programu gdy click
//mybutton1.attachDoubleClick(obsluga_doubleclick1); // gdy dubleclick
//mybutton1.attachLongPressStart(obsluga_longPressStart1); //gdy naciśnięto przycisk długo
//mybutton1.attachLongPressStop(obsluga_longPressStop1); //gdy zwolniono przycisk długo
//mybutton1.attachDuringLongPress(obsluga_longPress1); //wywoływana za każdym obrotem pętli loop() gdy trzymany jest przycisk w stanie ON
  sypialnia_gora.attachLongPressStart(syp_gora_longStart);
  sypialnia_gora.attachLongPressStop(syp_gora_longStop);
  sypialnia_dol.attachLongPressStart(syp_dol_longStart);
  sypialnia_dol.attachLongPressStop(syp_dol_longStop);
  sypialnia_gora.attachDoubleClick(syp_gora_doubleClick);
  sypialnia_dol.attachDoubleClick(syp_dol_doubleClick);
  sypialnia_kon_gora.attachLongPressStart(syp_kon_gora);
  sypialnia_kon_dol.attachLongPressStart(syp_kon_dol);
  sypialnia_kon_gora.attachDuringLongPress(syp_kon_gora);
  sypialnia_kon_dol.attachDuringLongPress(syp_kon_dol);

  lazienka_gora.attachLongPressStart(laz_gora_longStart);
  lazienka_gora.attachLongPressStop(laz_gora_longStop);
  lazienka_dol.attachLongPressStart(laz_dol_longStart);
  lazienka_dol.attachLongPressStop(laz_dol_longStop);
  lazienka_gora.attachDoubleClick(laz_gora_doubleClick);
  lazienka_dol.attachDoubleClick(laz_dol_doubleClick);
  lazienka_kon_gora.attachLongPressStart(laz_kon_gora);
  lazienka_kon_dol.attachLongPressStart(laz_kon_dol);
  lazienka_kon_gora.attachDuringLongPress(laz_kon_gora);
  lazienka_kon_dol.attachDuringLongPress(laz_kon_dol);

  goscinny_gora.attachLongPressStart(gosc_gora_longStart);
  goscinny_gora.attachLongPressStop(gosc_gora_longStop);
  goscinny_dol.attachLongPressStart(gosc_dol_longStart);
  goscinny_dol.attachLongPressStop(gosc_dol_longStop);
  goscinny_gora.attachDoubleClick(gosc_gora_doubleClick);
  goscinny_dol.attachDoubleClick(gosc_dol_doubleClick);
  goscinny_kon_gora.attachLongPressStart(gosc_kon_gora);
  goscinny_kon_dol.attachLongPressStart(gosc_kon_dol);
  goscinny_kon_gora.attachDuringLongPress(gosc_kon_gora);
  goscinny_kon_dol.attachDuringLongPress(gosc_kon_dol);

  dzieci_1_gora.attachLongPressStart(dz1_gora_longStart);
  dzieci_1_gora.attachLongPressStop(dz1_gora_longStop);
  dzieci_1_dol.attachLongPressStart(dz1_dol_longStop);
  dzieci_1_dol.attachLongPressStop(dz1_dol_longStop);
  dzieci_1_gora.attachDoubleClick(dz1_gora_doubleClick);
  dzieci_1_dol.attachDoubleClick(dz1_dol_doubleClick);
  dzieci_1_kon_gora.attachLongPressStart(dz1_kon_gora);
  dzieci_1_kon_dol.attachLongPressStart(dz1_kon_dol);
  dzieci_1_kon_gora.attachDuringLongPress(dz1_kon_gora);
  dzieci_1_kon_dol.attachDuringLongPress(dz1_kon_dol);

  dzieci_2_gora.attachLongPressStart(dz2_gora_longStart);
  dzieci_2_gora.attachLongPressStop(dz2_gora_longStop);
  dzieci_2_dol.attachLongPressStart(dz2_dol_longStop);
  dzieci_2_dol.attachLongPressStop(dz2_dol_longStop);
  dzieci_2_gora.attachDoubleClick(dz2_gora_doubleClick);
  dzieci_2_dol.attachDoubleClick(dz2_dol_doubleClick);
  dzieci_2_kon_gora.attachLongPressStart(dz2_kon_gora);
  dzieci_2_kon_dol.attachLongPressStart(dz2_kon_dol);
  dzieci_2_kon_gora.attachDuringLongPress(dz2_kon_gora);
  dzieci_2_kon_dol.attachDuringLongPress(dz2_kon_dol);

  gabinet_gora.attachLongPressStart(gab_gora_longStart);
  gabinet_gora.attachLongPressStop(gab_gora_longStop);
  gabinet_dol.attachLongPressStart(gab_dol_longStop);
  gabinet_dol.attachLongPressStop(gab_dol_longStop);
  gabinet_gora.attachDoubleClick(gab_gora_doubleClick);
  gabinet_dol.attachDoubleClick(gab_dol_doubleClick);
  gabinet_kon_gora.attachLongPressStart(gab_kon_gora);
  gabinet_kon_dol.attachLongPressStart(gab_kon_dol);
  gabinet_kon_gora.attachDuringLongPress(gab_kon_gora);
  gabinet_kon_dol.attachDuringLongPress(gab_kon_dol);

  kuchnia_gora.attachLongPressStart(kuch_gora_longStart);
  kuchnia_gora.attachLongPressStop(kuch_gora_longStop);
  kuchnia_dol.attachLongPressStart(kuch_dol_longStop);
  kuchnia_dol.attachLongPressStop(kuch_dol_longStop);
  kuchnia_gora.attachDoubleClick(kuch_gora_doubleClick);
  kuchnia_dol.attachDoubleClick(kuch_dol_doubleClick);
  kuchnia_kon_gora.attachLongPressStart(kuch_kon_gora);
  kuchnia_kon_dol.attachLongPressStart(kuch_kon_dol);
  kuchnia_kon_gora.attachDuringLongPress(kuch_kon_gora);
  kuchnia_kon_dol.attachDuringLongPress(kuch_kon_dol);

  salon_1_gora.attachLongPressStart(sal1_gora_longStart);
  salon_1_gora.attachLongPressStop(sal1_gora_longStop);
  salon_1_dol.attachLongPressStart(sal1_dol_longStop);
  salon_1_dol.attachLongPressStop(sal1_dol_longStop);
  salon_1_gora.attachDoubleClick(sal1_gora_doubleClick);
  salon_1_dol.attachDoubleClick(sal1_dol_doubleClick);
  salon_1_kon_gora.attachLongPressStart(sal1_kon_gora);
  salon_1_kon_dol.attachLongPressStart(sal1_kon_dol);
  salon_1_kon_gora.attachDuringLongPress(sal1_kon_gora);
  salon_1_kon_dol.attachDuringLongPress(sal1_kon_dol);

  salon_2_gora.attachLongPressStart(sal2_gora_longStart);
  salon_2_gora.attachLongPressStop(sal2_gora_longStop);
  salon_2_dol.attachLongPressStart(sal2_dol_longStop);
  salon_2_dol.attachLongPressStop(sal2_dol_longStop);
  salon_2_gora.attachDoubleClick(sal2_gora_doubleClick);
  salon_2_dol.attachDoubleClick(sal2_dol_doubleClick);
  salon_2_kon_gora.attachLongPressStart(sal2_kon_gora);
  salon_2_kon_dol.attachLongPressStart(sal2_kon_dol);
  salon_2_kon_gora.attachDuringLongPress(sal2_kon_gora);
  salon_2_kon_dol.attachDuringLongPress(sal2_kon_dol);
}
