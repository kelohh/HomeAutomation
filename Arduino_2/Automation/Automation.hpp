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

void hall1Click() {
  setOutput(HALL_1_ID);
}
void hall2Click() {
  setOutput(HALL_2_ID);
}

void hallDoubleClick() {
  setOutput(HALL_1_ID);
  setOutput(HALL_2_ID);
}
void hallLongClick() {
  setOutput(HALL_1_ID, Relay::OFF);
  setOutput(HALL_2_ID, Relay::OFF);
}

void lazienkaS1Click() {
  setOutput(LAZ_UP_1_ID);
}
void lazienkaS2Click() {
  setOutput(LAZ_UP_2_ID);
}
void lazienkaL1Click() {
  setOutput(LAZ_LUSTRO_1_ID);
}
void lazienkaL2Click() {
  setOutput(LAZ_LUSTRO_2_ID);
}
void lazienkaDoubleClick() {
  setOutput(LAZ_UP_1_ID);
  setOutput(LAZ_UP_2_ID);
  setOutput(LAZ_LUSTRO_1_ID);
  setOutput(LAZ_LUSTRO_2_ID);
}
void lazienkaLongClick() {
  setOutput(LAZ_UP_1_ID, Relay::OFF);
  setOutput(LAZ_UP_2_ID, Relay::OFF);
  setOutput(LAZ_LUSTRO_1_ID, Relay::OFF);
  setOutput(LAZ_LUSTRO_2_ID, Relay::OFF);
}

void sypialniaS1Click() {
  setOutput(SYP_UP_1_ID);
}
void sypialniaS2Click() {
  setOutput(SYP_UP_2_ID);
}
void sypialniaK1Click() {
  setOutput(SYP_KINK_1_ID);
}
void sypialniaK2Click() {
  setOutput(SYP_KINK_2_ID);
}
void sypialniaDoubleClick() {
  setOutput(SYP_UP_1_ID);
  setOutput(SYP_UP_2_ID);
  setOutput(SYP_KINK_1_ID);
  setOutput(SYP_KINK_2_ID);
}
void sypialniaLongClick() {
  setOutput(SYP_UP_1_ID, Relay::OFF);
  setOutput(SYP_UP_2_ID, Relay::OFF);
  setOutput(SYP_KINK_1_ID, Relay::OFF);
  setOutput(SYP_KINK_2_ID, Relay::OFF);
}

void poddaszeClick() {
  setOutput(PODDASZE_ID);
}

void zewWejClick() {
  setOutput(ZEW_WEJ_ID);
}
void zewWejDoubleClick() {
  setOutput(ZEW_WEJ_ID);
  setOutput(ZEW_FRONT_SCIANA_ID);
  setOutput(ZEW_FRONT_OGROD_ID);
  setOutput(ZEW_SCIANA_PODJAZD_ID);
}
void zewWejLongClick() {
  setOutput(ZEW_WEJ_ID, Relay::OFF);
  setOutput(ZEW_FRONT_SCIANA_ID, Relay::OFF);
  setOutput(ZEW_FRONT_OGROD_ID, Relay::OFF);
  setOutput(ZEW_SCIANA_PODJAZD_ID, Relay::OFF);
}

void zewTarasClick() {
  setOutput(ZEW_TARAS_ID);
}
void zewTarasDoubleClick() {
  setOutput(ZEW_TARAS_ID);
  setOutput(ZEW_TYL_SCIANA_ID);
}
void zewTarasLongClick() {
  setOutput(ZEW_TARAS_ID, Relay::OFF);
  setOutput(ZEW_TYL_SCIANA_ID, Relay::OFF);
}

void zewFrontScianaClick() {
  setOutput(ZEW_FRONT_SCIANA_ID);
}
void zewFrontOgrodClick() {
  setOutput(ZEW_FRONT_OGROD_ID);
}
void zewScianaPodjazdClick() {
  setOutput(ZEW_SCIANA_PODJAZD_ID);
}
void zewScianaTylClick() {
  setOutput(ZEW_TYL_SCIANA_ID);
}


void setupButtons() {
  hall1.attachClick(hall1Click);
  hall1.attachLongPressStop(hallLongClick);
  hall1.attachDoubleClick(hallDoubleClick);
  hall2.attachClick(hall2Click);
  hall2.attachLongPressStop(hallLongClick);
  hall2.attachDoubleClick(hallDoubleClick);
  hall3.attachClick(hall2Click);
  hall3.attachLongPressStop(hallLongClick);
  hall3.attachDoubleClick(hallDoubleClick);

  lazienkaS1.attachClick(lazienkaS1Click);
  lazienkaS1.attachLongPressStop(lazienkaLongClick);
  lazienkaS1.attachDoubleClick(lazienkaDoubleClick);
  lazienkaS2.attachClick(lazienkaS2Click);
  lazienkaS2.attachLongPressStop(lazienkaLongClick);
  lazienkaS2.attachDoubleClick(lazienkaDoubleClick);
  lazienkaL1.attachClick(lazienkaL1Click);
  lazienkaL1.attachLongPressStop(lazienkaLongClick);
  lazienkaL1.attachDoubleClick(lazienkaDoubleClick);
  lazienkaL2.attachClick(lazienkaL2Click);
  lazienkaL2.attachLongPressStop(lazienkaLongClick);
  lazienkaL2.attachDoubleClick(lazienkaDoubleClick);

  sypialniaS1.attachClick(sypialniaS1Click);
  sypialniaS1.attachLongPressStop(sypialniaLongClick);
  sypialniaS1.attachDoubleClick(sypialniaDoubleClick);
  sypialniaS2.attachClick(sypialniaS2Click);
  sypialniaS2.attachLongPressStop(sypialniaLongClick);
  sypialniaS2.attachDoubleClick(sypialniaDoubleClick);
  sypialniaK1.attachClick(sypialniaK1Click);
  sypialniaK1.attachLongPressStop(sypialniaLongClick);
  sypialniaK1.attachDoubleClick(sypialniaDoubleClick);
  sypialniaK2.attachClick(sypialniaK2Click);
  sypialniaK2.attachLongPressStop(sypialniaLongClick);
  sypialniaK2.attachDoubleClick(sypialniaDoubleClick);

  zewWej.attachClick(zewWejClick);
  zewWej.attachLongPressStop(zewWejLongClick);
  zewWej.attachDoubleClick(zewWejDoubleClick);

  zewTaras.attachClick(zewTarasClick);
  zewTaras.attachLongPressStop(zewTarasLongClick);
  zewTaras.attachDoubleClick(zewTarasDoubleClick);

  poddasze.attachClick(poddaszeClick);

  zewFrontSciana.attachClick(zewFrontScianaClick);

  zewFrontOgrod.attachClick(zewFrontOgrodClick);

  zewScianaPodjazd.attachClick(zewScianaPodjazdClick);

  zewScianaTyl.attachClick(zewScianaTylClick);
}
