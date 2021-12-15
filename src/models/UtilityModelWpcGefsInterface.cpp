// *****************************************************************************
// * Copyright (c) 2020, 2021 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "models/UtilityModelWpcGefsInterface.h"

const QStringList UtilityModelWpcGefsInterface::sectors = {
    "US",
    "AK"
};

const QStringList UtilityModelWpcGefsInterface::params = {
    "p06igt0p01",
    "p06igt0p1",
    "p06igt0p25",
    "p06igt0p5",
    "p06igt1",
    "p24igt0p25",
    "p24igt0p5",
    "p24igt1",
    "p24igt2",
    "p24igt3",
    "p24igt4",
    "p24igt5",
    "p48igt1",
    "p48igt2",
    "p48igt3",
    "p48igt4",
    "p48igt5",
    "p120ilt0p01",
    "p120igt1",
    "p120igt2",
    "p120igt3",
    "p120igt4",
    "p120igt5",
    "p168ilt0p01",
    "p168igt1",
    "p168igt2",
    "p168igt3",
    "p168igt4",
    "p168igt5",
    "p240igt1",
    "p240igt2",
    "p240igt3",
    "p240igt4",
    "p240igt5",
    "p240igt10",
    "p240ilt0p01",
    "ff",
    "p24igt100yr",
    "p24igt100yr0p9",
    "p24igt100yr0p8",
    "p24igt100yr0p7",
    "p24igt100yr0p5",
    "p24igt50yr",
    "p24igt25yr",
    "p24igt10yr",
    "psnow",
    "psleet",
    "pice",
    "prain",
    "staz5ltn1",
    "staz5ltn2",
    "staz5ltn3",
    "staz5ltn4",
    "staz5ltn5",
    "staz5gt1",
    "staz5gt2",
    "staz5gt3",
    "staz7ltn1",
    "staz7ltn2",
    "staz7ltn3",
    "staz7ltn4",
    "staz7ltn5",
    "staz7gt1",
    "staz7gt2",
    "staz7gt3",
    "2mtlt32",
    "2mtlt0",
    "2mtltm20",
    "2mtltm40",
    "2m6hminlt32",
    "2m6hminlt0",
    "2m6hminltm20",
    "2m6hminltm40",
    "2m6hmingt70",
    "2m6hmaxltm20",
    "2m6hmaxltm40",
    "2m6hmaxgt80",
    "2m6hmaxgt90",
    "2m6hmaxgt100",
    "2m6hmaxgt110",
    "2m6hmaxgt120",
    "heatgt100",
    "heatgt105",
    "heatgt110",
    "heatgt115",
    "heatgt120",
    "t7lt0",
    "t7gt10",
    "t8gt15",
    "t8gt20",
    "t8gt25",
    "t8lt0",
    "t8ltn10",
    "t8ltn20",
    "t8ltn30",
    "t8ltn40",
    "stat7ltn1",
    "stat7ltn2",
    "stat7ltn3",
    "stat7ltn4",
    "stat7ltn5",
    "stat7gt1",
    "stat7gt2",
    "stat7gt3",
    "stat7gt4",
    "stat8ltn1",
    "stat8ltn2",
    "stat8ltn3",
    "stat8ltn4",
    "stat8ltn5",
    "stat8gt1",
    "stat8gt2",
    "stat8gt3",
    "stat8gt4",
    "pmsllt965",
    "pmsllt980",
    "pmsllt990",
    "pmsllt1000",
    "pmslgt1030",
    "tdgt50",
    "tdgt55",
    "tdgt60",
    "tdgt65",
    "tdgt70",
    "tdgt75",
    "tdgt80",
    "pwgt1p25",
    "pwgt1p5",
    "pwgt1p75",
    "pwgt2",
    "stapwgt1",
    "stapwgt2",
    "stapwgt3",
    "stapwgt4",
    "rhlt5",
    "rhlt10",
    "cldlt10",
    "cldlt30",
    "cldgt70",
    "cldgt90",
    "10mwindgt20",
    "10mwindgt30",
    "10mwindgt40",
    "10mwindgt50",
    "10mwindgt75",
    "z5gt5940",
    "z5gt6000",
    "capegt500",
    "capegt1000",
    "capegt1500",
    "capegt2000",
    "capegt3000",
    "capegt4000",
    "capegt5000",
    "capegt6000",
    "capegt8000",
    "capegt10000"
};

const QStringList UtilityModelWpcGefsInterface::labels = {
    "6-hr precip > 0.01",
    "6-hr precip > 0.10",
    "6-hr precip > 0.25",
    "6-hr precip > 0.50",
    "6-hr precip > 1.00",
    "24-hr precip > 0.25",
    "24-hr precip > 0.50",
    "24-hr precip > 1.00",
    "24-hr precip > 2.00",
    "24-hr precip > 3.00",
    "24-hr precip > 4.00",
    "24-hr precip > 5.00",
    "48-hr precip > 1.00",
    "48-hr precip > 2.00",
    "48-hr precip > 3.00",
    "48-hr precip > 4.00",
    "48-hr precip > 5.00",
    "120-hr precip < 0.01",
    "120-hr precip > 1.00",
    "120-hr precip > 2.00",
    "120-hr precip > 3.00",
    "120-hr precip > 4.00",
    "120-hr precip > 5.00",
    "168-hr precip < 0.01",
    "168-hr precip > 1.00",
    "168-hr precip > 2.00",
    "168-hr precip > 3.00",
    "168-hr precip > 4.00",
    "168-hr precip > 5.00",
    "240-hr precip > 1.00",
    "240-hr precip > 2.00",
    "240-hr precip > 3.00",
    "240-hr precip > 4.00",
    "240-hr precip > 5.00",
    "240-hr precip > 10.00",
    "240-hr precip < 0.01",
    "Heavy Rain Potential",
    "24-hr precip > 1% annual chance",
    "24-hr precip > 90% 1% annual chance",
    "24-hr precip > 80% 1% annual chance",
    "24-hr precip > 70% 1% annual chance",
    "24-hr precip > 50% 1% annual chance",
    "24-hr precip > 2% annual chance",
    "24-hr precip > 4% annual chance",
    "24-hr precip > 10% annual chance",
    "Ptype = snow",
    "Ptype = sleet",
    "Ptype = freezing rain",
    "Ptype = rain",
    "500mb hght<-1 STND ANOM",
    "500mb hght<-2 STND ANOM",
    "500mb hght<-3 STND ANOM",
    "500mb hght<-4 STND ANOM",
    "500mb hght<-5 STND ANOM",
    "500mb hght>1 STND ANOM",
    "500mb hght>2 STND ANOM",
    "500mb hght>3 STND ANOM",
    "700mb hght<-1 STND ANOM",
    "700mb hght<-2 STND ANOM",
    "700mb hght<-3 STND ANOM",
    "700mb hght<-4 STND ANOM",
    "700mb hght<-5 STND ANOM",
    "700mb hght>1 STND ANOM",
    "700mb hght>2 STND ANOM",
    "700mb hght>3 STND ANOM",
    "2m temp < 32F",
    "2m temp < 0F",
    "2m temp < -20F",
    "2m temp < -40F",
    "2m 6h min temp < 32F",
    "2m 6h min temp < 0F",
    "2m 6h min temp < -20F",
    "2m 6h min temp < -40F",
    "2m 6h min temp > 70F",
    "2m 6h max temp < -20F",
    "2m 6h max temp < -40F",
    "2m 6h max temp > 80F",
    "2m 6h max temp > 90F",
    "2m 6h max temp > 100F",
    "2m 6h max temp > 110F",
    "2m 6h max temp > 120F",
    "Heat Index > 100F",
    "Heat Index > 105F",
    "Heat Index > 110F",
    "Heat Index > 115F",
    "Heat Index > 120F",
    "T700 < 0C",
    "T700 > 10C",
    "T850 > 15C",
    "T850 > 20C",
    "T850 > 25C",
    "T850 < 0C",
    "T850 < -10C",
    "T850 < -20C",
    "T850 < -30C",
    "T850 < -40C",
    "700mb temp<-1 STND ANOM",
    "700mb temp<-2 STND ANOM",
    "700mb temp<-3 STND ANOM",
    "700mb temp<-4 STND ANOM",
    "700mb temp<-5 STND ANOM",
    "700mb temp>1 STND ANOM",
    "700mb temp>2 STND ANOM",
    "700mb temp>3 STND ANOM",
    "700mb temp>4 STND ANOM",
    "850mb temp<-1 STND ANOM",
    "850mb temp<-2 STND ANOM",
    "850mb temp<-3 STND ANOM",
    "850mb temp<-4 STND ANOM",
    "850mb temp<-5 STND ANOM",
    "850mb temp>1 STND ANOM",
    "850mb temp>2 STND ANOM",
    "850mb temp>3 STND ANOM",
    "850mb temp>4 STND ANOM",
    "PMSL < 965MB",
    "PMSL < 980MB",
    "PMSL < 990MB",
    "PMSL < 1000MB",
    "PMSL > 1030MB",
    "Td > 50F",
    "Td > 55F",
    "Td > 60F",
    "Td > 65F",
    "Td > 70F",
    "Td > 75F",
    "Td > 80F",
    "PW > 1.25IN",
    "PW > 1.50IN",
    "PW > 1.75IN",
    "PW > 2.00IN",
    "PW>1 STND ANOM",
    "PW>2 STND ANOM",
    "PW>3 STND ANOM",
    "PW>4 STND ANOM",
    "RH < 5%",
    "RH < 10%",
    "CLD CVR < 10%",
    "CLD CVR < 30%",
    "CLD CVR > 70%",
    "CLD CVR > 90%",
    "10M wind > 20MPH",
    "10M wind > 30MPH",
    "10M wind > 40MPH",
    "10M wind > 50MPH",
    "10M wind > 75MPH",
    "500mb height > 5940m",
    "500mb height > 6000m",
    "CAPE > 500J/kg",
    "CAPE > 1000J/kg",
    "CAPE > 1500J/kg",
    "CAPE > 2000J/kg",
    "CAPE > 3000J/kg",
    "CAPE > 4000J/kg",
    "CAPE > 5000J/kg",
    "CAPE > 6000J/kg",
    "CAPE > 8000J/kg",
    "CAPE > 10000J/kg"
};
