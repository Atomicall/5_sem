EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Label 4000 1250 0    50   ~ 0
U_vcc
Text Notes 3350 1250 0    50   ~ 0
Usb 5v
Text Notes 3350 1350 0    50   ~ 0
D-
Text Notes 3350 1450 0    50   ~ 0
D+
$Comp
L Device:R_Small R3
U 1 1 6192F4FE
P 4550 1150
F 0 "R3" H 4609 1196 50  0000 L CNN
F 1 "2.2k" H 4609 1105 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 4550 1150 50  0001 C CNN
F 3 "~" H 4550 1150 50  0001 C CNN
	1    4550 1150
	1    0    0    -1  
$EndComp
Text Label 5100 1350 0    50   ~ 0
D-
Text Label 5100 1450 0    50   ~ 0
D+
$Comp
L Device:R_Small R1
U 1 1 6192F506
P 4100 1350
F 0 "R1" V 4250 1150 50  0000 L CNN
F 1 "68" V 4150 1150 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 4100 1350 50  0001 C CNN
F 3 "~" H 4100 1350 50  0001 C CNN
	1    4100 1350
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R2
U 1 1 6192F50C
P 4100 1450
F 0 "R2" V 4100 1250 50  0000 L CNN
F 1 "68" V 4000 1250 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 4100 1450 50  0001 C CNN
F 3 "~" H 4100 1450 50  0001 C CNN
	1    4100 1450
	0    -1   -1   0   
$EndComp
$Comp
L Device:D_Zener_Small D2
U 1 1 6192F512
P 4900 1600
F 0 "D2" V 4850 1750 50  0000 C CNN
F 1 "3.6V" V 4950 1750 50  0000 C CNN
F 2 "Diode_THT:D_DO-41_SOD81_P7.62mm_Horizontal" V 4900 1600 50  0001 C CNN
F 3 "~" V 4900 1600 50  0001 C CNN
	1    4900 1600
	0    1    1    0   
$EndComp
Wire Wire Line
	4550 1350 5100 1350
Connection ~ 4550 1350
$Comp
L Device:D_Zener_Small D1
U 1 1 6192F51B
P 4550 1600
F 0 "D1" V 4500 1700 50  0000 C CNN
F 1 "3.6V" V 4600 1750 50  0000 C CNN
F 2 "Diode_THT:D_DO-41_SOD81_P7.62mm_Horizontal" V 4550 1600 50  0001 C CNN
F 3 "~" V 4550 1600 50  0001 C CNN
	1    4550 1600
	0    1    1    0   
$EndComp
Wire Wire Line
	4550 1350 4550 1500
Wire Wire Line
	4900 1450 4900 1500
Wire Wire Line
	4900 1450 5100 1450
Wire Wire Line
	4550 1250 4550 1350
Wire Wire Line
	3650 1250 4000 1250
$Comp
L Connector:Conn_01x04_Female J3
U 1 1 6192F545
P 3850 1350
F 0 "J3" H 3742 925 50  0000 C CNN
F 1 "USB" H 3742 1016 50  0000 C CNN
F 2 "usb_type_c_female_board_Aliexpress:usb_type_c_female_board_Aliexpress" H 3850 1350 50  0001 C CNN
F 3 "~" H 3850 1350 50  0001 C CNN
	1    3850 1350
	1    0    0    -1  
$EndComp
Text Notes 3350 1550 0    50   ~ 0
U_Gnd
$Comp
L power:GND #PWR03
U 1 1 6192F555
P 4000 1550
F 0 "#PWR03" H 4000 1300 50  0001 C CNN
F 1 "GND" H 4005 1377 50  0000 C CNN
F 2 "" H 4000 1550 50  0001 C CNN
F 3 "" H 4000 1550 50  0001 C CNN
	1    4000 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 1550 4000 1550
Connection ~ 4550 1700
$Comp
L power:GND #PWR04
U 1 1 6192F55D
P 4550 1750
F 0 "#PWR04" H 4550 1500 50  0001 C CNN
F 1 "GND" H 4555 1577 50  0000 C CNN
F 2 "" H 4550 1750 50  0001 C CNN
F 3 "" H 4550 1750 50  0001 C CNN
	1    4550 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4550 1700 4550 1750
Text Label 4650 1050 0    50   ~ 0
D_pullup
Wire Wire Line
	4650 1050 4550 1050
Wire Wire Line
	4550 1700 4900 1700
$Comp
L 4xxx:HEF4093B U1
U 1 1 6180FC41
P 7550 3050
F 0 "U1" H 7550 3375 50  0000 C CNN
F 1 "HEF4093B" H 7550 3284 50  0000 C CNN
F 2 "Package_SO:SO-14_3.9x8.65mm_P1.27mm" H 7550 3050 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/HEF4093B.pdf" H 7550 3050 50  0001 C CNN
	1    7550 3050
	1    0    0    -1  
$EndComp
$Comp
L 4xxx:HEF4093B U1
U 5 1 618124BF
P 10300 4350
F 0 "U1" H 10530 4396 50  0000 L CNN
F 1 "HEF4093B" H 10530 4305 50  0000 L CNN
F 2 "Package_SO:SO-14_3.9x8.65mm_P1.27mm" H 10300 4350 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/HEF4093B.pdf" H 10300 4350 50  0001 C CNN
	5    10300 4350
	1    0    0    -1  
$EndComp
Text Label 2100 1500 0    50   ~ 0
5V_Ard
Wire Wire Line
	2100 1500 2050 1500
$Comp
L Device:C_Small C1
U 1 1 6183595C
P 1850 1250
F 0 "C1" V 2050 1300 50  0000 L CNN
F 1 "100uF 5X11" V 1950 1100 50  0000 L CNN
F 2 "Capacitor_THT:C_Radial_D5.0mm_H11.0mm_P2.00mm" H 1850 1250 50  0001 C CNN
F 3 "~" H 1850 1250 50  0001 C CNN
	1    1850 1250
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R6
U 1 1 61836865
P 6900 1300
F 0 "R6" V 7100 1300 50  0000 L CNN
F 1 "2.2k" V 7000 1250 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 6900 1300 50  0001 C CNN
F 3 "~" H 6900 1300 50  0001 C CNN
	1    6900 1300
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR01
U 1 1 61844AB5
P 1850 3700
F 0 "#PWR01" H 1850 3450 50  0001 C CNN
F 1 "GND" H 1855 3527 50  0000 C CNN
F 2 "" H 1850 3700 50  0001 C CNN
F 3 "" H 1850 3700 50  0001 C CNN
	1    1850 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1850 3600 1850 3700
Wire Wire Line
	1950 3600 1950 3700
Wire Wire Line
	1950 3700 1850 3700
Connection ~ 1850 3700
Text Label 7950 3050 0    50   ~ 0
Butt1
$Comp
L Device:C_Small C5
U 1 1 6185F775
P 10600 3950
F 0 "C5" H 10692 3996 50  0000 L CNN
F 1 "0.1uF" H 10692 3905 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 10600 3950 50  0001 C CNN
F 3 "~" H 10600 3950 50  0001 C CNN
	1    10600 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	10300 3850 10600 3850
Wire Wire Line
	10600 4050 10600 4850
Wire Wire Line
	10600 4850 10300 4850
$Comp
L power:GND #PWR08
U 1 1 618620E8
P 10300 4900
F 0 "#PWR08" H 10300 4650 50  0001 C CNN
F 1 "GND" H 10305 4727 50  0000 C CNN
F 2 "" H 10300 4900 50  0001 C CNN
F 3 "" H 10300 4900 50  0001 C CNN
	1    10300 4900
	1    0    0    -1  
$EndComp
Wire Wire Line
	10300 4900 10300 4850
Connection ~ 10300 4850
Text Label 10150 3800 2    50   ~ 0
5V_Ard
Wire Wire Line
	10150 3800 10300 3800
Wire Wire Line
	10300 3800 10300 3850
Connection ~ 10300 3850
$Comp
L Switch:SW_Push SW1
U 1 1 61883E17
P 6200 3500
F 0 "SW1" V 6300 3950 50  0000 R CNN
F 1 "SW_Push" V 6200 3950 50  0000 R CNN
F 2 "Button_Switch_Keyboard:SW_Cherry_MX_1.00u_Plate" H 6200 3700 50  0001 C CNN
F 3 "~" H 6200 3700 50  0001 C CNN
	1    6200 3500
	0    -1   -1   0   
$EndComp
Text Label 6100 2200 2    50   ~ 0
5V_Ard
$Comp
L Device:R_Small R4
U 1 1 61883E1E
P 6350 2500
F 0 "R4" H 6409 2546 50  0000 L CNN
F 1 "???20k" H 6409 2455 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 6350 2500 50  0001 C CNN
F 3 "~" H 6350 2500 50  0001 C CNN
	1    6350 2500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6100 2200 6350 2200
Wire Wire Line
	6350 2200 6350 2400
Wire Wire Line
	7200 2950 7200 3150
$Comp
L Device:C_Small C2
U 1 1 61883E27
P 6900 3500
F 0 "C2" H 6992 3546 50  0000 L CNN
F 1 "100nF???10nF" H 6992 3455 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 6900 3500 50  0001 C CNN
F 3 "~" H 6900 3500 50  0001 C CNN
	1    6900 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 3300 6350 3300
$Comp
L power:GND #PWR05
U 1 1 61883E2E
P 6200 4000
F 0 "#PWR05" H 6200 3750 50  0001 C CNN
F 1 "GND" H 6205 3827 50  0000 C CNN
F 2 "" H 6200 4000 50  0001 C CNN
F 3 "" H 6200 4000 50  0001 C CNN
	1    6200 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 3700 6200 4000
Connection ~ 6200 3700
$Comp
L Device:R_Small R7
U 1 1 61883E36
P 6900 2950
F 0 "R7" V 7100 3000 50  0000 L CNN
F 1 "2.2k" V 7000 2800 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 6900 2950 50  0001 C CNN
F 3 "~" H 6900 2950 50  0001 C CNN
	1    6900 2950
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7000 2950 7200 2950
Connection ~ 7200 2950
Wire Wire Line
	7200 2950 7250 2950
Wire Wire Line
	6800 2950 6350 2950
Wire Wire Line
	6350 2950 6350 2600
Wire Wire Line
	6350 2950 6350 3300
Connection ~ 6350 2950
Connection ~ 6350 3300
Wire Wire Line
	6350 3300 6600 3300
Wire Wire Line
	7950 3050 7850 3050
Wire Wire Line
	7250 3150 7200 3150
$Comp
L Device:R_Small R5
U 1 1 61883E48
P 6700 3300
F 0 "R5" V 6900 3350 50  0000 L CNN
F 1 "???100k" V 6800 3150 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 6700 3300 50  0001 C CNN
F 3 "~" H 6700 3300 50  0001 C CNN
	1    6700 3300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6800 3300 6900 3300
Wire Wire Line
	6900 3300 6900 3400
Wire Wire Line
	6900 3600 6900 3700
Wire Wire Line
	6200 3700 6900 3700
Wire Wire Line
	8650 3700 9350 3700
Wire Wire Line
	9350 3600 9350 3700
Wire Wire Line
	9350 3300 9350 3400
Wire Wire Line
	9250 3300 9350 3300
$Comp
L Device:R_Small R9
U 1 1 618787F3
P 9150 3300
F 0 "R9" V 9350 3350 50  0000 L CNN
F 1 "???100k" V 9250 3150 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 9150 3300 50  0001 C CNN
F 3 "~" H 9150 3300 50  0001 C CNN
	1    9150 3300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	9700 3150 9650 3150
Wire Wire Line
	10400 3050 10300 3050
Text Label 900  2600 2    50   ~ 0
Butt2
Wire Wire Line
	8800 3300 9050 3300
Connection ~ 8800 3300
Connection ~ 8800 2950
Wire Wire Line
	8800 2950 8800 3300
Wire Wire Line
	8800 2950 8800 2600
Wire Wire Line
	9250 2950 8800 2950
Wire Wire Line
	9650 2950 9700 2950
Connection ~ 9650 2950
Wire Wire Line
	9450 2950 9650 2950
$Comp
L Device:R_Small R10
U 1 1 6186E060
P 9350 2950
F 0 "R10" V 9550 3000 50  0000 L CNN
F 1 "2.2k" V 9450 2800 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 9350 2950 50  0001 C CNN
F 3 "~" H 9350 2950 50  0001 C CNN
	1    9350 2950
	0    -1   -1   0   
$EndComp
Connection ~ 8650 3700
Wire Wire Line
	8650 3700 8650 4000
$Comp
L power:GND #PWR07
U 1 1 6186E058
P 8650 4000
F 0 "#PWR07" H 8650 3750 50  0001 C CNN
F 1 "GND" H 8655 3827 50  0000 C CNN
F 2 "" H 8650 4000 50  0001 C CNN
F 3 "" H 8650 4000 50  0001 C CNN
	1    8650 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8650 3300 8800 3300
$Comp
L Device:C_Small C4
U 1 1 6186E04E
P 9350 3500
F 0 "C4" H 9442 3546 50  0000 L CNN
F 1 "100nF???10nF" H 9442 3455 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 9350 3500 50  0001 C CNN
F 3 "~" H 9350 3500 50  0001 C CNN
	1    9350 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	9650 2950 9650 3150
Wire Wire Line
	8800 2200 8800 2400
Wire Wire Line
	8550 2200 8800 2200
$Comp
L Device:R_Small R8
U 1 1 6186E045
P 8800 2500
F 0 "R8" H 8859 2546 50  0000 L CNN
F 1 "???20k" H 8859 2455 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 8800 2500 50  0001 C CNN
F 3 "~" H 8800 2500 50  0001 C CNN
	1    8800 2500
	1    0    0    -1  
$EndComp
Text Label 8550 2200 2    50   ~ 0
5V_Ard
$Comp
L Switch:SW_Push SW2
U 1 1 6186E03E
P 8650 3500
F 0 "SW2" V 8750 3950 50  0000 R CNN
F 1 "SW_Push" V 8650 3950 50  0000 R CNN
F 2 "Button_Switch_Keyboard:SW_Cherry_MX_1.00u_Plate" H 8650 3700 50  0001 C CNN
F 3 "~" H 8650 3700 50  0001 C CNN
	1    8650 3500
	0    -1   -1   0   
$EndComp
$Comp
L 4xxx:HEF4093B U1
U 2 1 6181FC0C
P 10000 3050
F 0 "U1" H 10000 3375 50  0000 C CNN
F 1 "HEF4093B" H 10000 3284 50  0000 C CNN
F 2 "Package_SO:SO-14_3.9x8.65mm_P1.27mm" H 10000 3050 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/HEF4093B.pdf" H 10000 3050 50  0001 C CNN
	2    10000 3050
	1    0    0    -1  
$EndComp
Text Notes 4250 2050 0    50   ~ 0
согласовывают уровни TTL 5v\nhttp://arduino.ru/forum/proekty/emulyator-myshi-klaviatury-multimediya-klaviatury-na-obychnykh-adruino-unonanominipro
Text Label 1150 2400 2    50   ~ 0
D-
Text Label 1150 2200 2    50   ~ 0
D+
Wire Wire Line
	1150 2200 1350 2200
Wire Wire Line
	1150 2400 1350 2400
Text Label 1150 2500 2    50   ~ 0
D_pullup
Wire Wire Line
	1150 2500 1350 2500
Text Label 1750 1450 2    50   ~ 0
U_vcc
$Comp
L Connector:Conn_01x02_Male J1
U 1 1 618C73E0
P 950 2000
F 0 "J1" H 1058 2181 50  0000 C CNN
F 1 "Debug" H 1058 2090 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x02_P2.54mm_Vertical" H 950 2000 50  0001 C CNN
F 3 "~" H 950 2000 50  0001 C CNN
	1    950  2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	1150 2000 1350 2000
Wire Wire Line
	1150 2100 1350 2100
Text Label 900  2300 2    50   ~ 0
Butt1
Wire Wire Line
	900  2300 1350 2300
Text Notes 550  2400 0    50   ~ 0
т.к Int1
Wire Wire Line
	900  2600 1350 2600
$Comp
L power:GND #PWR02
U 1 1 618DCD25
P 2000 1250
F 0 "#PWR02" H 2000 1000 50  0001 C CNN
F 1 "GND" H 2005 1077 50  0000 C CNN
F 2 "" H 2000 1250 50  0001 C CNN
F 3 "" H 2000 1250 50  0001 C CNN
	1    2000 1250
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 1250 1950 1250
Text Label 10400 3050 0    50   ~ 0
Butt2
$Comp
L LED:WS2812B D3
U 1 1 618E4934
P 7450 1300
F 0 "D3" H 7650 1600 50  0000 L CNN
F 1 "WS2812B" H 7700 1500 50  0000 L CNN
F 2 "LED_SMD:LED_WS2812B_PLCC4_5.0x5.0mm_P3.2mm" H 7500 1000 50  0001 L TNN
F 3 "https://cdn-shop.adafruit.com/datasheets/WS2812B.pdf" H 7550 925 50  0001 L TNN
	1    7450 1300
	1    0    0    -1  
$EndComp
$Comp
L LED:WS2812B D4
U 1 1 618E7372
P 8450 1300
F 0 "D4" H 8650 1600 50  0000 L CNN
F 1 "WS2812B" H 8700 1500 50  0000 L CNN
F 2 "LED_SMD:LED_WS2812B_PLCC4_5.0x5.0mm_P3.2mm" H 8500 1000 50  0001 L TNN
F 3 "https://cdn-shop.adafruit.com/datasheets/WS2812B.pdf" H 8550 925 50  0001 L TNN
	1    8450 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	7750 1300 8150 1300
NoConn ~ 8750 1300
Text Label 7450 900  2    50   ~ 0
5V_Ard
Wire Wire Line
	7450 900  7450 1000
Wire Wire Line
	7450 900  8450 900 
Wire Wire Line
	8450 900  8450 1000
$Comp
L power:GND #PWR06
U 1 1 618FBC2B
P 7450 1700
F 0 "#PWR06" H 7450 1450 50  0001 C CNN
F 1 "GND" H 7455 1527 50  0000 C CNN
F 2 "" H 7450 1700 50  0001 C CNN
F 3 "" H 7450 1700 50  0001 C CNN
	1    7450 1700
	1    0    0    -1  
$EndComp
Wire Wire Line
	7450 1600 7450 1700
Wire Wire Line
	8450 1600 7450 1600
Connection ~ 7450 1600
Wire Wire Line
	7000 1300 7150 1300
Text Label 6650 1300 2    50   ~ 0
Led
Wire Wire Line
	6650 1300 6800 1300
$Comp
L Device:C_Small C3
U 1 1 6191AB75
P 9200 1300
F 0 "C3" H 9292 1346 50  0000 L CNN
F 1 "0.1uF" H 9292 1255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 9200 1300 50  0001 C CNN
F 3 "~" H 9200 1300 50  0001 C CNN
	1    9200 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	9200 1200 9200 900 
Wire Wire Line
	9200 900  8450 900 
Connection ~ 8450 900 
Wire Wire Line
	8450 1600 9200 1600
Wire Wire Line
	9200 1600 9200 1400
Connection ~ 8450 1600
Text Label 900  2800 2    50   ~ 0
Led
Wire Wire Line
	900  2800 1350 2800
$Comp
L Connector:Conn_01x01_Male J2
U 1 1 619288B4
P 1500 3700
F 0 "J2" H 1608 3881 50  0000 C CNN
F 1 "Conn_01x01_Male" H 1608 3790 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x01_P2.54mm_Vertical" H 1500 3700 50  0001 C CNN
F 3 "~" H 1500 3700 50  0001 C CNN
	1    1500 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1700 3700 1850 3700
NoConn ~ 2350 2000
NoConn ~ 2350 2100
NoConn ~ 2350 2400
NoConn ~ 2350 2600
NoConn ~ 2350 2700
NoConn ~ 2350 2800
NoConn ~ 2350 2900
NoConn ~ 2350 3000
NoConn ~ 2350 3100
NoConn ~ 2350 3200
NoConn ~ 2350 3300
NoConn ~ 1350 3300
NoConn ~ 1350 3200
NoConn ~ 1350 3100
NoConn ~ 1350 3000
NoConn ~ 1350 2900
NoConn ~ 1350 2700
NoConn ~ 1950 1600
Wire Wire Line
	2050 1500 2050 1600
Wire Wire Line
	1750 1250 1750 1600
$Comp
L MCU_Module:Arduino_Nano_v3.x A1
U 1 1 6180DF89
P 1850 2600
F 0 "A1" H 2200 1600 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 2500 1500 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 1850 2600 50  0001 C CIN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 1850 2600 50  0001 C CNN
	1    1850 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	4000 1350 3650 1350
Wire Wire Line
	4200 1350 4550 1350
Wire Wire Line
	4000 1450 3650 1450
Wire Wire Line
	4200 1450 4900 1450
Connection ~ 4900 1450
$EndSCHEMATC
