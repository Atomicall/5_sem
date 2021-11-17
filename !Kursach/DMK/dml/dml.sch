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
L Device:R_Small R8
U 1 1 6192F4FE
P 4550 1150
F 0 "R8" H 4609 1196 50  0000 L CNN
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
L Device:R_Small R4
U 1 1 6192F506
P 4100 1350
F 0 "R4" V 4250 1150 50  0000 L CNN
F 1 "68" V 4150 1150 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 4100 1350 50  0001 C CNN
F 3 "~" H 4100 1350 50  0001 C CNN
	1    4100 1350
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R5
U 1 1 6192F50C
P 4100 1450
F 0 "R5" V 4100 1250 50  0000 L CNN
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
F 2 "Diode_THT:D_DO-35_SOD27_P7.62mm_Horizontal" V 4900 1600 50  0001 C CNN
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
F 2 "Diode_THT:D_DO-35_SOD27_P7.62mm_Horizontal" V 4550 1600 50  0001 C CNN
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
L Connector:Conn_01x04_Female J2
U 1 1 6192F545
P 3850 1350
F 0 "J2" H 3742 925 50  0000 C CNN
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
P 2900 5250
F 0 "U1" H 2900 5575 50  0000 C CNN
F 1 "HEF4093B" H 2900 5484 50  0000 C CNN
F 2 "Package_SO:SO-14_3.9x8.65mm_P1.27mm" H 2900 5250 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/HEF4093B.pdf" H 2900 5250 50  0001 C CNN
	1    2900 5250
	1    0    0    -1  
$EndComp
$Comp
L 4xxx:HEF4093B U1
U 5 1 618124BF
P 10350 1400
F 0 "U1" H 10580 1446 50  0000 L CNN
F 1 "HEF4093B" H 10580 1355 50  0000 L CNN
F 2 "Package_SO:SO-14_3.9x8.65mm_P1.27mm" H 10350 1400 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/HEF4093B.pdf" H 10350 1400 50  0001 C CNN
	5    10350 1400
	1    0    0    -1  
$EndComp
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
Text Label 3300 5250 0    50   ~ 0
Butt1
$Comp
L Device:C_Small C6
U 1 1 6185F775
P 10650 1000
F 0 "C6" H 10742 1046 50  0000 L CNN
F 1 "0.1uF" H 10742 955 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 10650 1000 50  0001 C CNN
F 3 "~" H 10650 1000 50  0001 C CNN
	1    10650 1000
	1    0    0    -1  
$EndComp
Wire Wire Line
	10350 900  10650 900 
Wire Wire Line
	10650 1100 10650 1900
Wire Wire Line
	10650 1900 10350 1900
$Comp
L power:GND #PWR06
U 1 1 618620E8
P 10350 1950
F 0 "#PWR06" H 10350 1700 50  0001 C CNN
F 1 "GND" H 10355 1777 50  0000 C CNN
F 2 "" H 10350 1950 50  0001 C CNN
F 3 "" H 10350 1950 50  0001 C CNN
	1    10350 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	10350 1950 10350 1900
Connection ~ 10350 1900
Wire Wire Line
	10200 850  10350 850 
Wire Wire Line
	10350 850  10350 900 
Connection ~ 10350 900 
$Comp
L Switch:SW_Push SW1
U 1 1 61883E17
P 1550 5700
F 0 "SW1" V 1650 6150 50  0000 R CNN
F 1 "SW_Push" V 1550 6150 50  0000 R CNN
F 2 "Button_Switch_Keyboard:SW_Cherry_MX_1.00u_Plate" H 1550 5900 50  0001 C CNN
F 3 "~" H 1550 5900 50  0001 C CNN
	1    1550 5700
	0    -1   -1   0   
$EndComp
Text Label 1450 4400 2    50   ~ 0
5V_Conn
$Comp
L Device:R_Small R1
U 1 1 61883E1E
P 1700 4700
F 0 "R1" H 1759 4746 50  0000 L CNN
F 1 "???20k" H 1759 4655 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 1700 4700 50  0001 C CNN
F 3 "~" H 1700 4700 50  0001 C CNN
	1    1700 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1450 4400 1700 4400
Wire Wire Line
	1700 4400 1700 4600
Wire Wire Line
	2550 5150 2550 5350
$Comp
L Device:C_Small C2
U 1 1 61883E27
P 2250 5700
F 0 "C2" H 2342 5746 50  0000 L CNN
F 1 "100nF???10nF" H 2342 5655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 2250 5700 50  0001 C CNN
F 3 "~" H 2250 5700 50  0001 C CNN
	1    2250 5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 5500 1700 5500
Wire Wire Line
	1550 5900 1550 6200
Connection ~ 1550 5900
$Comp
L Device:R_Small R3
U 1 1 61883E36
P 2250 5150
F 0 "R3" V 2450 5200 50  0000 L CNN
F 1 "2.2k" V 2350 5000 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 2250 5150 50  0001 C CNN
F 3 "~" H 2250 5150 50  0001 C CNN
	1    2250 5150
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2350 5150 2550 5150
Connection ~ 2550 5150
Wire Wire Line
	2550 5150 2600 5150
Wire Wire Line
	2150 5150 1700 5150
Wire Wire Line
	1700 5150 1700 4800
Wire Wire Line
	1700 5150 1700 5500
Connection ~ 1700 5150
Connection ~ 1700 5500
Wire Wire Line
	1700 5500 1950 5500
Wire Wire Line
	3300 5250 3200 5250
Wire Wire Line
	2600 5350 2550 5350
$Comp
L Device:R_Small R2
U 1 1 61883E48
P 2050 5500
F 0 "R2" V 2250 5550 50  0000 L CNN
F 1 "???100k" V 2150 5350 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 2050 5500 50  0001 C CNN
F 3 "~" H 2050 5500 50  0001 C CNN
	1    2050 5500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2150 5500 2250 5500
Wire Wire Line
	2250 5500 2250 5600
Wire Wire Line
	2250 5800 2250 5900
Wire Wire Line
	1550 5900 2250 5900
Wire Wire Line
	4000 5900 4700 5900
Wire Wire Line
	4700 5800 4700 5900
Wire Wire Line
	4700 5500 4700 5600
Wire Wire Line
	4600 5500 4700 5500
$Comp
L Device:R_Small R7
U 1 1 618787F3
P 4500 5500
F 0 "R7" V 4700 5550 50  0000 L CNN
F 1 "???100k" V 4600 5350 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 4500 5500 50  0001 C CNN
F 3 "~" H 4500 5500 50  0001 C CNN
	1    4500 5500
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5050 5350 5000 5350
Wire Wire Line
	5750 5250 5650 5250
Text Label 800  2800 2    50   ~ 0
Butt3
Wire Wire Line
	4150 5500 4400 5500
Connection ~ 4150 5500
Connection ~ 4150 5150
Wire Wire Line
	4150 5150 4150 5500
Wire Wire Line
	4150 5150 4150 4800
Wire Wire Line
	4600 5150 4150 5150
Wire Wire Line
	5000 5150 5050 5150
Connection ~ 5000 5150
Wire Wire Line
	4800 5150 5000 5150
$Comp
L Device:R_Small R9
U 1 1 6186E060
P 4700 5150
F 0 "R9" V 4900 5200 50  0000 L CNN
F 1 "2.2k" V 4800 5000 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 4700 5150 50  0001 C CNN
F 3 "~" H 4700 5150 50  0001 C CNN
	1    4700 5150
	0    -1   -1   0   
$EndComp
Connection ~ 4000 5900
Wire Wire Line
	4000 5900 4000 6200
Wire Wire Line
	4000 5500 4150 5500
$Comp
L Device:C_Small C3
U 1 1 6186E04E
P 4700 5700
F 0 "C3" H 4792 5746 50  0000 L CNN
F 1 "100nF???10nF" H 4792 5655 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 4700 5700 50  0001 C CNN
F 3 "~" H 4700 5700 50  0001 C CNN
	1    4700 5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 5150 5000 5350
Wire Wire Line
	4150 4400 4150 4600
Wire Wire Line
	3900 4400 4150 4400
$Comp
L Device:R_Small R6
U 1 1 6186E045
P 4150 4700
F 0 "R6" H 4209 4746 50  0000 L CNN
F 1 "???20k" H 4209 4655 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 4150 4700 50  0001 C CNN
F 3 "~" H 4150 4700 50  0001 C CNN
	1    4150 4700
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW2
U 1 1 6186E03E
P 4000 5700
F 0 "SW2" V 4100 6150 50  0000 R CNN
F 1 "SW_Push" V 4000 6150 50  0000 R CNN
F 2 "Button_Switch_Keyboard:SW_Cherry_MX_1.00u_Plate" H 4000 5900 50  0001 C CNN
F 3 "~" H 4000 5900 50  0001 C CNN
	1    4000 5700
	0    -1   -1   0   
$EndComp
$Comp
L 4xxx:HEF4093B U1
U 2 1 6181FC0C
P 5350 5250
F 0 "U1" H 5350 5575 50  0000 C CNN
F 1 "HEF4093B" H 5350 5484 50  0000 C CNN
F 2 "Package_SO:SO-14_3.9x8.65mm_P1.27mm" H 5350 5250 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/HEF4093B.pdf" H 5350 5250 50  0001 C CNN
	2    5350 5250
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
Text Label 800  2700 2    50   ~ 0
Butt4
Text Notes 550  2400 0    50   ~ 0
т.к Int1
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
Text Label 5750 5250 0    50   ~ 0
Butt2
$Comp
L Connector:Conn_01x01_Male J1
U 1 1 619288B4
P 1500 3700
F 0 "J1" H 1608 3881 50  0000 C CNN
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
Text Label 8400 5150 0    50   ~ 0
Butt3
$Comp
L Switch:SW_Push SW3
U 1 1 6198DCDD
P 6650 5600
F 0 "SW3" V 6750 6050 50  0000 R CNN
F 1 "SW_Push" V 6650 6050 50  0000 R CNN
F 2 "Button_Switch_Keyboard:SW_Cherry_MX_1.00u_Plate" H 6650 5800 50  0001 C CNN
F 3 "~" H 6650 5800 50  0001 C CNN
	1    6650 5600
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R10
U 1 1 6198DCE4
P 6800 4600
F 0 "R10" H 6859 4646 50  0000 L CNN
F 1 "???20k" H 6859 4555 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 6800 4600 50  0001 C CNN
F 3 "~" H 6800 4600 50  0001 C CNN
	1    6800 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	6550 4300 6800 4300
Wire Wire Line
	6800 4300 6800 4500
Wire Wire Line
	7650 5050 7650 5250
$Comp
L Device:C_Small C4
U 1 1 6198DCED
P 7350 5600
F 0 "C4" H 7442 5646 50  0000 L CNN
F 1 "100nF???10nF" H 7442 5555 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 7350 5600 50  0001 C CNN
F 3 "~" H 7350 5600 50  0001 C CNN
	1    7350 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	6650 5400 6800 5400
Wire Wire Line
	6650 5800 6650 6100
Connection ~ 6650 5800
$Comp
L Device:R_Small R12
U 1 1 6198DCFC
P 7350 5050
F 0 "R12" V 7550 5100 50  0000 L CNN
F 1 "2.2k" V 7450 4900 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 7350 5050 50  0001 C CNN
F 3 "~" H 7350 5050 50  0001 C CNN
	1    7350 5050
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7450 5050 7650 5050
Connection ~ 7650 5050
Wire Wire Line
	7650 5050 7700 5050
Wire Wire Line
	7250 5050 6800 5050
Wire Wire Line
	6800 5050 6800 4700
Wire Wire Line
	6800 5050 6800 5400
Connection ~ 6800 5050
Connection ~ 6800 5400
Wire Wire Line
	6800 5400 7050 5400
Wire Wire Line
	8400 5150 8300 5150
Wire Wire Line
	7700 5250 7650 5250
$Comp
L Device:R_Small R11
U 1 1 6198DD0D
P 7150 5400
F 0 "R11" V 7350 5450 50  0000 L CNN
F 1 "???100k" V 7250 5250 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 7150 5400 50  0001 C CNN
F 3 "~" H 7150 5400 50  0001 C CNN
	1    7150 5400
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7250 5400 7350 5400
Wire Wire Line
	7350 5400 7350 5500
Wire Wire Line
	7350 5700 7350 5800
Wire Wire Line
	6650 5800 7350 5800
Wire Wire Line
	9100 5800 9800 5800
Wire Wire Line
	9800 5700 9800 5800
Wire Wire Line
	9800 5400 9800 5500
Wire Wire Line
	9700 5400 9800 5400
$Comp
L Device:R_Small R14
U 1 1 6198DD1B
P 9600 5400
F 0 "R14" V 9800 5450 50  0000 L CNN
F 1 "???100k" V 9700 5250 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 9600 5400 50  0001 C CNN
F 3 "~" H 9600 5400 50  0001 C CNN
	1    9600 5400
	0    -1   -1   0   
$EndComp
Wire Wire Line
	10150 5250 10100 5250
Wire Wire Line
	10850 5150 10750 5150
Wire Wire Line
	9250 5400 9500 5400
Connection ~ 9250 5400
Connection ~ 9250 5050
Wire Wire Line
	9250 5050 9250 5400
Wire Wire Line
	9250 5050 9250 4700
Wire Wire Line
	9700 5050 9250 5050
Wire Wire Line
	10100 5050 10150 5050
Connection ~ 10100 5050
Wire Wire Line
	9900 5050 10100 5050
$Comp
L Device:R_Small R15
U 1 1 6198DD2C
P 9800 5050
F 0 "R15" V 10000 5100 50  0000 L CNN
F 1 "2.2k" V 9900 4900 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 9800 5050 50  0001 C CNN
F 3 "~" H 9800 5050 50  0001 C CNN
	1    9800 5050
	0    -1   -1   0   
$EndComp
Connection ~ 9100 5800
Wire Wire Line
	9100 5800 9100 6100
Wire Wire Line
	9100 5400 9250 5400
$Comp
L Device:C_Small C5
U 1 1 6198DD3B
P 9800 5600
F 0 "C5" H 9892 5646 50  0000 L CNN
F 1 "100nF???10nF" H 9892 5555 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric_Pad1.18x1.45mm_HandSolder" H 9800 5600 50  0001 C CNN
F 3 "~" H 9800 5600 50  0001 C CNN
	1    9800 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	10100 5050 10100 5250
Wire Wire Line
	9250 4300 9250 4500
Wire Wire Line
	9000 4300 9250 4300
$Comp
L Device:R_Small R13
U 1 1 6198DD44
P 9250 4600
F 0 "R13" H 9309 4646 50  0000 L CNN
F 1 "???20k" H 9309 4555 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric_Pad1.20x1.40mm_HandSolder" H 9250 4600 50  0001 C CNN
F 3 "~" H 9250 4600 50  0001 C CNN
	1    9250 4600
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW4
U 1 1 6198DD4B
P 9100 5600
F 0 "SW4" V 9200 6050 50  0000 R CNN
F 1 "SW_Push" V 9100 6050 50  0000 R CNN
F 2 "Button_Switch_Keyboard:SW_Cherry_MX_1.00u_Plate" H 9100 5800 50  0001 C CNN
F 3 "~" H 9100 5800 50  0001 C CNN
	1    9100 5600
	0    -1   -1   0   
$EndComp
Text Label 10850 5150 0    50   ~ 0
Butt4
$Comp
L 4xxx:HEF4093B U1
U 3 1 61998A23
P 8000 5150
F 0 "U1" H 8000 5475 50  0000 C CNN
F 1 "HEF4093B" H 8000 5384 50  0000 C CNN
F 2 "Package_SO:SO-14_3.9x8.65mm_P1.27mm" H 8000 5150 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/HEF4093B.pdf" H 8000 5150 50  0001 C CNN
	3    8000 5150
	1    0    0    -1  
$EndComp
$Comp
L 4xxx:HEF4093B U1
U 4 1 6199E065
P 10450 5150
F 0 "U1" H 10450 5475 50  0000 C CNN
F 1 "HEF4093B" H 10450 5384 50  0000 C CNN
F 2 "Package_SO:SO-14_3.9x8.65mm_P1.27mm" H 10450 5150 50  0001 C CNN
F 3 "https://assets.nexperia.com/documents/data-sheet/HEF4093B.pdf" H 10450 5150 50  0001 C CNN
	4    10450 5150
	1    0    0    -1  
$EndComp
Text Label 800  2900 2    50   ~ 0
Butt2
Text Label 800  3000 2    50   ~ 0
Butt1
Wire Wire Line
	1350 2700 800  2700
Wire Wire Line
	800  2800 1350 2800
Wire Wire Line
	1350 2900 800  2900
Wire Wire Line
	1350 3000 800  3000
NoConn ~ 1350 2600
NoConn ~ 1350 2000
NoConn ~ 1350 2100
NoConn ~ 1350 2300
Text Label 3900 4400 2    50   ~ 0
5V_Conn
Text Label 4700 3050 0    50   ~ 0
5V_Conn
Text Label 9000 4300 2    50   ~ 0
5V_Conn
$Comp
L Connector:Conn_01x04_Male J7
U 1 1 619F5503
P 6350 3250
F 0 "J7" H 6458 3531 50  0000 C CNN
F 1 "Conn_01x04_Male" H 6458 3440 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 6350 3250 50  0001 C CNN
F 3 "~" H 6350 3250 50  0001 C CNN
	1    6350 3250
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x04_Female J8
U 1 1 619F6289
P 7750 3250
F 0 "J8" H 7778 3226 50  0000 L CNN
F 1 "Conn_01x04_Female" H 7778 3135 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 7750 3250 50  0001 C CNN
F 3 "~" H 7750 3250 50  0001 C CNN
	1    7750 3250
	1    0    0    -1  
$EndComp
Text Label 6700 3000 0    50   ~ 0
5V_Conn
Text Label 7050 3350 0    50   ~ 0
Butt3
Text Label 7050 3450 0    50   ~ 0
Butt4
Text Label 7050 3250 0    50   ~ 0
Butt2
Text Label 7050 3150 0    50   ~ 0
Butt1
Wire Wire Line
	6550 3150 7550 3150
Wire Wire Line
	6550 3250 7550 3250
Wire Wire Line
	6550 3350 7550 3350
Wire Wire Line
	6550 3450 7550 3450
$Comp
L Connector:Conn_01x01_Female J5
U 1 1 61A311B0
P 5250 3050
F 0 "J5" H 5278 3076 50  0000 L CNN
F 1 "Conn_01x01_Female" H 5278 2985 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5250 3050 50  0001 C CNN
F 3 "~" H 5250 3050 50  0001 C CNN
	1    5250 3050
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x01_Male J3
U 1 1 61A31D7F
P 4250 3050
F 0 "J3" H 4358 3231 50  0000 C CNN
F 1 "Conn_01x01_Male" H 4358 3140 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 4250 3050 50  0001 C CNN
F 3 "~" H 4250 3050 50  0001 C CNN
	1    4250 3050
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x01_Female J6
U 1 1 61A3314D
P 5250 3300
F 0 "J6" H 5278 3326 50  0000 L CNN
F 1 "Conn_01x01_Female" H 5278 3235 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 5250 3300 50  0001 C CNN
F 3 "~" H 5250 3300 50  0001 C CNN
	1    5250 3300
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x01_Male J4
U 1 1 61A33153
P 4250 3300
F 0 "J4" H 4358 3481 50  0000 C CNN
F 1 "Conn_01x01_Male" H 4358 3390 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x01_P2.54mm_Vertical" H 4250 3300 50  0001 C CNN
F 3 "~" H 4250 3300 50  0001 C CNN
	1    4250 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	4450 3050 4650 3050
$Comp
L power:GND #PWR05
U 1 1 61A4BB22
P 4750 3400
F 0 "#PWR05" H 4750 3150 50  0001 C CNN
F 1 "GND" H 4755 3227 50  0000 C CNN
F 2 "" H 4750 3400 50  0001 C CNN
F 3 "" H 4750 3400 50  0001 C CNN
	1    4750 3400
	1    0    0    -1  
$EndComp
Text Label 4550 3300 0    50   ~ 0
gnd_buttons
Wire Wire Line
	4750 3300 4750 3400
Wire Wire Line
	4450 3300 4750 3300
Wire Wire Line
	5050 3300 4750 3300
Connection ~ 4750 3300
Text Label 1550 6200 0    50   ~ 0
gnd_buttons
Text Label 4000 6200 0    50   ~ 0
gnd_buttons
Text Label 6650 6100 0    50   ~ 0
gnd_buttons
Text Label 9100 6100 0    50   ~ 0
gnd_buttons
Text Label 6550 4300 2    50   ~ 0
5V_Conn
Text Label 10200 850  2    50   ~ 0
5V_Conn
Text Label 2100 1500 0    50   ~ 0
5V_Ard
Text Label 4750 2900 0    50   ~ 0
5V_Ard
Wire Wire Line
	4750 2900 4650 2900
Wire Wire Line
	4650 2900 4650 3050
Connection ~ 4650 3050
Wire Wire Line
	4650 3050 5050 3050
$EndSCHEMATC
