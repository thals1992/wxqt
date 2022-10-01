// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "UtilityWpcImages.h"
#include "../common/GlobalVariables.h"

vector<ObjectMenuTitle> UtilityWpcImages::titles{
    ObjectMenuTitle{"Surface Analysis", 7},
    ObjectMenuTitle{"Forecast Maps", 22},
    ObjectMenuTitle{"QPF", 27},
    ObjectMenuTitle{"Snow / Ice", 17},
    ObjectMenuTitle{"National Digital Forecast Database", 15},
    ObjectMenuTitle{"CPC Outlooks", 24},
    ObjectMenuTitle{"Aviation", 17},
    ObjectMenuTitle{"Space Weather", 3}
};

const vector<string> UtilityWpcImages::labels{
    "WPC Analysis, Radar, Warnings",
    "Surface Analysis with Obs (CONUS)",
    "Surface Analysis with Obs (NHEM)",
    "Analysis with Satellite (CONUS)",
    "Analysis with Satellite (NHEM)",
    "Analysis with Satellite (NHEM+PAC)",
    "High resolution surface analysis",

    "National Forecast Chart Day 1",
    "National Forecast Chart Day 2",
    "National Forecast Chart Day 3",
    "WPC Fronts/NDFD Weather Type - 12hr",
    "WPC Fronts/NDFD Weather Type - 24hr",
    "WPC Fronts/NDFD Weather Type - 36hr",
    "WPC Fronts/NDFD Weather Type - 48hr",
    "WPC Fronts/NDFD Weather Type - 72hr",
    "WPC Fronts/NDFD Weather Type - 96hr",
    "WPC Fronts/NDFD Weather Type - 120hr",
    "WPC Fronts/NDFD Weather Type - 144hr",
    "WPC Fronts/NDFD Weather Type - 168hr",
    "WPC Fronts - 3day",
    "WPC Fronts - 4day",
    "WPC Fronts - 5day",
    "WPC Fronts - 6day",
    "WPC Fronts - 7day",
    "Forecast map - 3day (NHEM)",
    "Forecast map - 4day (NHEM)",
    "Forecast map - 5day (NHEM)",
    "Forecast map - 6day (NHEM)",
    "Forecast map - 7day (NHEM)",

    "QPF Day 1",
    "QPF Day 2",
    "QPF Day 3",
    "QPF Day 1-2",
    "QPF Day 1-3",
    "QPF Day 4-5",
    "QPF Day 6-7",
    "QPF 5 Day Total",
    "QPF 7 Day Total",
    "WPC Day 1 Excessive Rainfall Outlook",
    "WPC Day 2 Excessive Rainfall Outlook",
    "WPC Day 3 Excessive Rainfall Outlook",
    "QPF Day 1 00-06 hr",
    "QPF Day 1 06-12 hr",
    "QPF Day 1 12-18 hr",
    "QPF Day 1 18-24 hr",
    "QPF Day 1 24-30 hr",
    "QPF Day 2 30-36 hr",
    "QPF Day 2 36-42 hr",
    "QPF Day 2 42-48 hr",
    "QPF Day 2 48-54 hr",
    "QPF Day 3 54-60 hr",
    "QPF Day 3 60-66 hr",
    "QPF Day 3 66-72 hr",
    "QPF Day 3 72-78 hr",
    "QPF Day 3 1/2 78-84 hr",
    "QPF Day 3 1/2 84-90 hr",

    "Snow Day 1 Prob > 4in",
    "Snow Day 1 Prob > 8in",
    "Snow Day 1 Prob > 12in",
    "Ice Day 1 Prob > 0.25in",
    "Snow Day 2 Prob > 4in",
    "Snow Day 2 Prob > 8in",
    "Snow Day 2 Prob > 12in",
    "Ice Day 2 Prob > 0.25in",
    "Snow Day 3 Prob > 4in",
    "Snow Day 3 Prob > 8in",
    "Snow Day 3 Prob > 12in",
    "Ice Day 3 Prob > 0.25in",
    "Snow/Sleet Day 4 Prob (experimental)",
    "Snow/Sleet Day 5 Prob (experimental)",
    "Snow/Sleet Day 6 Prob (experimental)",
    "Snow/Sleet Day 7 Prob (experimental)",
    "GLSEA Ice Analysis",

    "High Temperature",
    "Min Temperature",
    "Prob Precip (12hr)",
    "Predominant Weather",
    "Hazards",
    "Temperature",
    "Dewpoint",
    "Wind Speed (kts)",
    "Wind Gust (kts)",
    "Sky Cover",
    "Snow Amount (6hr)",
    "Ice Accumulation (6hr)",
    "Wave Height",
    "Apparent Temp",
    "Relative Humidity",

    "6 to 10 Day Outlooks - Temperature",
    "6 to 10 Day Outlooks - Precipitation",
    "8 to 14 Day Outlooks - Temperature",
    "8 to 14 Day Outlooks - Precipitation",
    "6-10 Day Heat Index Outlook",
    "8-14 Day Heat Index Outlook",
    "6-10 Day Lowest Wind Chill Outlook",
    "8-14 Day Lowest Wind Chill Outlook",
    "Week 3-4 Outlooks - Temperature ( Experimental )",
    "Week 3-4 Outlooks - Precipitation ( Experimental )",
    "One Month Outlook - Temperature",
    "One Month Outlook - Precipitation",
    "Three Month Outlook - Temperature",
    "Three Month Outlook - Precipitation",
    "US Monthly Drought Outlook",
    "US Seasonal Drought Outlook",
    "US Drought Monitor",
    "UV Index Forecast Day 1",
    "UV Index Forecast Day 2",
    "UV Index Forecast Day 3",
    "UV Index Forecast Day 4",
    "Day 3-7 U.S. Hazards Outlook",
    "Day 8-14 U.S. Hazards Outlook",
    "Global Tropics Hazards and Benefits Outlook",

    "AWC All active SIGMETs",
    "AWC Convective SIGMETs",
    "AWC Turbulence SIGMETs",
    "AWC Icing SIGMETs",
    "Aviation - WPC Surface Analysis",
    "Aviation - WPC 06 hour Forecast",
    "Aviation - WPC 12 hour Forecast",
    "Aviation - WPC 18 hour Forecast",
    "Aviation - WPC 24 hour Forecast",
    "Aviation - WPC 36 hour Forecast",
    "Aviation - WPC 48 hour Forecast",
    "Aviation - WPC 60 hour Forecast",
    "Aviation - WPC 3 day Forecast",
    "Aviation - WPC 4 day Forecast",
    "Aviation - WPC 5 day Forecast",
    "Aviation - WPC 6 day Forecast",
    "Aviation - WPC 7 day Forecast",

    "Aurora Forecast - North",
    "Aurora Forecast - South",
    "Estimated Planetary K index"
};

const vector<string> UtilityWpcImages::urls{
    "https://www.wpc.ncep.noaa.gov/images/wwd/radnat/NATRAD_24.gif",
    "https://www.wpc.ncep.noaa.gov/sfc/namussfcwbg.gif",
    "https://www.wpc.ncep.noaa.gov/sfc/90fwbg.gif",
    "https://www.wpc.ncep.noaa.gov/sfc/ussatsfc.gif",
    "https://www.wpc.ncep.noaa.gov/sfc/satsfcnps.gif",
    "https://www.wpc.ncep.noaa.gov/sfc/satsfc.gif",
    "https://www.wpc.ncep.noaa.gov/sfc/lrgnamsfc09wbg.gif",

    "https://www.wpc.ncep.noaa.gov/noaa/noaad1.gif",
    "https://www.wpc.ncep.noaa.gov/noaa/noaad2.gif",
    "https://www.wpc.ncep.noaa.gov/noaa/noaad3.gif",
    "https://www.wpc.ncep.noaa.gov/basicwx/92fndfd.gif",
    "https://www.wpc.ncep.noaa.gov/basicwx/94fndfd.gif",
    "https://www.wpc.ncep.noaa.gov/basicwx/96fndfd.gif",
    "https://www.wpc.ncep.noaa.gov/basicwx/98fndfd.gif",
    "https://www.wpc.ncep.noaa.gov/medr/display/wpcwx+frontsf072.gif",
    "https://www.wpc.ncep.noaa.gov/medr/display/wpcwx+frontsf096.gif",
    "https://www.wpc.ncep.noaa.gov/medr/display/wpcwx+frontsf120.gif",
    "https://www.wpc.ncep.noaa.gov/medr/display/wpcwx+frontsf144.gif",
    "https://www.wpc.ncep.noaa.gov/medr/display/wpcwx+frontsf168.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9jhwbg_conus.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9khwbg_conus.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9lhwbg_conus.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9mhwbg_conus.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9nhwbg_conus.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9jh.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9kh.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9lh.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9mh.gif",
    "https://www.wpc.ncep.noaa.gov/medr/9nh.gif",

    "https://www.wpc.ncep.noaa.gov/qpf/fill_94qwbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_98qwbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_99qwbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/d12_fill.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/d13_fill.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/95ep48iwbg_fill.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/97ep48iwbg_fill.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/p120i.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/p168i.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/94ewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/98ewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/99ewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_91ewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_92ewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_93ewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9eewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9fewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9gewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9hewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9iewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9jewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9kewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9lewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9oewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9newbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9pewbg.gif",
    "https://www.wpc.ncep.noaa.gov/qpf/fill_9qewbg.gif",

    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day1_psnow_gt_04_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day1_psnow_gt_08_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day1_psnow_gt_12_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day1_pice_gt_25_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day2_psnow_gt_04_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day2_psnow_gt_08_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day2_psnow_gt_12_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day2_pice_gt_25_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day3_psnow_gt_04_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day3_psnow_gt_08_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day3_psnow_gt_12_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/day3_pice_gt_25_conus.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/pwpf_d47/gif/prbww_sn25_f096.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/pwpf_d47/gif/prbww_sn25_f120.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/pwpf_d47/gif/prbww_sn25_f144.gif",
    GlobalVariables::nwsWPCwebsitePrefix + "/wwd/pwpf_d47/gif/prbww_sn25_f168.gif",
    "https://coastwatch.glerl.noaa.gov/glsea/cur/glsea_cur.png",

    "https://graphical.weather.gov/images/conus/MaxT",
    "https://graphical.weather.gov/images/conus/MinT",
    "https://graphical.weather.gov/images/conus/PoP12",
    "https://graphical.weather.gov/images/conus/Wx",
    "https://graphical.weather.gov/images/conus/WWA",
    "https://graphical.weather.gov/images/conus/T",
    "https://graphical.weather.gov/images/conus/Td",
    "https://graphical.weather.gov/images/conus/WindSpd",
    "https://graphical.weather.gov/images/conus/WindGust",
    "https://graphical.weather.gov/images/conus/Sky",
    "https://graphical.weather.gov/images/conus/SnowAmt",
    "https://graphical.weather.gov/images/conus/IceAccum",
    "https://graphical.weather.gov/images/conus/WaveHeight",
    "https://graphical.weather.gov/images/conus/ApparentT",
    "https://graphical.weather.gov/images/conus/RH",

    "https://www.cpc.ncep.noaa.gov/products/predictions/610day/610temp.new.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/610day/610prcp.new.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/814day/814temp.new.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/814day/814prcp.new.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/short_range/heat/himx.wcp0.08.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/short_range/heat/himx.wcp0.11.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/short_range/cold/LWCF.5.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/short_range/cold/LWCF.7.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/WK34/gifs/WK34temp.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/WK34/gifs/WK34prcp.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/30day/off15_temp.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/30day/off15_prcp.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/long_range/lead01/off01_temp.gif",
    "https://www.cpc.ncep.noaa.gov/products/predictions/long_range/lead01/off01_prcp.gif",
    "https://www.cpc.ncep.noaa.gov/products/expert_assessment/month_drought.png",
    "https://www.cpc.ncep.noaa.gov/products/expert_assessment/sdohomeweb.png",
    "https://droughtmonitor.unl.edu/data/png/current/current_usdm.png",
    "https://www.cpc.ncep.noaa.gov/products/stratosphere/uv_index/gif_files/uvi_usa_f1_wmo.gif",
    "https://www.cpc.ncep.noaa.gov/products/stratosphere/uv_index/gif_files/uvi_usa_f2_wmo.gif",
    "https://www.cpc.ncep.noaa.gov/products/stratosphere/uv_index/gif_files/uvi_usa_f3_wmo.gif",
    "https://www.cpc.ncep.noaa.gov/products/stratosphere/uv_index/gif_files/uvi_usa_f4_wmo.gif",
    "https://www.wpc.ncep.noaa.gov/threats/final/hazards_d3_7_contours.png",
    "https://www.cpc.ncep.noaa.gov/products/predictions/threats/hazards_d8_14_contours.png",
    "https://www.cpc.ncep.noaa.gov/products/precip/CWlink/ghazards/images/gth_full_update.png",

    "https://www.aviationweather.gov/data/products/sigmet/sigmet_all.gif",
    "https://www.aviationweather.gov/data/products/sigmet/sigmet_cb.gif",
    "https://www.aviationweather.gov/data/products/sigmet/sigmet_tb.gif",
    "https://www.aviationweather.gov/data/products/sigmet/sigmet_ib.gif",
    "https://www.aviationweather.gov/data/products/progs/F000_wpc_sfc.gif",
    "https://www.aviationweather.gov/data/products/progs/F006_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F012_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F018_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F024_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F036_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F048_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F060_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F072_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F096_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F120_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F144_wpc_prog.gif",
    "https://www.aviationweather.gov/data/products/progs/F168_wpc_prog.gif",

    "https://services.swpc.noaa.gov/images/animations/ovation/north/latest.jpg",
    "https://services.swpc.noaa.gov/images/animations/ovation/south/latest.jpg",
    "https://services.swpc.noaa.gov/images/planetary-k-index.gif"
};
