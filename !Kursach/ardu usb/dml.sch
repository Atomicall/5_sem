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
L Device:C_Small C1
U 1 1 6183595C
P 4350 2600
F 0 "C1" V 4550 2650 50  0000 L CNN
F 1 "100uF 5X11" V 4450 2450 50  0000 L CNN
F 2 "Capacitor_THT:C_Radial_D5.0mm_H11.0mm_P2.00mm" H 4350 2600 50  0001 C CNN
F 3 "~" H 4350 2600 50  0001 C CNN
	1    4350 2600
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR01
U 1 1 61844AB5
P 4350 5050
F 0 "#PWR01" H 4350 4800 50  0001 C CNN
F 1 "GND" H 4355 4877 50  0000 C CNN
F 2 "" H 4350 5050 50  0001 C CNN
F 3 "" H 4350 5050 50  0001 C CNN
	1    4350 5050
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 4950 4350 5050
Wire Wire Line
	4450 5050 4350 5050
Connection ~ 4350 5050
Text Notes 4250 2050 0    50   ~ 0
согласовывают уровни TTL 5v\nhttp://arduino.ru/forum/proekty/emulyator-myshi-klaviatury-multimediya-klaviatury-na-obychnykh-adruino-unonanominipro
Text Label 3650 3750 2    50   ~ 0
D-
Text Label 3650 3550 2    50   ~ 0
D+
Wire Wire Line
	3650 3550 3850 3550
Text Label 3650 3850 2    50   ~ 0
D_pullup
Text Label 4250 2800 2    50   ~ 0
U_vcc
$Comp
L power:GND #PWR02
U 1 1 618DCD25
P 4500 2600
F 0 "#PWR02" H 4500 2350 50  0001 C CNN
F 1 "GND" H 4505 2427 50  0000 C CNN
F 2 "" H 4500 2600 50  0001 C CNN
F 3 "" H 4500 2600 50  0001 C CNN
	1    4500 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	4500 2600 4450 2600
$Comp
L Connector:Conn_01x01_Male J1
U 1 1 619288B4
P 4000 5050
F 0 "J1" H 4108 5231 50  0000 C CNN
F 1 "Conn_01x01_Male" H 4108 5140 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x01_P2.54mm_Vertical" H 4000 5050 50  0001 C CNN
F 3 "~" H 4000 5050 50  0001 C CNN
	1    4000 5050
	1    0    0    -1  
$EndComp
Wire Wire Line
	4200 5050 4350 5050
Wire Wire Line
	4250 2600 4250 2800
Wire Wire Line
	4000 1350 3650 1350
Wire Wire Line
	4200 1350 4550 1350
Wire Wire Line
	4000 1450 3650 1450
Wire Wire Line
	4200 1450 4900 1450
Connection ~ 4900 1450
$Comp
L Connector:Conn_01x15_Female J3
U 1 1 61AF5FA7
P 2650 3850
F 0 "J3" H 2678 3876 50  0000 L CNN
F 1 "Conn_01x15_Female" H 2678 3785 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x15_P2.54mm_Vertical" H 2650 3850 50  0001 C CNN
F 3 "~" H 2650 3850 50  0001 C CNN
	1    2650 3850
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x15_Male J4
U 1 1 61AF91EC
P 2750 3850
F 0 "J4" H 2858 4731 50  0000 C CNN
F 1 "Conn_01x15_Male" H 2858 4640 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x15_P2.54mm_Vertical" H 2750 3850 50  0001 C CNN
F 3 "~" H 2750 3850 50  0001 C CNN
	1    2750 3850
	1    0    0    -1  
$EndComp
Wire Wire Line
	2450 4550 2950 4550
Wire Wire Line
	2450 4450 2950 4450
Wire Wire Line
	2450 4350 2950 4350
Wire Wire Line
	2950 4250 2450 4250
Wire Wire Line
	2450 4150 2950 4150
Wire Wire Line
	2950 4050 2450 4050
Wire Wire Line
	2450 3950 2950 3950
Wire Wire Line
	2950 3850 2450 3850
Wire Wire Line
	2450 3750 2950 3750
Wire Wire Line
	2950 3650 2450 3650
Wire Wire Line
	2450 3550 2950 3550
Wire Wire Line
	2450 3450 2950 3450
Wire Wire Line
	2450 3350 2950 3350
Wire Wire Line
	2450 3250 2950 3250
Wire Wire Line
	2450 3150 2950 3150
Wire Wire Line
	3850 4550 2950 4550
Connection ~ 2950 4550
Wire Wire Line
	3850 4450 2950 4450
Connection ~ 2950 4450
Wire Wire Line
	3850 4350 2950 4350
Connection ~ 2950 4350
Wire Wire Line
	3850 4250 2950 4250
Connection ~ 2950 4250
Wire Wire Line
	3850 4150 2950 4150
Connection ~ 2950 4150
Wire Wire Line
	3850 4050 2950 4050
Connection ~ 2950 4050
Wire Wire Line
	3850 3950 2950 3950
Connection ~ 2950 3950
Wire Wire Line
	3650 3750 3850 3750
Wire Wire Line
	3650 3850 3850 3850
Wire Wire Line
	3850 3650 2950 3650
Connection ~ 2950 3650
Wire Wire Line
	2950 3150 3700 3150
Wire Wire Line
	3700 3150 3700 3450
Wire Wire Line
	3700 3450 3850 3450
Connection ~ 2950 3150
Wire Wire Line
	3850 3350 3200 3350
Wire Wire Line
	3200 3350 3200 3250
Wire Wire Line
	3200 3250 2950 3250
Connection ~ 2950 3250
Wire Wire Line
	2950 3350 3050 3350
Wire Wire Line
	3050 3350 3050 2350
Wire Wire Line
	3050 2350 4950 2350
Wire Wire Line
	4950 2350 4950 3350
Wire Wire Line
	4950 3350 4900 3350
Connection ~ 2950 3350
Wire Wire Line
	2950 3450 3550 3450
Wire Wire Line
	3550 3450 3550 2500
Wire Wire Line
	3550 2500 4600 2500
Wire Wire Line
	4600 2500 4600 2600
Wire Wire Line
	4600 2600 4500 2600
Connection ~ 2950 3450
Connection ~ 4500 2600
$Comp
L Connector:Conn_01x15_Female J5
U 1 1 61B368C7
P 5900 4100
F 0 "J5" H 5928 4126 50  0000 L CNN
F 1 "Conn_01x15_Female" H 5928 4035 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x15_P2.54mm_Vertical" H 5900 4100 50  0001 C CNN
F 3 "~" H 5900 4100 50  0001 C CNN
	1    5900 4100
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x15_Male J6
U 1 1 61B368CD
P 6000 4100
F 0 "J6" H 6108 4981 50  0000 C CNN
F 1 "Conn_01x15_Male" H 6108 4890 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x15_P2.54mm_Vertical" H 6000 4100 50  0001 C CNN
F 3 "~" H 6000 4100 50  0001 C CNN
	1    6000 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5700 4800 6200 4800
Wire Wire Line
	5700 4600 6200 4600
Wire Wire Line
	6200 4500 5700 4500
Wire Wire Line
	5700 4400 6200 4400
Wire Wire Line
	6200 4300 5700 4300
Wire Wire Line
	5700 4200 6200 4200
Wire Wire Line
	6200 4100 5700 4100
Wire Wire Line
	5700 4000 6200 4000
Wire Wire Line
	6200 3900 5700 3900
Wire Wire Line
	5700 3800 6200 3800
Wire Wire Line
	5700 3700 6200 3700
Wire Wire Line
	5700 3600 6200 3600
Wire Wire Line
	5700 3500 6200 3500
$Comp
L MCU_Module:Arduino_Nano_v3.x A1
U 1 1 6180DF89
P 4350 3950
F 0 "A1" H 4700 2950 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 5000 2850 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 4350 3950 50  0001 C CIN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 4350 3950 50  0001 C CNN
	1    4350 3950
	1    0    0    -1  
$EndComp
Connection ~ 4250 2800
Wire Wire Line
	4250 2800 4250 2950
Wire Wire Line
	4600 2600 5200 2600
Wire Wire Line
	5200 2600 5200 3500
Connection ~ 4600 2600
Wire Wire Line
	5200 3500 5700 3500
Connection ~ 5700 3500
Wire Wire Line
	5700 3400 6200 3400
Wire Wire Line
	5700 2800 5700 3400
Wire Wire Line
	4250 2800 5700 2800
Connection ~ 5700 3400
Wire Wire Line
	4850 3450 4850 3500
Wire Wire Line
	4850 3600 5700 3600
Connection ~ 5700 3600
Wire Wire Line
	4550 2950 5550 2950
Wire Wire Line
	5550 2950 5550 3700
Wire Wire Line
	5550 3700 5700 3700
Connection ~ 5700 3700
Wire Wire Line
	4850 4650 4950 4650
Wire Wire Line
	4950 4650 4950 3800
Wire Wire Line
	4950 3800 5700 3800
Connection ~ 5700 3800
Wire Wire Line
	4850 4550 5050 4550
Wire Wire Line
	5050 4550 5050 3900
Wire Wire Line
	5050 3900 5700 3900
Connection ~ 5700 3900
Wire Wire Line
	4850 4450 5150 4450
Wire Wire Line
	5150 4450 5150 4000
Wire Wire Line
	5150 4000 5700 4000
Connection ~ 5700 4000
Wire Wire Line
	4850 4350 5250 4350
Wire Wire Line
	5250 4350 5250 4100
Connection ~ 5700 4100
Wire Wire Line
	4850 4250 5300 4250
Wire Wire Line
	5300 4250 5300 4200
Wire Wire Line
	5300 4200 5700 4200
Connection ~ 5700 4200
Wire Wire Line
	4850 4150 5500 4150
Wire Wire Line
	5500 4150 5500 4300
Wire Wire Line
	5500 4300 5700 4300
Connection ~ 5700 4300
Wire Wire Line
	4850 4050 5450 4050
Wire Wire Line
	5450 4050 5450 4400
Wire Wire Line
	5450 4400 5700 4400
Connection ~ 5700 4400
Wire Wire Line
	5250 4100 5700 4100
Wire Wire Line
	4850 3950 5600 3950
Wire Wire Line
	5600 3950 5600 4500
Wire Wire Line
	5600 4500 5700 4500
Connection ~ 5700 4500
Wire Wire Line
	4850 3750 5350 3750
Wire Wire Line
	5350 3750 5350 4600
Wire Wire Line
	5350 4600 5700 4600
Connection ~ 5700 4600
Wire Wire Line
	4450 2950 4450 2850
Wire Wire Line
	4450 2850 6650 2850
Wire Wire Line
	6650 2850 6650 5000
Wire Wire Line
	6650 5000 6350 5000
Wire Wire Line
	6350 5000 6350 4700
Wire Wire Line
	5700 4700 6200 4700
Connection ~ 6200 4700
Wire Wire Line
	6200 4700 6350 4700
Wire Wire Line
	3850 4650 3550 4650
Wire Wire Line
	3550 4650 3550 5500
Wire Wire Line
	3550 5500 5550 5500
Wire Wire Line
	5550 5500 5550 4800
Wire Wire Line
	5550 4800 5700 4800
Connection ~ 5700 4800
$Comp
L Connector:Conn_01x05_Female J7
U 1 1 61BD931C
P 5250 5000
F 0 "J7" H 5278 5026 50  0000 L CNN
F 1 "Conn_01x05_Female" H 5278 4935 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x05_P2.54mm_Vertical" H 5250 5000 50  0001 C CNN
F 3 "~" H 5250 5000 50  0001 C CNN
	1    5250 5000
	1    0    0    -1  
$EndComp
Text Notes 5350 4800 0    50   ~ 0
scl
Text Notes 5350 4900 0    50   ~ 0
sda
Text Notes 5400 5000 0    50   ~ 0
gnd
Text Notes 5400 5100 0    50   ~ 0
vcc
Text Notes 5350 5200 0    50   ~ 0
p_up
Wire Wire Line
	5050 4800 5050 4600
Wire Wire Line
	5050 4600 5200 4600
Wire Wire Line
	5200 4600 5200 4450
Wire Wire Line
	5200 4450 5150 4450
Connection ~ 5150 4450
Wire Wire Line
	5250 4350 5250 4900
Wire Wire Line
	5250 4900 5050 4900
Connection ~ 5250 4350
Wire Wire Line
	5050 5000 4450 5000
Wire Wire Line
	4450 4950 4450 5000
Connection ~ 4450 5000
Wire Wire Line
	4450 5000 4450 5050
Wire Wire Line
	5050 5200 7000 5200
Wire Wire Line
	7000 5200 7000 3700
Wire Wire Line
	7000 3700 6200 3700
Connection ~ 6200 3700
Wire Wire Line
	5050 5100 5000 5100
Wire Wire Line
	5000 5100 5000 5200
Wire Wire Line
	5000 5200 5050 5200
Connection ~ 5050 5200
Wire Wire Line
	4900 3350 4900 3500
Wire Wire Line
	4900 3500 4850 3500
Connection ~ 4900 3350
Wire Wire Line
	4900 3350 4850 3350
Connection ~ 4850 3500
Wire Wire Line
	4850 3500 4850 3600
$EndSCHEMATC
