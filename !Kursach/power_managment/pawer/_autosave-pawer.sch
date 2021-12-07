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
$Comp
L Connector:Conn_01x04_Male J5
U 1 1 61AF3AB3
P 3150 1000
F 0 "J5" H 3258 1281 50  0000 C CNN
F 1 "Conn_01x04_Male" H 3258 1190 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 3150 1000 50  0001 C CNN
F 3 "~" H 3150 1000 50  0001 C CNN
	1    3150 1000
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x02_Male J1
U 1 1 61AF4AD0
P 1200 1900
F 0 "J1" H 1308 2081 50  0000 C CNN
F 1 "Conn_01x02_Male" H 1308 1990 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 1200 1900 50  0001 C CNN
F 3 "~" H 1200 1900 50  0001 C CNN
	1    1200 1900
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x02_Male J3
U 1 1 61AF5712
P 1200 3100
F 0 "J3" H 1308 3281 50  0000 C CNN
F 1 "Conn_01x02_Male" H 1308 3190 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 1200 3100 50  0001 C CNN
F 3 "~" H 1200 3100 50  0001 C CNN
	1    1200 3100
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x03_Male J2
U 1 1 61AF59F4
P 1200 2500
F 0 "J2" H 1308 2781 50  0000 C CNN
F 1 "Conn_01x03_Male" H 1308 2690 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Horizontal" H 1200 2500 50  0001 C CNN
F 3 "~" H 1200 2500 50  0001 C CNN
	1    1200 2500
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x02_Male J4
U 1 1 61AF7AAF
P 2900 3500
F 0 "J4" H 3008 3681 50  0000 C CNN
F 1 "Conn_01x02_Male" H 3008 3590 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 2900 3500 50  0001 C CNN
F 3 "~" H 2900 3500 50  0001 C CNN
	1    2900 3500
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Conn_01x04_Male J6
U 1 1 61AF852B
P 3500 3450
F 0 "J6" H 3608 3731 50  0000 C CNN
F 1 "Conn_01x04_Male" H 3608 3640 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 3500 3450 50  0001 C CNN
F 3 "~" H 3500 3450 50  0001 C CNN
	1    3500 3450
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Conn_01x04_Male J8
U 1 1 61AF8A3F
P 4200 3450
F 0 "J8" H 4308 3731 50  0000 C CNN
F 1 "Conn_01x04_Male" H 4308 3640 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 4200 3450 50  0001 C CNN
F 3 "~" H 4200 3450 50  0001 C CNN
	1    4200 3450
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Conn_01x02_Male J7
U 1 1 61AF937D
P 3850 1000
F 0 "J7" H 3958 1181 50  0000 C CNN
F 1 "Conn_01x02_Male" H 3958 1090 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 3850 1000 50  0001 C CNN
F 3 "~" H 3850 1000 50  0001 C CNN
	1    3850 1000
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_Push SW1
U 1 1 61AF9B9F
P 4450 1450
F 0 "SW1" H 4450 1735 50  0000 C CNN
F 1 "SW_Push" H 4450 1644 50  0000 C CNN
F 2 "Button_Switch_THT:SW_NKK_GW12LJP" H 4450 1650 50  0001 C CNN
F 3 "~" H 4450 1650 50  0001 C CNN
	1    4450 1450
	1    0    0    -1  
$EndComp
Text GLabel 1750 1100 0    50   Input ~ 0
5V
$Comp
L power:GND #PWR01
U 1 1 61AFAE6A
P 1550 2000
F 0 "#PWR01" H 1550 1750 50  0001 C CNN
F 1 "GND" H 1555 1827 50  0000 C CNN
F 2 "" H 1550 2000 50  0001 C CNN
F 3 "" H 1550 2000 50  0001 C CNN
	1    1550 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 2000 1400 2000
Text GLabel 1600 1900 2    50   Input ~ 0
5V
Wire Wire Line
	1600 1900 1400 1900
Text GLabel 3050 1300 3    50   Input ~ 0
5V
Wire Wire Line
	3050 1200 3050 1250
Wire Wire Line
	3150 1200 3150 1250
Wire Wire Line
	3150 1250 3050 1250
Connection ~ 3050 1250
Wire Wire Line
	3050 1250 3050 1300
$Comp
L power:GND #PWR04
U 1 1 61AFC140
P 2950 1500
F 0 "#PWR04" H 2950 1250 50  0001 C CNN
F 1 "GND" H 2955 1327 50  0000 C CNN
F 2 "" H 2950 1500 50  0001 C CNN
F 3 "" H 2950 1500 50  0001 C CNN
	1    2950 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	2950 1500 2950 1450
Wire Wire Line
	2950 1450 3250 1450
Wire Wire Line
	3250 1450 3250 1200
Connection ~ 2950 1450
Wire Wire Line
	2950 1450 2950 1200
Text Label 3750 1350 0    50   ~ 0
B1
Text Label 3850 1350 0    50   ~ 0
B2
Wire Wire Line
	3750 1200 3750 1350
Wire Wire Line
	3850 1350 3850 1200
Text Label 4400 1750 0    50   ~ 0
B1
Text Label 4500 1750 0    50   ~ 0
B2
Wire Wire Line
	4400 1600 4400 1750
Wire Wire Line
	4500 1750 4500 1600
Wire Wire Line
	4400 1600 4250 1600
Wire Wire Line
	4250 1600 4250 1450
Wire Wire Line
	4500 1600 4650 1600
Wire Wire Line
	4650 1600 4650 1450
Text Label 2900 3150 0    50   ~ 0
-
Text Label 3000 3150 0    50   ~ 0
+
Text Label 3400 3150 0    50   ~ 0
-
Text Label 3500 3150 0    50   ~ 0
+
Text Label 3600 3150 0    50   ~ 0
-
Text Label 3700 3150 0    50   ~ 0
+
Text Label 4100 3150 0    50   ~ 0
-
Text Label 4200 3150 0    50   ~ 0
+
Text Label 4300 3150 0    50   ~ 0
-
Text Label 4400 3150 0    50   ~ 0
+
Wire Wire Line
	4400 3150 4400 3250
Wire Wire Line
	4300 3150 4300 3250
Wire Wire Line
	4200 3150 4200 3250
Wire Wire Line
	4100 3150 4100 3250
Wire Wire Line
	3700 3150 3700 3250
Wire Wire Line
	3600 3150 3600 3250
Wire Wire Line
	3500 3150 3500 3250
Wire Wire Line
	3400 3150 3400 3250
Wire Wire Line
	3000 3150 3000 3300
Wire Wire Line
	2900 3150 2900 3300
Text Label 1850 1300 0    50   ~ 0
-
Text Label 1850 1100 0    50   ~ 0
+
Wire Wire Line
	1750 1100 1850 1100
$Comp
L power:GND #PWR03
U 1 1 61B031AD
P 2000 1300
F 0 "#PWR03" H 2000 1050 50  0001 C CNN
F 1 "GND" H 2005 1127 50  0000 C CNN
F 2 "" H 2000 1300 50  0001 C CNN
F 3 "" H 2000 1300 50  0001 C CNN
	1    2000 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 1300 1850 1300
Text GLabel 1550 2400 2    50   Input ~ 0
5V
Wire Wire Line
	1550 2400 1400 2400
$Comp
L power:GND #PWR02
U 1 1 61B0482C
P 1700 2500
F 0 "#PWR02" H 1700 2250 50  0001 C CNN
F 1 "GND" H 1705 2327 50  0000 C CNN
F 2 "" H 1700 2500 50  0001 C CNN
F 3 "" H 1700 2500 50  0001 C CNN
	1    1700 2500
	1    0    0    -1  
$EndComp
Wire Wire Line
	1700 2500 1550 2500
Wire Wire Line
	1400 2600 1500 2600
Wire Wire Line
	1500 2600 1500 3100
Wire Wire Line
	1500 3100 1400 3100
Wire Wire Line
	1550 2500 1550 3200
Wire Wire Line
	1550 3200 1400 3200
Connection ~ 1550 2500
Wire Wire Line
	1550 2500 1400 2500
$EndSCHEMATC
