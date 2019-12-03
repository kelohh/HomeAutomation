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

void salon1Click() {
  setOutput(SALOON_1_ID);
}
void salon2Click() {
  setOutput(SALOON_2_ID);
}
void salon3Click() {
  setOutput(SALOON_3_ID);
}
void salon4Click() {
  setOutput(SALOON_4_ID);
}
void salonDoubleClick() {
  setOutput(SALOON_1_ID);
  setOutput(SALOON_2_ID);
  setOutput(SALOON_3_ID);
  setOutput(SALOON_4_ID);
}
void salonLongClick() {
  setOutput(SALOON_1_ID, Relay::OFF);
  setOutput(SALOON_2_ID, Relay::OFF);
  setOutput(SALOON_3_ID, Relay::OFF);
  setOutput(SALOON_4_ID, Relay::OFF);
}

void kuchniaSufit1Click() {
  setOutput(KITCHEN_UP_1_ID);
}
void kuchniaSufit2Click() {
  setOutput(KITCHEN_UP_2_ID);
}
void kuchniaBok1Click() {
  setOutput(KITCHEN_SIDE_1_ID);
}
void kuchniaBok2Click() {
  setOutput(KITCHEN_SIDE_2_ID);
}
void kuchniaDoubleClick() {
  setOutput(KITCHEN_UP_1_ID);
  setOutput(KITCHEN_UP_2_ID);
  setOutput(KITCHEN_SIDE_1_ID);
  setOutput(KITCHEN_SIDE_2_ID);
}
void kuchniaLongClick() {
  setOutput(KITCHEN_UP_1_ID, Relay::OFF);
  setOutput(KITCHEN_UP_2_ID, Relay::OFF);
  setOutput(KITCHEN_SIDE_1_ID, Relay::OFF);
  setOutput(KITCHEN_SIDE_2_ID, Relay::OFF);
}

void spizarniaClick() {
  setOutput(STORAGE_ID);
}

void wiatrolapClick() {
  setOutput(ENTRANCE_ID);
}

void wcSufitClick() {
  setOutput(TOILET_UP_ID);
}
void wcLustroClick() {
  setOutput(TOILET_MIRROR_ID);
}
void wcDoubleClick() {
  setOutput(TOILET_UP_ID);
  setOutput(TOILET_MIRROR_ID);
}
void wcLongClick() {
  setOutput(TOILET_UP_ID, Relay::OFF);
  setOutput(TOILET_MIRROR_ID, Relay::OFF);
}

void gabinet1Click() {
  setOutput(OFFICE_1_ID);
}
void gabinet2Click() {
  setOutput(OFFICE_2_ID);
}
void gabinetDoubleClick() {
  setOutput(OFFICE_1_ID);
  setOutput(OFFICE_2_ID);
}
void gabinetLongClick() {
  setOutput(OFFICE_1_ID, Relay::OFF);
  setOutput(OFFICE_2_ID, Relay::OFF);
}

void techSufitClick() {
  setOutput(TECH_ROOM_UP_ID);
}
void techSzafaClick() {
  setOutput(TECH_ROOM_RACK_ID);
}
void techDoubleClick() {
  setOutput(TECH_ROOM_UP_ID);
  setOutput(TECH_ROOM_RACK_ID);
}
void techLongClick() {
  setOutput(TECH_ROOM_UP_ID, Relay::OFF);
  setOutput(TECH_ROOM_RACK_ID, Relay::OFF);
}

void dzieci11Click() {
  setOutput(KIDS_1_1_ID);
}
void dzieci12Click() {
  setOutput(KIDS_1_2_ID);
}
void dzieci1DoubleClick() {
  setOutput(KIDS_1_1_ID);
  setOutput(KIDS_1_2_ID);
}
void dzieci1LongClick() {
  setOutput(KIDS_1_1_ID, Relay::OFF);
  setOutput(KIDS_1_2_ID, Relay::OFF);
}

void dzieci21Click() {
  setOutput(KIDS_2_1_ID);
}
void dzieci22Click() {
  setOutput(KIDS_2_2_ID);
}
void dzieci2DoubleClick() {
  setOutput(KIDS_2_1_ID);
  setOutput(KIDS_2_2_ID);
}
void dzieci2LongClick() {
  setOutput(KIDS_2_1_ID, Relay::OFF);
  setOutput(KIDS_2_2_ID, Relay::OFF);
}

void goscinny1Click() {
  setOutput(GUESTS_1_ID);
}
void goscinny2Click() {
  setOutput(GUESTS_2_ID);
}
void goscinnyDoubleClick() {
  setOutput(GUESTS_1_ID);
  setOutput(GUESTS_2_ID);
}
void goscinnyLongClick() {
  setOutput(GUESTS_1_ID, Relay::OFF);
  setOutput(GUESTS_2_ID, Relay::OFF);
}

void setupButtons() {
  // Setup the button.
  salon1.attachClick(salon1Click);
  salon2.attachClick(salon2Click);
  salon3.attachClick(salon3Click);
  salon4.attachClick(salon4Click); 
  salon1.attachLongPressStop(salonLongClick);
  salon2.attachLongPressStop(salonLongClick);
  salon3.attachLongPressStop(salonLongClick);
  salon4.attachLongPressStop(salonLongClick);
  salon1.attachDoubleClick(salonDoubleClick);
  salon2.attachDoubleClick(salonDoubleClick);
  salon3.attachDoubleClick(salonDoubleClick);
  salon4.attachDoubleClick(salonDoubleClick);

  kuchniaSufit1.attachClick(kuchniaSufit1Click);
  kuchniaSufit2.attachClick(kuchniaSufit2Click);
  kuchniaBok1.attachClick(kuchniaBok1Click);
  kuchniaBok2.attachClick(kuchniaBok2Click);
  kuchniaSufit1.attachDoubleClick(kuchniaDoubleClick);
  kuchniaSufit2.attachDoubleClick(kuchniaDoubleClick);
  kuchniaBok1.attachDoubleClick(kuchniaDoubleClick);
  kuchniaBok2.attachDoubleClick(kuchniaDoubleClick);
  kuchniaSufit1.attachLongPressStop(kuchniaLongClick);
  kuchniaSufit2.attachLongPressStop(kuchniaLongClick);
  kuchniaBok1.attachLongPressStop(kuchniaLongClick);
  kuchniaBok2.attachLongPressStop(kuchniaLongClick);
  
  spizarnia.attachClick(spizarniaClick);

  wiatrolap.attachClick(wiatrolapClick);
  wiatrolap2.attachClick(wiatrolapClick);
 
  wcSufit.attachClick(wcSufitClick);
  wcLustro.attachClick(wcLustroClick); 
  wcSufit.attachLongPressStop(wcLongClick);
  wcLustro.attachLongPressStop(wcLongClick);
  wcSufit.attachDoubleClick(wcDoubleClick);
  wcLustro.attachDoubleClick(wcDoubleClick);

  gabinet1.attachClick(gabinet1Click);
  gabinet2.attachClick(gabinet2Click); 
  gabinet1.attachLongPressStop(gabinetLongClick);
  gabinet2.attachLongPressStop(gabinetLongClick);
  gabinet1.attachDoubleClick(gabinetDoubleClick);
  gabinet2.attachDoubleClick(gabinetDoubleClick);
  
  pomTechSufit.attachClick(techSufitClick);
  pomTechSzafa.attachClick(techSzafaClick); 
  pomTechSufit.attachLongPressStop(techLongClick);
  pomTechSzafa.attachLongPressStop(techLongClick);
  pomTechSufit.attachDoubleClick(techDoubleClick);
  pomTechSzafa.attachDoubleClick(techDoubleClick);
  
  dzieci11.attachClick(dzieci11Click);
  dzieci12.attachClick(dzieci12Click); 
  dzieci11.attachLongPressStop(dzieci1LongClick);
  dzieci12.attachLongPressStop(dzieci1LongClick);
  dzieci11.attachDoubleClick(dzieci1DoubleClick);
  dzieci12.attachDoubleClick(dzieci1DoubleClick);

  dzieci21.attachClick(dzieci21Click);
  dzieci22.attachClick(dzieci22Click); 
  dzieci21.attachLongPressStop(dzieci2LongClick);
  dzieci22.attachLongPressStop(dzieci2LongClick);
  dzieci21.attachDoubleClick(dzieci2DoubleClick);
  dzieci22.attachDoubleClick(dzieci2DoubleClick);
  
  goscinny1.attachClick(goscinny1Click);
  goscinny2.attachClick(goscinny2Click); 
  goscinny1.attachLongPressStop(goscinnyLongClick);
  goscinny2.attachLongPressStop(goscinnyLongClick);
  goscinny1.attachDoubleClick(goscinnyDoubleClick);
  goscinny2.attachDoubleClick(goscinnyDoubleClick);
}
