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
L power:GND #PWR01
U 1 1 61761F05
P 900 950
F 0 "#PWR01" H 900 700 50  0001 C CNN
F 1 "GND" H 905 777 50  0000 C CNN
F 2 "" H 900 950 50  0001 C CNN
F 3 "" H 900 950 50  0001 C CNN
	1    900  950 
	1    0    0    -1  
$EndComp
Wire Wire Line
	800  900  900  900 
Wire Wire Line
	900  900  900  950 
$Comp
L power:GND #PWR04
U 1 1 6176BB9C
P 5800 2200
F 0 "#PWR04" H 5800 1950 50  0001 C CNN
F 1 "GND" H 5805 2027 50  0000 C CNN
F 2 "" H 5800 2200 50  0001 C CNN
F 3 "" H 5800 2200 50  0001 C CNN
	1    5800 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6150 1750 6150 1900
Wire Wire Line
	6150 2100 6150 2200
Wire Wire Line
	6150 2200 5800 2200
Wire Wire Line
	5800 2050 5800 2200
Connection ~ 5800 2200
Wire Wire Line
	5250 800  5500 800 
Wire Wire Line
	5500 800  6350 800 
Wire Wire Line
	6350 800  6350 900 
Connection ~ 5500 800 
Wire Wire Line
	6350 1100 6350 1200
Wire Wire Line
	6350 2200 6150 2200
Connection ~ 6150 2200
Connection ~ 6350 1200
Wire Wire Line
	6350 1200 6350 1250
Connection ~ 6350 800 
$Comp
L power:GND #PWR010
U 1 1 6178DC11
P 7600 1100
F 0 "#PWR010" H 7600 850 50  0001 C CNN
F 1 "GND" H 7750 1000 50  0000 C CNN
F 2 "" H 7600 1100 50  0001 C CNN
F 3 "" H 7600 1100 50  0001 C CNN
	1    7600 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	7600 800  7950 800 
Wire Wire Line
	7950 800  7950 1650
Connection ~ 7600 800 
$Comp
L power:GND #PWR011
U 1 1 6178F9B5
P 7950 2250
F 0 "#PWR011" H 7950 2000 50  0001 C CNN
F 1 "GND" H 7900 2100 50  0000 C CNN
F 2 "" H 7950 2250 50  0001 C CNN
F 3 "" H 7950 2250 50  0001 C CNN
	1    7950 2250
	1    0    0    -1  
$EndComp
Wire Wire Line
	6150 1750 6100 1750
Wire Wire Line
	6350 1450 6350 2200
Text Label 6150 1750 0    50   ~ 0
Vref
Wire Wire Line
	5500 800  5500 1750
Text Label 6450 1600 0    50   ~ 0
Vref
Wire Wire Line
	6450 1600 6450 1700
Wire Wire Line
	6750 2500 6750 1700
Connection ~ 6750 1700
Wire Wire Line
	6750 1700 6850 1700
Wire Wire Line
	6850 1700 6850 1750
Wire Wire Line
	6650 3150 6650 1700
Connection ~ 6650 1700
Wire Wire Line
	6650 1700 6750 1700
Wire Wire Line
	6450 1700 6550 1700
Connection ~ 6550 1700
Wire Wire Line
	6550 1700 6650 1700
Wire Wire Line
	6550 1700 6550 3800
$Comp
L power:GND #PWR05
U 1 1 617D4C8F
P 6550 4050
F 0 "#PWR05" H 6550 3800 50  0001 C CNN
F 1 "GND" H 6555 3877 50  0000 C CNN
F 2 "" H 6550 4050 50  0001 C CNN
F 3 "" H 6550 4050 50  0001 C CNN
	1    6550 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6550 4050 6550 4000
$Comp
L power:GND #PWR06
U 1 1 617D6D2A
P 6650 3400
F 0 "#PWR06" H 6650 3150 50  0001 C CNN
F 1 "GND" H 6655 3227 50  0000 C CNN
F 2 "" H 6650 3400 50  0001 C CNN
F 3 "" H 6650 3400 50  0001 C CNN
	1    6650 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	6650 3400 6650 3350
$Comp
L power:GND #PWR07
U 1 1 617D89DF
P 6750 2750
F 0 "#PWR07" H 6750 2500 50  0001 C CNN
F 1 "GND" H 6755 2577 50  0000 C CNN
F 2 "" H 6750 2750 50  0001 C CNN
F 3 "" H 6750 2750 50  0001 C CNN
	1    6750 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	6750 2750 6750 2700
$Comp
L power:GND #PWR08
U 1 1 617DA473
P 6850 2000
F 0 "#PWR08" H 6850 1750 50  0001 C CNN
F 1 "GND" H 6855 1827 50  0000 C CNN
F 2 "" H 6850 2000 50  0001 C CNN
F 3 "" H 6850 2000 50  0001 C CNN
	1    6850 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 2000 6850 1950
Wire Wire Line
	8450 1950 8350 1950
Wire Wire Line
	8450 2700 8350 2700
Wire Wire Line
	8450 3350 8350 3350
Wire Wire Line
	8350 4000 8450 4000
Wire Wire Line
	10950 1100 10950 1250
Wire Wire Line
	10600 1100 10600 1250
Wire Wire Line
	10250 1100 10250 1250
Wire Wire Line
	9850 1100 9850 1250
Wire Wire Line
	9450 1100 9450 1250
Wire Wire Line
	9450 800  7950 800 
Connection ~ 7950 800 
Wire Wire Line
	9450 800  9850 800 
Connection ~ 9450 800 
Connection ~ 9850 800 
Wire Wire Line
	9850 800  10250 800 
Connection ~ 10250 800 
Wire Wire Line
	10250 800  10600 800 
Connection ~ 10600 800 
Wire Wire Line
	10600 800  10950 800 
Wire Wire Line
	7400 2050 7750 2050
Connection ~ 7400 2050
Connection ~ 7400 3450
Wire Wire Line
	7700 3450 7750 3450
Wire Wire Line
	6850 2600 7500 2600
Wire Wire Line
	8450 4000 8450 3750
Wire Wire Line
	8450 3750 7800 3750
Wire Wire Line
	6650 3900 7500 3900
Wire Wire Line
	7600 3750 7500 3750
Wire Wire Line
	7500 3750 7500 3900
Connection ~ 7500 3900
Wire Wire Line
	7500 3900 7750 3900
Wire Wire Line
	7800 3100 8450 3100
Wire Wire Line
	8450 3100 8450 3350
Wire Wire Line
	6750 3250 7500 3250
Wire Wire Line
	7600 3100 7500 3100
Wire Wire Line
	7500 3100 7500 3250
Connection ~ 7500 3250
Wire Wire Line
	7500 3250 7750 3250
Wire Wire Line
	7600 2450 7500 2450
Wire Wire Line
	7500 2450 7500 2600
Connection ~ 7500 2600
Wire Wire Line
	7500 2600 7750 2600
Wire Wire Line
	7800 2450 8450 2450
Wire Wire Line
	8450 2450 8450 2700
Wire Wire Line
	6950 1850 7600 1850
Wire Wire Line
	7650 1650 7600 1650
Wire Wire Line
	7600 1650 7600 1850
Connection ~ 7600 1850
Wire Wire Line
	7600 1850 7750 1850
Wire Wire Line
	8450 1650 8450 1950
Wire Wire Line
	7850 1650 7950 1650
Connection ~ 8450 1950
Wire Wire Line
	7700 3450 7700 3700
Wire Wire Line
	7450 3450 7400 3450
Wire Wire Line
	7650 3450 7700 3450
Connection ~ 7700 3450
Wire Wire Line
	7400 3450 7400 4100
Wire Wire Line
	7400 2050 7400 2800
Wire Wire Line
	7450 2800 7400 2800
Connection ~ 7400 2800
Wire Wire Line
	7400 2800 7400 3450
Wire Wire Line
	7450 4100 7400 4100
Wire Wire Line
	7400 1750 7400 2050
Wire Wire Line
	6950 1200 6350 1200
Wire Wire Line
	6950 1750 7400 1750
Connection ~ 7400 1750
Wire Wire Line
	7400 1750 7550 1750
Wire Wire Line
	7550 1300 7550 1750
Wire Wire Line
	6950 1400 6950 1750
$Comp
L power:GND #PWR09
U 1 1 617BD48E
P 7150 1600
F 0 "#PWR09" H 7150 1350 50  0001 C CNN
F 1 "GND" H 7250 1600 50  0000 C CNN
F 2 "" H 7150 1600 50  0001 C CNN
F 3 "" H 7150 1600 50  0001 C CNN
	1    7150 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 800  7600 800 
Wire Wire Line
	6350 800  7150 800 
Connection ~ 7150 800 
Wire Wire Line
	7150 1000 7150 800 
$Comp
L Comparator:LM339 U4
U 2 1 61758671
P 8050 2700
F 0 "U4" H 8100 3100 50  0000 C CNN
F 1 "LM339" H 8150 3000 50  0000 C CNN
F 2 "" H 8000 2800 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=11574" H 8100 2900 50  0001 C CNN
	2    8050 2700
	1    0    0    -1  
$EndComp
$Comp
L Comparator:LM339 U4
U 3 1 6175976B
P 8050 3350
F 0 "U4" H 8050 3750 50  0000 C CNN
F 1 "LM339" H 8050 3650 50  0000 C CNN
F 2 "" H 8000 3450 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=11574" H 8100 3550 50  0001 C CNN
	3    8050 3350
	1    0    0    -1  
$EndComp
$Comp
L Comparator:LM339 U4
U 4 1 6175A6B8
P 8050 4000
F 0 "U4" H 8050 4400 50  0000 C CNN
F 1 "LM339" H 8050 4300 50  0000 C CNN
F 2 "" H 8000 4100 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=11574" H 8100 4200 50  0001 C CNN
	4    8050 4000
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x02_Male J1
U 1 1 61760D45
P 600 800
F 0 "J1" H 708 981 50  0000 C CNN
F 1 "Bat_In" H 708 890 50  0000 C CNN
F 2 "" H 600 800 50  0001 C CNN
F 3 "~" H 600 800 50  0001 C CNN
	1    600  800 
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R6
U 1 1 61766C0B
P 6350 1000
F 0 "R6" H 6409 1046 50  0000 L CNN
F 1 "20k" H 6409 955 50  0000 L CNN
F 2 "" H 6350 1000 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=01414" H 6350 1000 50  0001 C CNN
	1    6350 1000
	1    0    0    -1  
$EndComp
$Comp
L Regulator_Linear:LM317L_TO92 U2
U 1 1 61762EE5
P 5800 1750
F 0 "U2" H 5800 1992 50  0000 C CNN
F 1 "LM317L_TO92" H 5800 1901 50  0000 C CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 5800 1975 50  0001 C CIN
F 3 "https://belchip.by/product/?selected_product=39774" H 5800 1750 50  0001 C CNN
	1    5800 1750
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R5
U 1 1 6176AD6D
P 6150 2000
F 0 "R5" H 6209 2046 50  0000 L CNN
F 1 "330 - 500" H 6209 1955 50  0000 L CNN
F 2 "" H 6150 2000 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 6150 2000 50  0001 C CNN
	1    6150 2000
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R7
U 1 1 6176FC80
P 6350 1350
F 0 "R7" H 6409 1396 50  0000 L CNN
F 1 "10k" H 6409 1305 50  0000 L CNN
F 2 "" H 6350 1350 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 6350 1350 50  0001 C CNN
	1    6350 1350
	1    0    0    -1  
$EndComp
$Comp
L Device:C C3
U 1 1 6178B29F
P 7600 950
F 0 "C3" H 7715 996 50  0000 L CNN
F 1 "0.1uF" H 7715 905 50  0000 L CNN
F 2 "" H 7638 800 50  0001 C CNN
F 3 "1206 smd у меня есть" H 7600 950 50  0001 C CNN
	1    7600 950 
	1    0    0    -1  
$EndComp
$Comp
L Amplifier_Operational:LM358 U3
U 3 1 6179FCF7
P 7250 1300
F 0 "U3" H 7250 1500 50  0000 L CNN
F 1 "LM358" H 7250 1450 50  0000 L CNN
F 2 "" H 7250 1300 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=38123" H 7250 1300 50  0001 C CNN
	3    7250 1300
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT_Small RV4
U 1 1 617BFA10
P 6850 1850
F 0 "RV4" H 7100 1900 50  0000 R CNN
F 1 "10k" H 7100 1800 50  0000 R CNN
F 2 "" H 6850 1850 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=32262" H 6850 1850 50  0001 C CNN
	1    6850 1850
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT_Small RV3
U 1 1 617C25ED
P 6750 2600
F 0 "RV3" H 6950 2650 50  0000 R CNN
F 1 "10k" H 6950 2550 50  0000 R CNN
F 2 "" H 6750 2600 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=32262" H 6750 2600 50  0001 C CNN
	1    6750 2600
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT_Small RV2
U 1 1 617C4915
P 6650 3250
F 0 "RV2" H 6900 3300 50  0000 R CNN
F 1 "10k" H 6900 3200 50  0000 R CNN
F 2 "" H 6650 3250 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=32262" H 6650 3250 50  0001 C CNN
	1    6650 3250
	1    0    0    -1  
$EndComp
$Comp
L Device:R_POT_Small RV1
U 1 1 617C633C
P 6550 3900
F 0 "RV1" H 6800 3950 50  0000 R CNN
F 1 "10k" H 6800 3850 50  0000 R CNN
F 2 "" H 6550 3900 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=32262" H 6550 3900 50  0001 C CNN
	1    6550 3900
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R11
U 1 1 617E348B
P 7700 2450
F 0 "R11" V 7600 2350 50  0000 C CNN
F 1 "100k" V 7600 2500 50  0000 C CNN
F 2 "" H 7700 2450 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 7700 2450 50  0001 C CNN
	1    7700 2450
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R12
U 1 1 617E42CC
P 7700 3100
F 0 "R12" V 7600 3050 50  0000 C CNN
F 1 "100k" V 7600 3200 50  0000 C CNN
F 2 "" H 7700 3100 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 7700 3100 50  0001 C CNN
	1    7700 3100
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R13
U 1 1 617E50CE
P 7700 3750
F 0 "R13" V 7600 3700 50  0000 C CNN
F 1 "100k" V 7600 3850 50  0000 C CNN
F 2 "" H 7700 3750 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 7700 3750 50  0001 C CNN
	1    7700 3750
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R19
U 1 1 61800DFF
P 10950 1350
F 0 "R19" H 11009 1396 50  0000 L CNN
F 1 "1k" H 11009 1305 50  0000 L CNN
F 2 "" H 10950 1350 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=42128" H 10950 1350 50  0001 C CNN
	1    10950 1350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D5
U 1 1 61800DF9
P 10950 950
F 0 "D5" V 10989 832 50  0000 R CNN
F 1 "LED" V 10898 832 50  0000 R CNN
F 2 "" H 10950 950 50  0001 C CNN
F 3 "смотри в белщипе, какие понравятся" H 10950 950 50  0001 C CNN
	1    10950 950 
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R18
U 1 1 617FF4CE
P 10600 1350
F 0 "R18" H 10659 1396 50  0000 L CNN
F 1 "1k" H 10659 1305 50  0000 L CNN
F 2 "" H 10600 1350 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=42128" H 10600 1350 50  0001 C CNN
	1    10600 1350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D4
U 1 1 617FF4C8
P 10600 950
F 0 "D4" V 10639 832 50  0000 R CNN
F 1 "LED" V 10548 832 50  0000 R CNN
F 2 "" H 10600 950 50  0001 C CNN
F 3 "смотри в белщипе, какие понравятся" H 10600 950 50  0001 C CNN
	1    10600 950 
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R17
U 1 1 617FDACE
P 10250 1350
F 0 "R17" H 10309 1396 50  0000 L CNN
F 1 "1k" H 10309 1305 50  0000 L CNN
F 2 "" H 10250 1350 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=42128" H 10250 1350 50  0001 C CNN
	1    10250 1350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D3
U 1 1 617FDAC8
P 10250 950
F 0 "D3" V 10289 832 50  0000 R CNN
F 1 "LED" V 10198 832 50  0000 R CNN
F 2 "" H 10250 950 50  0001 C CNN
F 3 "смотри в белщипе, какие понравятся" H 10250 950 50  0001 C CNN
	1    10250 950 
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R16
U 1 1 617FC5DE
P 9850 1350
F 0 "R16" H 9909 1396 50  0000 L CNN
F 1 "1k" H 9909 1305 50  0000 L CNN
F 2 "" H 9850 1350 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=42128" H 9850 1350 50  0001 C CNN
	1    9850 1350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D2
U 1 1 617FC5D8
P 9850 950
F 0 "D2" V 9889 832 50  0000 R CNN
F 1 "LED" V 9798 832 50  0000 R CNN
F 2 "" H 9850 950 50  0001 C CNN
F 3 "смотри в белщипе, какие понравятся" H 9850 950 50  0001 C CNN
	1    9850 950 
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R15
U 1 1 617F7327
P 9450 1350
F 0 "R15" H 9509 1396 50  0000 L CNN
F 1 "1k" H 9509 1305 50  0000 L CNN
F 2 "" H 9450 1350 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=42128" H 9450 1350 50  0001 C CNN
	1    9450 1350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D1
U 1 1 617F3A7E
P 9450 950
F 0 "D1" V 9489 832 50  0000 R CNN
F 1 "LED" V 9398 832 50  0000 R CNN
F 2 "" H 9450 950 50  0001 C CNN
F 3 "смотри в белщипе, какие понравятся" H 9450 950 50  0001 C CNN
	1    9450 950 
	0    -1   -1   0   
$EndComp
$Comp
L Device:R_Small R14
U 1 1 617DF17F
P 7750 1650
F 0 "R14" V 7650 1550 50  0000 C CNN
F 1 "100k" V 7650 1700 50  0000 C CNN
F 2 "" H 7750 1650 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 7750 1650 50  0001 C CNN
	1    7750 1650
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R9
U 1 1 61855D1D
P 7550 3450
F 0 "R9" V 7650 3350 50  0000 C CNN
F 1 "100k" V 7650 3500 50  0000 C CNN
F 2 "" H 7550 3450 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 7550 3450 50  0001 C CNN
	1    7550 3450
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R10
U 1 1 619A15E8
P 7550 4100
F 0 "R10" V 7650 4000 50  0000 C CNN
F 1 "100k" V 7650 4150 50  0000 C CNN
F 2 "" H 7550 4100 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 7550 4100 50  0001 C CNN
	1    7550 4100
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R8
U 1 1 619AEA79
P 7550 2800
F 0 "R8" V 7650 2700 50  0000 C CNN
F 1 "100k" V 7650 2850 50  0000 C CNN
F 2 "" H 7550 2800 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 7550 2800 50  0001 C CNN
	1    7550 2800
	0    1    1    0   
$EndComp
$Comp
L Amplifier_Operational:LM358 U3
U 2 1 61799691
P 7250 1300
F 0 "U3" H 7250 1667 50  0000 C CNN
F 1 "LM358" H 7250 1576 50  0000 C CNN
F 2 "" H 7250 1300 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=38123" H 7250 1300 50  0001 C CNN
	2    7250 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	7650 4100 7750 4100
Wire Wire Line
	9450 1450 9450 1950
Wire Wire Line
	8450 1950 9450 1950
Wire Wire Line
	9850 1450 9850 2700
Wire Wire Line
	9850 2700 8450 2700
Connection ~ 8450 2700
Wire Wire Line
	8450 3350 10250 3350
Wire Wire Line
	10250 3350 10250 1450
Connection ~ 8450 3350
Wire Wire Line
	8450 4000 10600 4000
Wire Wire Line
	10600 4000 10600 1450
Connection ~ 8450 4000
Wire Wire Line
	7650 2800 7750 2800
$Comp
L Comparator:LM339 U4
U 5 1 6175C157
P 8050 1950
F 0 "U4" H 8200 2100 50  0000 L CNN
F 1 "LM339" H 8200 2050 50  0000 L CNN
F 2 "" H 8000 2050 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=11574" H 8100 2150 50  0001 C CNN
	5    8050 1950
	1    0    0    -1  
$EndComp
$Comp
L Comparator:LM339 U4
U 1 1 61756CE7
P 8050 1950
F 0 "U4" H 8100 2300 50  0000 C CNN
F 1 "LM339" H 8150 2200 50  0000 C CNN
F 2 "" H 8000 2050 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=11574" H 8100 2150 50  0001 C CNN
	1    8050 1950
	1    0    0    -1  
$EndComp
Connection ~ 7400 4100
Connection ~ 7950 1650
Wire Wire Line
	7950 1650 8450 1650
Wire Wire Line
	7400 4100 7400 4400
Wire Wire Line
	7400 4400 10950 4400
Wire Wire Line
	10950 4400 10950 1450
$Comp
L Timer:SA555D U1
U 1 1 6175CBFF
P 2350 1950
F 0 "U1" H 2450 2400 50  0000 C CNN
F 1 "SA555D" H 2550 2300 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 3200 1550 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/ne555.pdf" H 3200 1550 50  0001 C CNN
	1    2350 1950
	1    0    0    -1  
$EndComp
Wire Wire Line
	800  800  1100 800 
Wire Wire Line
	2350 800  2350 1550
$Comp
L power:GND #PWR03
U 1 1 61763A67
P 2350 2850
F 0 "#PWR03" H 2350 2600 50  0001 C CNN
F 1 "GND" H 2355 2677 50  0000 C CNN
F 2 "" H 2350 2850 50  0001 C CNN
F 3 "" H 2350 2850 50  0001 C CNN
	1    2350 2850
	1    0    0    -1  
$EndComp
$Comp
L Device:C C2
U 1 1 6176D4A1
P 2900 2450
F 0 "C2" H 3015 2496 50  0000 L CNN
F 1 "???" H 3015 2405 50  0000 L CNN
F 2 "" H 2938 2300 50  0001 C CNN
F 3 "1206 smd у меня есть" H 2900 2450 50  0001 C CNN
	1    2900 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	2850 1950 2900 1950
Wire Wire Line
	2900 1950 2900 2150
Wire Wire Line
	2850 2150 2900 2150
Connection ~ 2900 2150
Wire Wire Line
	2900 2150 2900 2300
Wire Wire Line
	2350 2600 2350 2850
Wire Wire Line
	2350 2350 2350 2600
Connection ~ 2350 2600
Wire Wire Line
	2350 2600 2900 2600
Wire Wire Line
	2900 1950 2900 800 
Wire Wire Line
	2900 800  2750 800 
Connection ~ 2900 1950
$Comp
L Device:R_Small R3
U 1 1 617930DC
P 2650 800
F 0 "R3" V 2550 650 50  0000 C CNN
F 1 "???" V 2550 800 50  0000 C CNN
F 2 "" H 2650 800 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=31132" H 2650 800 50  0001 C CNN
	1    2650 800 
	0    1    1    0   
$EndComp
Wire Wire Line
	2550 800  2350 800 
Connection ~ 2350 800 
Text Notes 2750 800  0    50   ~ 0
Rt\n\n
$Comp
L Device:R_Small R1
U 1 1 6179D901
P 1500 1150
F 0 "R1" H 1559 1196 50  0000 L CNN
F 1 "100k" H 1559 1105 50  0000 L CNN
F 2 "" H 1500 1150 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 1500 1150 50  0001 C CNN
	1    1500 1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	1500 800  1500 1050
Connection ~ 1500 800 
Wire Wire Line
	1500 800  2350 800 
Wire Wire Line
	1500 1750 1650 1750
Wire Wire Line
	1500 1250 1500 1750
$Comp
L Device:C C1
U 1 1 617AA2CE
P 1850 2400
F 0 "C1" H 1965 2446 50  0000 L CNN
F 1 "0.1uF" H 1965 2355 50  0000 L CNN
F 2 "" H 1888 2250 50  0001 C CNN
F 3 "1206 smd у меня есть" H 1850 2400 50  0001 C CNN
	1    1850 2400
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R2
U 1 1 617AEE15
P 1650 2050
F 0 "R2" H 1709 2096 50  0000 L CNN
F 1 "10k" H 1709 2005 50  0000 L CNN
F 2 "" H 1650 2050 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=30322" H 1650 2050 50  0001 C CNN
	1    1650 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	1650 1750 1650 1950
Connection ~ 1650 1750
Wire Wire Line
	1650 1750 1850 1750
Wire Wire Line
	1650 2150 1850 2150
$Comp
L Switch:SW_Push SW1
U 1 1 617BBFB5
P 1500 1950
F 0 "SW1" V 1600 2200 50  0000 R CNN
F 1 "SW_Push" V 1450 2400 50  0000 R CNN
F 2 "" H 1500 2150 50  0001 C CNN
F 3 "кнопку найдем" H 1500 2150 50  0001 C CNN
	1    1500 1950
	0    -1   -1   0   
$EndComp
Connection ~ 1500 1750
$Comp
L power:GND #PWR02
U 1 1 617C075C
P 1500 2150
F 0 "#PWR02" H 1500 1900 50  0001 C CNN
F 1 "GND" H 1505 1977 50  0000 C CNN
F 2 "" H 1500 2150 50  0001 C CNN
F 3 "" H 1500 2150 50  0001 C CNN
	1    1500 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	1850 2550 1850 2600
Wire Wire Line
	1850 2600 2350 2600
Wire Wire Line
	1850 1950 1850 2250
Text Notes 3050 2600 0    50   ~ 0
Ct
Text Label 3450 1750 0    50   ~ 0
En
Text Notes 450  2400 0    50   ~ 0
------____------
Text Notes 550  2650 0    50   ~ 0
______----------________________________
Text Notes 2900 700  0    50   ~ 0
100k
Text Notes 2950 2700 0    50   ~ 0
47uF
Text Notes 3200 1850 0    50   ~ 0
5 сек
$Comp
L Transistor_FET:2N7002E Q1
U 1 1 617E5E04
P 4150 1750
F 0 "Q1" H 4354 1796 50  0000 L CNN
F 1 "2N7002E" H 4354 1705 50  0000 L CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 4350 1675 50  0001 L CIN
F 3 "http://www.diodes.com/assets/Datasheets/ds30376.pdf" H 4150 1750 50  0001 L CNN
	1    4150 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	1100 800  1100 650 
Wire Wire Line
	1100 650  4250 650 
Wire Wire Line
	4250 650  4250 1550
Connection ~ 1100 800 
Wire Wire Line
	1100 800  1500 800 
Wire Wire Line
	4250 1950 4250 2550
Wire Wire Line
	4250 2550 5250 2550
Wire Wire Line
	5250 2550 5250 800 
$Comp
L Device:R_Small R4
U 1 1 617FD9B3
P 3700 1750
F 0 "R4" V 3800 1750 50  0000 C CNN
F 1 "390" V 3900 1750 50  0000 C CNN
F 2 "" H 3700 1750 50  0001 C CNN
F 3 "https://belchip.by/product/?selected_product=31132" H 3700 1750 50  0001 C CNN
	1    3700 1750
	0    1    1    0   
$EndComp
Wire Wire Line
	2850 1750 3600 1750
Wire Wire Line
	3800 1750 3950 1750
Text Notes 2950 2250 0    50   ~ 0
На выходе ne555 стоит элемент ИЛИ,\nпоэтому, по идее, нет Z state\n(или 0, или Vin на выходе?)
$EndSCHEMATC
