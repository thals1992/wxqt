// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "radar/RadarSites.h"

const unordered_map<string, string> RadarSites::radarIdToName{
    {"JUA", "PR, San Juan"},
    {"CBW", "ME, Loring AFB"},
    {"GYX", "ME, Portland"},
    {"CXX", "VT, Burlington"},
    {"BOX", "MA, Boston"},
    {"ENX", "NY, Albany"},
    {"BGM", "NY, Binghamton"},
    {"BUF", "NY, Buffalo"},
    {"TYX", "NY, Montague"},
    {"OKX", "NY, New York City"},
    {"DOX", "DE, Dover AFB"},
    {"DIX", "PA, Philadelphia"},
    {"PBZ", "PA, Pittsburgh"},
    {"CCX", "PA, State College"},
    {"RLX", "WV, Charleston"},
    {"AKQ", "VA, Norfolk/Richmond"},
    {"FCX", "VA, Roanoke"},
    {"LWX", "VA, Sterling"},
    {"MHX", "NC, Morehead City"},
    {"RAX", "NC, Raleigh/Durham"},
    {"LTX", "NC, Wilmington"},
    {"CLX", "SC, Charleston"},
    {"CAE", "SC, Columbia"},
    {"GSP", "SC, Greer"},
    {"FFC", "GA, Atlanta"},
    {"VAX", "GA, Moody AFB"},
    {"JGX", "GA, Robins AFB"},
    {"EVX", "FL, Eglin AFB"},
    {"JAX", "FL, Jacksonville"},
    {"BYX", "FL, Key West"},
    {"MLB", "FL, Melbourne"},
    {"AMX", "FL, Miami"},
    {"TLH", "FL, Tallahassee"},
    {"TBW", "FL, Tampa"},
    {"BMX", "AL, Birmingham"},
    {"EOX", "AL, Fort Rucker"},
    {"HTX", "AL, Huntsville"},
    {"MXX", "AL, Maxwell AFB"},
    {"MOB", "AL, Mobile"},
    {"DGX", "MS, Brandon/Jackson"},
    {"GWX", "MS, Columbus AFB"},
    {"MRX", "TN, Knoxville/Tri Cities"},
    {"NQA", "TN, Memphis"},
    {"OHX", "TN, Nashville"},
    {"HPX", "KY, Fort Campbell"},
    {"JKL", "KY, Jackson"},
    {"LVX", "KY, Louisville"},
    {"PAH", "KY, Paducah"},
    {"ILN", "OH, Wilmington"},
    {"CLE", "OH, Cleveland"},
    {"DTX", "MI, Detroit/Pontiac"},
    {"APX", "MI, Gaylord"},
    {"GRR", "MI, Grand Rapids"},
    {"MQT", "MI, Marquette"},
    {"VWX", "IN, Evansville"},
    {"IND", "IN, Indianapolis"},
    {"IWX", "IN, North Webster"},
    {"LOT", "IL, Chicago"},
    {"ILX", "IL, Lincoln"},
    {"GRB", "WI, Green Bay"},
    {"ARX", "WI, La Crosse"},
    {"MKX", "WI, Milwaukee"},
    {"DLH", "MN, Duluth"},
    {"MPX", "MN, Minneapolis/St. Paul"},
    {"DVN", "IA, Davenport"},
    {"DMX", "IA, Des Moines"},
    {"EAX", "MO, Kansas City"},
    {"SGF", "MO, Springfield"},
    {"LSX", "MO, St. Louis"},
    {"SRX", "AR, Fort Smith"},
    {"LZK", "AR, Little Rock"},
    {"POE", "LA, Fort Polk"},
    {"LCH", "LA, Lake Charles"},
    {"LIX", "LA, New Orleans"},
    {"SHV", "LA, Shreveport"},
    {"AMA", "TX, Amarillo"},
    {"EWX", "TX, Austin/San Antonio"},
    {"BRO", "TX, Brownsville"},
    {"CRP", "TX, Corpus Christi"},
    {"FWS", "TX, Dallas/Ft. Worth"},
    {"DYX", "TX, Dyess AFB"},
    {"EPZ", "TX, El Paso"},
    {"GRK", "TX, Fort Hood"},
    {"HGX", "TX, Houston/Galveston"},
    {"DFX", "TX, Laughlin AFB"},
    {"LBB", "TX, Lubbock"},
    {"MAF", "TX, Midland/Odessa"},
    {"SJT", "TX, San Angelo"},
    {"FDR", "OK, Frederick"},
    {"TLX", "OK, Oklahoma City"},
    {"INX", "OK, Tulsa"},
    {"VNX", "OK, Vance AFB"},
    {"DDC", "KS, Dodge City"},
    {"GLD", "KS, Goodland"},
    {"TWX", "KS, Topeka"},
    {"ICT", "KS, Wichita"},
    {"UEX", "NE, Grand Island/Hastings"},
    {"LNX", "NE, North Platte"},
    {"OAX", "NE, Omaha"},
    {"ABR", "SD, Aberdeen"},
    {"UDX", "SD, Rapid City"},
    {"FSD", "SD, Sioux Falls"},
    {"BIS", "ND, Bismarck"},
    {"MVX", "ND, Grand Forks (Mayville)"},
    {"MBX", "ND, Minot AFB"},
    {"BLX", "MT, Billings"},
    {"GGW", "MT, Glasgow"},
    {"TFX", "MT, Great Falls"},
    {"MSX", "MT, Missoula"},
    {"CYS", "WY, Cheyenne"},
    {"RIW", "WY, Riverton"},
    {"FTG", "CO, Denver"},
    {"GJX", "CO, Grand Junction"},
    {"PUX", "CO, Pueblo"},
    {"ABX", "NM, Albuquerque"},
    {"FDX", "NM, Cannon AFB"},
    {"HDX", "NM, Holloman AFB"},
    {"FSX", "AZ, Flagstaff"},
    {"IWA", "AZ, Phoenix"},
    {"EMX", "AZ, Tucson"},
    {"YUX", "AZ, Yuma"},
    {"ICX", "UT, Cedar City"},
    {"MTX", "UT, Salt Lake City"},
    {"CBX", "ID, Boise"},
    {"SFX", "ID, Pocatello/Idaho Falls"},
    {"LRX", "NV, Elko"},
    {"ESX", "NV, Las Vegas"},
    {"RGX", "NV, Reno"},
    {"BBX", "CA, Beale AFB"},
    {"EYX", "CA, Edwards AFB"},
    {"BHX", "CA, Eureka"},
    {"VTX", "CA, Los Angeles"},
    {"DAX", "CA, Sacramento"},
    {"NKX", "CA, San Diego"},
    {"MUX", "CA, San Francisco"},
    {"HNX", "CA, San Joaquin Valley"},
    {"SOX", "CA, Santa Ana Mountains"},
    {"VBX", "CA, Vandenberg AFB"},
    {"HKI", "HI, Kauai"},
    {"HKM", "HI, Kohala"},
    {"HMO", "HI, Molokai"},
    {"HWA", "HI, South Shore"},
    {"MAX", "OR, Medford"},
    {"PDT", "OR, Pendleton"},
    {"RTX", "OR, Portland"},
    {"LGX", "WA, Langley Hill"},
    {"ATX", "WA, Seattle/Tacoma"},
    {"OTX", "WA, Spokane"},
    {"ABC", "AK, Bethel"},
    {"APD", "AK, Fairbanks/Pedro Dome"},
    {"AHG", "AK, Kenai"},
    {"AKC", "AK, King Salmon"},
    {"AIH", "AK, Middleton Island"},
    {"AEC", "AK, Nome"},
    {"ACG", "AK, Sitka/Biorka Island"},
    {"GUA", "GU, Andersen AFB"},
    {"PLA", "NA, Lajes Field, Azores"},
    {"KJK", "NA, Kunsan Air Base, South Korea"},
    {"KSG", "NA, Camp Humphreys, South Korea"},
    {"ODN", "NA, Kadena Air Base, Japan"},

    {"TLVE", "OH, Cleveland"},
    {"TADW", "MD, Andrews Air Force Base"},
    {"TATL", "GA, Atlanta"},
    {"TBWI", "MD, Baltimore/Wash"},
    {"TBOS", "MA, Boston"},
    {"TCLT", "NC, Charlotte"},
    {"TMDW", "IL, Chicago Midway"},
    {"TORD", "IL, Chicago O'Hare"},
    {"TCLE", "OH, Cleveland"},
    {"TCMH", "OH, Columbus"},
    {"TCVG", "OH, Covington"},
    {"TDAL", "TX, Dallas Love Field"},
    {"TDFW", "TX, Dallas/Ft. Worth"},
    {"TDAY", "OH, Dayton"},
    {"TDEN", "CO, Denver"},
    {"TDTW", "MI, Detroit"},
    {"TIAD", "VA, Dulles"},
    {"TFLL", "FL, Fort Lauderdale"},
    {"THOU", "TX, Houston Hobby"},
    {"TIAH", "TX, Houston International"},
    {"TIDS", "IN, Indianapolis"},
    {"TMCI", "MO, Kansas City"},
    {"TLAS", "NV, Las Vegas"},
    {"TSDF", "KY, Louisville"},
    {"TMEM", "TN, Memphis"},
    {"TMIA", "FL, Miami"},
    {"TMKE", "WI, Milwaukee"},
    {"TMSP", "MN, Minneapolis"},
    {"TBNA", "TN, Nashville"},
    {"TMSY", "LA, New Orleans"},
    {"TJFK", "NY, New York City"},
    {"TEWR", "NJ, Newark"},
    {"TOKC", "OK, Oklahoma City"},
    {"TMCO", "FL, Orlando International"},
    {"TPHL", "PA, Philadelphia"},
    {"TPHX", "AZ, Phoenix"},
    {"TPIT", "PA, Pittsburgh"},
    {"TRDU", "NC, Raleigh Durham"},
    {"TSLC", "UT, Salt Lake City"},
    {"TSJU", "PR, San Juan"},
    {"TSTL", "MO, St Louis"},
    {"TTPA", "FL, Tampa Bay"},
    {"TTUL", "OK, Tulsa"},
    {"TDCA", "MD, Washington National"},
    {"TPBI", "FL, West Palm Beach"},
    {"TICH", "KS, Wichita"}
};

const unordered_map<string, string> RadarSites::radarSiteToLat{
    {"TYX", "43.756"},
    {"ABR", "45.456"},
    {"ENX", "42.586"},
    {"ABX", "35.15"},
    {"FDR", "34.362"},
    {"AMA", "35.233"},
    {"AHG", "60.726"},
    {"GUA", "13.456"},
    {"FFC", "33.363"},
    {"EWX", "29.704"},
    {"BBX", "39.496"},
    {"ABC", "60.792"},
    {"BLX", "45.854"},
    {"BGM", "42.2"},
    {"BMX", "33.171"},
    {"BIS", "46.771"},
    {"CBX", "43.49"},
    {"BOX", "41.956"},
    {"BRO", "25.916"},
    {"BUF", "42.949"},
    {"CXX", "44.511"},
    {"FDX", "34.634"},
    {"ICX", "37.591"},
    {"CLX", "32.655"},
    {"RLX", "38.311"},
    {"CYS", "41.152"},
    {"LOT", "41.604"},
    {"ILN", "39.42"},
    {"CLE", "41.413"},
    {"CAE", "33.949"},
    {"GWX", "33.897"},
    {"CRP", "27.784"},
    {"FWS", "32.573"},
    {"DVN", "41.612"},
    {"FTG", "39.786"},
    {"DMX", "41.731"},
    {"DTX", "42.7"},
    {"DDC", "37.761"},
    {"DOX", "38.826"},
    {"DLH", "46.837"},
    {"DYX", "32.538"},
    {"EYX", "35.098"},
    {"EVX", "30.565"},
    {"EPZ", "31.873"},
    {"LRX", "40.74"},
    {"BHX", "40.499"},
    {"APD", "65.035"},
    {"FSX", "34.574"},
    {"HPX", "36.737"},
    {"GRK", "30.722"},
    {"POE", "31.155"},
    {"EOX", "31.46"},
    {"SRX", "35.29"},
    {"IWX", "41.359"},
    {"APX", "44.906"},
    {"GGW", "48.206"},
    {"GLD", "39.367"},
    {"MVX", "47.528"},
    {"GJX", "39.062"},
    {"GRR", "42.894"},
    {"TFX", "47.46"},
    {"GRB", "44.499"},
    {"GSP", "34.883"},
    {"UEX", "40.321"},
    {"HDX", "33.077"},
    {"CBW", "46.039"},
    {"HGX", "29.472"},
    {"HTX", "34.931"},
    {"IND", "39.708"},
    {"JKL", "37.591"},
    {"JAX", "30.485"},
    {"EAX", "38.81"},
    {"BYX", "24.597"},
    {"AKC", "58.68"},
    {"MRX", "36.168"},
    {"ARX", "43.823"},
    {"LCH", "30.125"},
    {"ESX", "35.701"},
    {"DFX", "29.273"},
    {"ILX", "40.15"},
    {"LZK", "34.836"},
    {"VTX", "34.412"},
    {"LVX", "37.975"},
    {"LBB", "33.654"},
    {"MQT", "46.531"},
    {"MXX", "32.537"},
    {"MAX", "42.081"},
    {"MLB", "28.113"},
    {"NQA", "35.345"},
    {"AMX", "25.611"},
    {"AIH", "59.46"},
    {"MAF", "31.943"},
    {"MKX", "42.968"},
    {"MPX", "44.849"},
    {"MBX", "48.393"},
    {"MSX", "47.041"},
    {"MOB", "30.679"},
    {"HMO", "21.133"},
    {"VAX", "30.89"},
    {"MHX", "34.776"},
    {"OHX", "36.247"},
    {"LIX", "30.337"},
    {"OKX", "40.865"},
    {"AEC", "64.512"},
    {"AKQ", "36.984"},
    {"LNX", "41.958"},
    {"TLX", "35.333"},
    {"OAX", "41.32"},
    {"PAH", "37.068"},
    {"PDT", "45.691"},
    {"DIX", "39.947"},
    {"IWA", "33.289"},
    {"PBZ", "40.532"},
    {"SFX", "43.106"},
    {"GYX", "43.891"},
    {"RTX", "45.715"},
    {"PUX", "38.46"},
    {"RAX", "35.665"},
    {"UDX", "44.125"},
    {"RGX", "39.754"},
    {"RIW", "43.066"},
    {"FCX", "37.024"},
    {"JGX", "32.675"},
    {"DAX", "38.501"},
    {"LSX", "38.699"},
    {"MTX", "41.263"},
    {"SJT", "31.371"},
    {"NKX", "32.919"},
    {"MUX", "37.155"},
    {"HNX", "36.314"},
    {"JUA", "18.116"},
    {"SOX", "33.818"},
    {"ATX", "48.195"},
    {"SHV", "32.451"},
    {"FSD", "43.588"},
    {"ACG", "56.853"},
    {"HKI", "21.894"},
    {"HWA", "19.095"},
    {"OTX", "47.681"},
    {"SGF", "37.235"},
    {"CCX", "40.923"},
    {"LWX", "38.976"},
    {"TLH", "30.398"},
    {"TBW", "27.705"},
    {"TWX", "38.997"},
    {"EMX", "31.894"},
    {"INX", "36.175"},
    {"VNX", "36.741"},
    {"VBX", "34.839"},
    {"ICT", "37.654"},
    {"LTX", "33.989"},
    {"YUX", "32.495"},
    {"LGX", "47.116"},
    {"DGX", "32.28"},
    {"VWX", "38.26"},
    {"HKM", "20.125"},
    {"TDTW", "42.11111"},
    {"TADW", "5"},
    {"TATL", "33.646193"},
    {"TBNA", "35.979079"},
    {"TBOS", "42.15806"},
    {"TBWI", "39.09056"},
    {"TLVE", "41.289372"},
    {"TCLT", "35.337269"},
    {"TCMH", "40.00611"},
    {"TCVG", "38.89778"},
    {"TDAL", "32.92494"},
    {"TDAY", "40.021376"},
    {"TDCA", "38.758853"},
    {"TDEN", "39.72722"},
    {"TDFW", "33.064286"},
    {"TEWR", "40.593397"},
    {"TFLL", "26.142601"},
    {"THOU", "29.515852"},
    {"TIAD", "39.083667"},
    {"TIAH", "30.06472"},
    {"TICH", "37.506844"},
    {"TIDS", "39.636556"},
    {"TJFK", "40.588633"},
    {"TLAS", "36.144"},
    {"TMCI", "39.49861"},
    {"TMCO", "28.343125"},
    {"TMDW", "41.6514"},
    {"TMEM", "34.896044"},
    {"TMIA", "25.757083"},
    {"TMKE", "42.81944"},
    {"TMSP", "44.870902"},
    {"TMSY", "30.021389"},
    {"TOKC", "35.27611"},
    {"TORD", "41.796589"},
    {"TPBI", "26.687812"},
    {"TPHL", "39.950061"},
    {"TPHX", "33.420352"},
    {"TPIT", "40.501066"},
    {"TRDU", "36.001401"},
    {"TSDF", "38.04581"},
    {"TSJU", "18.47394"},
    {"TSLC", "40.967222"},
    {"TSTL", "38.804691"},
    {"TTPA", "27.85867"},
    {"TTUL", "36.070184"}
};

const unordered_map<string, string> RadarSites::radarSiteToLon{
    {"TYX", "75.68"},
    {"ABR", "98.413"},
    {"ENX", "74.064"},
    {"ABX", "106.824"},
    {"FDR", "98.977"},
    {"AMA", "101.709"},
    {"AHG", "151.351"},
    {"GUA", "144.811"},
    {"FFC", "84.566"},
    {"EWX", "98.029"},
    {"BBX", "121.632"},
    {"ABC", "161.876"},
    {"BLX", "108.607"},
    {"BGM", "75.985"},
    {"BMX", "86.77"},
    {"BIS", "100.76"},
    {"CBX", "116.236"},
    {"BOX", "71.137"},
    {"BRO", "97.419"},
    {"BUF", "78.737"},
    {"CXX", "73.166"},
    {"FDX", "103.619"},
    {"ICX", "112.862"},
    {"CLX", "81.042"},
    {"RLX", "81.723"},
    {"CYS", "104.806"},
    {"LOT", "88.085"},
    {"ILN", "83.822"},
    {"CLE", "81.86"},
    {"CAE", "81.119"},
    {"GWX", "88.329"},
    {"CRP", "97.511"},
    {"FWS", "97.303"},
    {"DVN", "90.581"},
    {"FTG", "104.546"},
    {"DMX", "93.723"},
    {"DTX", "83.472"},
    {"DDC", "99.969"},
    {"DOX", "75.44"},
    {"DLH", "92.21"},
    {"DYX", "99.254"},
    {"EYX", "117.561"},
    {"EVX", "85.922"},
    {"EPZ", "106.698"},
    {"LRX", "116.803"},
    {"BHX", "124.292"},
    {"APD", "147.501"},
    {"FSX", "111.198"},
    {"HPX", "87.285"},
    {"GRK", "97.383"},
    {"POE", "92.976"},
    {"EOX", "85.459"},
    {"SRX", "94.362"},
    {"IWX", "85.7"},
    {"APX", "84.72"},
    {"GGW", "106.625"},
    {"GLD", "101.7"},
    {"MVX", "97.325"},
    {"GJX", "108.214"},
    {"GRR", "85.545"},
    {"TFX", "111.385"},
    {"GRB", "88.111"},
    {"GSP", "82.22"},
    {"UEX", "98.442"},
    {"HDX", "106.12"},
    {"CBW", "67.806"},
    {"HGX", "95.079"},
    {"HTX", "86.084"},
    {"IND", "86.28"},
    {"JKL", "83.313"},
    {"JAX", "81.702"},
    {"EAX", "94.264"},
    {"BYX", "81.703"},
    {"AKC", "156.627"},
    {"MRX", "83.402"},
    {"ARX", "91.191"},
    {"LCH", "93.216"},
    {"ESX", "114.891"},
    {"DFX", "100.28"},
    {"ILX", "89.337"},
    {"LZK", "92.262"},
    {"VTX", "119.179"},
    {"LVX", "85.944"},
    {"LBB", "101.814"},
    {"MQT", "87.548"},
    {"MXX", "85.79"},
    {"MAX", "122.717"},
    {"MLB", "80.654"},
    {"NQA", "89.873"},
    {"AMX", "80.413"},
    {"AIH", "146.303"},
    {"MAF", "102.189"},
    {"MKX", "88.551"},
    {"MPX", "93.565"},
    {"MBX", "100.864"},
    {"MSX", "113.986"},
    {"MOB", "88.24"},
    {"HMO", "157.18"},
    {"VAX", "83.002"},
    {"MHX", "76.876"},
    {"OHX", "86.563"},
    {"LIX", "89.825"},
    {"OKX", "72.864"},
    {"AEC", "165.293"},
    {"AKQ", "77.008"},
    {"LNX", "100.576"},
    {"TLX", "97.278"},
    {"OAX", "96.367"},
    {"PAH", "88.772"},
    {"PDT", "118.853"},
    {"DIX", "74.411"},
    {"IWA", "111.67"},
    {"PBZ", "80.218"},
    {"SFX", "112.686"},
    {"GYX", "70.256"},
    {"RTX", "122.965"},
    {"PUX", "104.181"},
    {"RAX", "78.49"},
    {"UDX", "102.83"},
    {"RGX", "119.462"},
    {"RIW", "108.477"},
    {"FCX", "80.274"},
    {"JGX", "83.351"},
    {"DAX", "121.678"},
    {"LSX", "90.683"},
    {"MTX", "112.448"},
    {"SJT", "100.492"},
    {"NKX", "117.041"},
    {"MUX", "121.898"},
    {"HNX", "119.632"},
    {"JUA", "66.078"},
    {"SOX", "117.636"},
    {"ATX", "122.496"},
    {"SHV", "93.841"},
    {"FSD", "96.729"},
    {"ACG", "135.528"},
    {"HKI", "159.552"},
    {"HWA", "155.569"},
    {"OTX", "117.626"},
    {"SGF", "93.4"},
    {"CCX", "78.004"},
    {"LWX", "77.487"},
    {"TLH", "84.329"},
    {"TBW", "82.402"},
    {"TWX", "96.232"},
    {"EMX", "110.63"},
    {"INX", "95.564"},
    {"VNX", "98.128"},
    {"VBX", "120.398"},
    {"ICT", "97.443"},
    {"LTX", "78.429"},
    {"YUX_X", "32.495"},
    {"YUX", "114.656"},
    {"LGX", "124.107"},
    {"DGX", "89.984"},
    {"VWX", "87.724"},
    {"HKM", "155.778"},
    {"TDTW", "83.515"},
    {"TADW", "5"},
    {"TATL", "84.262233"},
    {"TBNA", "86.661691"},
    {"TBOS", "70.93389"},
    {"TBWI", "76.63"},
    {"TLVE", "82.007419"},
    {"TCLT", "80.885006"},
    {"TCMH", "82.71556"},
    {"TCVG", "84.58028"},
    {"TDAL", "96.968473"},
    {"TDAY", "84.123077"},
    {"TDCA", "76.961837"},
    {"TDEN", "104.52639"},
    {"TDFW", "96.915554"},
    {"TEWR", "74.270164"},
    {"TFLL", "80.34382"},
    {"THOU", "95.241692"},
    {"TIAD", "77.529224"},
    {"TIAH", "95.5675"},
    {"TICH", "97.437228"},
    {"TIDS", "86.435286"},
    {"TJFK", "73.880303"},
    {"TLAS", "115.007"},
    {"TMCI", "94.74167"},
    {"TMCO", "81.324674"},
    {"TMDW", "87.7294"},
    {"TMEM", "89.992727"},
    {"TMIA", "80.491076"},
    {"TMKE", "88.04611"},
    {"TMSP", "92.932257"},
    {"TMSY", "90.402919"},
    {"TOKC", "97.51"},
    {"TORD", "87.857628"},
    {"TPBI", "80.272931"},
    {"TPHL", "75.069979"},
    {"TPHX", "112.16318"},
    {"TPIT", "80.486586"},
    {"TRDU", "78.697942"},
    {"TSDF", "85.610641"},
    {"TSJU", "66.17891"},
    {"TSLC", "111.929722"},
    {"TSTL", "90.488558"},
    {"TTPA", "82.51755"},
    {"TTUL", "95.826313"}
};
