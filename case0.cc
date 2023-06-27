HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 6.2 Patch 36
C    Generated on Fri Jun 23 17:27:45 2023
C    From file: TXRX.dwg
C    Case Set: Case Set 0
C    TDUNITS,   Energy     = J
C    TDUNITS,   Time       = s
C    TDUNITS,   Temp       = K
C    TDUNITS,   Mass       = kg
C    TDUNITS,   Length     = m
C    TDUNITS,   Orbit      = km
C    TDUNITS,   Pressure   = Pa
C    TDUNITS,   Force      = N
C    TDUNITS,   Angle      = Degrees
C    TDUNITS,   Volt       = volt
C    TDUNITS,   Current    = amp
C    DWG name:      TXRX.dwg
C    Thermophysical Property Database: TdThermo.tdp
C    Optical Property Database:        RcOptics.rco
C    Computer name: LAPTOP-BEN2019
C    User name:     benpa
C    Symbol Names, Evaluated values, Input Strings, Comments
C    TXRX_Chip_Operation 1.2  1.2
C    TXRX_Chip_Standby   0.22 0.22
HEADER NODE DATA, BOT_BOX
            3,    293.15,    2.127414e+08 
            6,    293.15,    3.798349e+09 
            7,    293.15,    3.829063e+09 
            11,    293.15,    2.892212e+08 
            12,    293.15,    2.786731e+08 
            13,    293.15,    6.166827e+08 
            14,    293.15,    3.093868e+08 
            15,    293.15,    6.166827e+08 
            16,    293.15,    3.318017e+08 
            17,    293.15,    5.789935e+07 
            18,    293.15,    6.545187e+07 
            22,    293.15,    5.107326e+08 
            23,    293.15,    5.533130e+08 
            24,    293.15,    3.668553e+09 
            25,    293.15,    3.676106e+09 
            26,    293.15,    2.051889e+08 
            27,    293.15,    6.545187e+07 
            28,    293.15,    5.789935e+07 
HEADER CONDUCTOR DATA, BOT_BOX
            1,    BOT_BOX.3,    BOT_BOX.13,    2436.311
            2,    BOT_BOX.3,    BOT_BOX.18,    96.82276
            3,    BOT_BOX.3,    BOT_BOX.25,    72.78869
            4,    BOT_BOX.3,    BOT_BOX.26,    2.892735
            5,    BOT_BOX.6,    BOT_BOX.7,    70.91246
            6,    BOT_BOX.6,    BOT_BOX.12,    33.58
            7,    BOT_BOX.6,    BOT_BOX.22,    209.875
            8,    BOT_BOX.6,    BOT_BOX.24,    99.38453
            9,    BOT_BOX.7,    BOT_BOX.14,    28.85781
            10,    BOT_BOX.7,    BOT_BOX.23,    244.2182
            11,    BOT_BOX.7,    BOT_BOX.25,    99.38453
            12,    BOT_BOX.11,    BOT_BOX.12,    242.3102
            13,    BOT_BOX.11,    BOT_BOX.22,    46.55409
            14,    BOT_BOX.11,    TOP_BOX.8,    2197.811
            15,    BOT_BOX.12,    BOT_BOX.14,    15.18245
            16,    BOT_BOX.12,    TOP_BOX.9,    1969.467
            17,    BOT_BOX.13,    BOT_BOX.15,    7.191379
            18,    BOT_BOX.13,    BOT_BOX.23,    3.755658
            19,    BOT_BOX.13,    TOP_BOX.37,    10161.31
            20,    BOT_BOX.14,    BOT_BOX.16,    276.6534
            21,    BOT_BOX.14,    TOP_BOX.12,    1969.467
            22,    BOT_BOX.15,    BOT_BOX.22,    3.755658
            23,    BOT_BOX.15,    BOT_BOX.26,    2436.311
            24,    BOT_BOX.15,    TOP_BOX.24,    10161.31
            25,    BOT_BOX.16,    BOT_BOX.23,    40.00742
            26,    BOT_BOX.16,    TOP_BOX.29,    2454.698
            27,    BOT_BOX.17,    BOT_BOX.26,    109.4525
            28,    BOT_BOX.17,    BOT_BOX.28,    64.38957
            29,    BOT_BOX.18,    BOT_BOX.27,    72.78869
            30,    BOT_BOX.22,    TOP_BOX.26,    6993.035
            31,    BOT_BOX.23,    TOP_BOX.28,    7249.922
            32,    BOT_BOX.24,    BOT_BOX.25,    70.91246
            33,    BOT_BOX.24,    BOT_BOX.26,    64.38957
            34,    BOT_BOX.24,    BOT_BOX.28,    109.4525
            35,    BOT_BOX.25,    BOT_BOX.27,    96.82276
            36,    TOP_BOX.8,    TOP_BOX.9,    32.43523
            37,    TOP_BOX.8,    TOP_BOX.26,    12.97409
            38,    TOP_BOX.9,    TOP_BOX.12,    15.18245
            39,    TOP_BOX.12,    TOP_BOX.29,    32.43523
            40,    TOP_BOX.24,    TOP_BOX.26,    3.755658
            41,    TOP_BOX.24,    TOP_BOX.37,    4.298645
            42,    TOP_BOX.28,    TOP_BOX.29,    11.14961
            43,    TOP_BOX.28,    TOP_BOX.37,    3.755658
HEADER NODE DATA, CHIP
            1,    293.15,    4.885067e+07 
HEADER CONDUCTOR DATA, CHIP
C Contact - Face Contactor[CHIP][0]::3DA
            1,    CHIP.1,    STACK_PCB.11,    28000.
            2,    CHIP.1,    STACK_PCB.16,    12000.
HEADER VARIABLES 0, CHIP
C Heat Load-TXRX Chip[CHIP]::3EA
      CHIP.Q1 = CHIP.Q1 + 1.2
HEADER OUTPUT CALLS, GLOBAL
C Case Set Prop Generated Code

      CALL TPRINT('ALL')
      IF(NSOL .GT. 1 ) THEN
          IF(TIMEN .GE. TIMEND) THEN
              CALL SAVE('ALL',0)
          ELSE
              CALL SAVE('TR',0)
          ENDIF
      ELSE IF( LOOPCT .GT. 0 ) THEN
          CALL SAVE('ALL',0)
      ENDIF

HEADER NODE DATA, HEADER
            1,    293.15,    5.396252e+09 
            2,    293.15,    5.396252e+09 
            3,    293.15,    5.396252e+09 
            4,    293.15,    5.396252e+09 
            5,    293.15,    1.798751e+09 
            6,    293.15,    1.798751e+09 
            7,    293.15,    1.798751e+09 
            8,    293.15,    1.798751e+09 
            11,    293.15,    3.597502e+09 
            12,    293.15,    3.597502e+09 
            13,    293.15,    3.597502e+09 
            14,    293.15,    3.597502e+09 
HEADER CONDUCTOR DATA, HEADER
            1,    HEADER.1,    HEADER.2,    458.633
            2,    HEADER.1,    HEADER.3,    13.21613
            3,    HEADER.1,    HEADER.5,    561.7216
            4,    HEADER.1,    HEADER.11,    280.8608
C Contact - Face Contactor[HEADER][2]::486
C Contact - Face Contactor[HEADER][1]::48D
            5,    HEADER.1,    STACK_PCB.6,    0.3
            6,    HEADER.1,    STACK_PCB.9,    0.2
            7,    HEADER.2,    HEADER.4,    13.21613
            8,    HEADER.2,    HEADER.6,    561.7216
            9,    HEADER.2,    HEADER.12,    280.8608
C Contact - Face Contactor[HEADER][2]::486
C Contact - Face Contactor[HEADER][1]::48D
            10,    HEADER.2,    STACK_PCB.6,    0.3
            11,    HEADER.2,    STACK_PCB.9,    0.2
            12,    HEADER.3,    HEADER.4,    458.633
            13,    HEADER.3,    HEADER.7,    561.7216
            14,    HEADER.3,    HEADER.13,    280.8608
C Contact - Face Contactor[HEADER][2]::486
C Contact - Face Contactor[HEADER][1]::48D
            15,    HEADER.3,    STACK_PCB.6,    0.35
            16,    HEADER.3,    TOP_BOX.37,    0.15
            17,    HEADER.4,    HEADER.8,    561.7216
            18,    HEADER.4,    HEADER.14,    280.8608
C Contact - Face Contactor[HEADER][2]::486
C Contact - Face Contactor[HEADER][1]::48D
            19,    HEADER.4,    STACK_PCB.6,    0.35
            20,    HEADER.4,    TOP_BOX.37,    0.15
            21,    HEADER.5,    HEADER.6,    152.8777
            22,    HEADER.5,    HEADER.7,    4.405376
            23,    HEADER.6,    HEADER.8,    4.405376
            24,    HEADER.7,    HEADER.8,    152.8777
            25,    HEADER.11,    HEADER.12,    305.7553
            26,    HEADER.11,    HEADER.13,    8.810753
            27,    HEADER.12,    HEADER.14,    8.810753
            28,    HEADER.13,    HEADER.14,    305.7553
HEADER NODE DATA, SPACE
            -1,    2.73,    -1.0
HEADER NODE DATA, STACK_PCB
            1,    293.15,    1.784358e+09 
            2,    293.15,    2.638808e+08 
            3,    293.15,    2.638808e+08 
            4,    293.15,    2.638808e+08 
            5,    293.15,    6.081908e+09 
            6,    293.15,    3.040954e+09 
            8,    293.15,    3.040954e+09 
            9,    293.15,    1.520477e+09 
            11,    293.15,    1.827538e+09 
            12,    293.15,    3.040954e+09 
            13,    293.15,    3.070613e+08 
            15,    293.15,    3.070613e+08 
            16,    293.15,    3.040954e+09 
HEADER CONDUCTOR DATA, STACK_PCB
            1,    STACK_PCB.1,    STACK_PCB.2,    22.55
            2,    STACK_PCB.1,    STACK_PCB.3,    3.608
            3,    STACK_PCB.1,    STACK_PCB.8,    8.912619
            4,    STACK_PCB.1,    STACK_PCB.16,    9.128675
            5,    STACK_PCB.2,    STACK_PCB.4,    3.608
            6,    STACK_PCB.3,    STACK_PCB.4,    22.55
            7,    STACK_PCB.5,    STACK_PCB.6,    17.82524
            8,    STACK_PCB.5,    STACK_PCB.8,    18.25735
            9,    STACK_PCB.5,    STACK_PCB.12,    18.25735
            10,    STACK_PCB.5,    STACK_PCB.16,    17.82524
            11,    STACK_PCB.6,    STACK_PCB.9,    9.128675
            12,    STACK_PCB.6,    TOP_BOX.37,    9.128675
            13,    STACK_PCB.8,    STACK_PCB.9,    8.912619
            14,    STACK_PCB.11,    STACK_PCB.12,    8.912619
            15,    STACK_PCB.11,    STACK_PCB.15,    3.100625
            16,    STACK_PCB.11,    STACK_PCB.16,    9.128675
            17,    STACK_PCB.11,    TOP_BOX.28,    26.24
            18,    STACK_PCB.12,    TOP_BOX.37,    8.912619
            19,    STACK_PCB.13,    STACK_PCB.15,    26.24
            20,    STACK_PCB.13,    TOP_BOX.28,    3.100625
HEADER NODE DATA, TOP_BOX
            2,    293.15,    3.610654e+09 
            3,    293.15,    3.610654e+09 
            4,    293.15,    3.610654e+09 
            5,    293.15,    1.876952e+08 
            6,    293.15,    1.876952e+08 
            8,    293.15,    4.467146e+08 
            9,    293.15,    4.003027e+08 
            10,    293.15,    3.451885e+08 
            11,    293.15,    3.093248e+08 
            12,    293.15,    4.003027e+08 
            13,    293.15,    3.668553e+09 
            14,    293.15,    5.789935e+07 
            15,    293.15,    1.472895e+08 
            16,    293.15,    5.789935e+07 
            17,    293.15,    6.545187e+07 
            19,    293.15,    2.184090e+08 
            20,    293.15,    1.472895e+08 
            21,    293.15,    1.472895e+08 
            22,    293.15,    1.472895e+08 
            23,    293.15,    1.595937e+09 
            24,    293.15,    2.065330e+09 
            25,    293.15,    1.098327e+09 
            26,    293.15,    1.421365e+09 
            27,    293.15,    1.357083e+09 
            28,    293.15,    1.780639e+09 
            29,    293.15,    4.989280e+08 
            30,    293.15,    3.093248e+08 
            31,    293.15,    6.545187e+07 
            32,    293.15,    6.039442e+08 
            33,    293.15,    6.545187e+07 
            34,    293.15,    5.789935e+07 
            35,    293.15,    6.545187e+07 
            36,    293.15,    1.595937e+09 
            37,    293.15,    3.585807e+09 
            38,    293.15,    1.876952e+08 
            39,    293.15,    1.876952e+08 
            40,    293.15,    2.184090e+08 
HEADER CONDUCTOR DATA, TOP_BOX
            1,    TOP_BOX.2,    TOP_BOX.4,    99.38453
            2,    TOP_BOX.2,    TOP_BOX.13,    70.91246
            3,    TOP_BOX.3,    TOP_BOX.4,    70.91246
            4,    TOP_BOX.3,    TOP_BOX.13,    99.38453
            5,    TOP_BOX.5,    TOP_BOX.6,    209.875
            6,    TOP_BOX.5,    TOP_BOX.38,    33.58
            7,    TOP_BOX.6,    TOP_BOX.39,    33.58
            8,    TOP_BOX.8,    TOP_BOX.9,    110.2798
            9,    TOP_BOX.8,    TOP_BOX.10,    646.415
            10,    TOP_BOX.8,    TOP_BOX.26,    44.11191
            11,    TOP_BOX.9,    TOP_BOX.11,    579.255
            12,    TOP_BOX.9,    TOP_BOX.12,    51.62032
            13,    TOP_BOX.10,    TOP_BOX.11,    110.2798
            14,    TOP_BOX.10,    TOP_BOX.25,    44.11191
            15,    TOP_BOX.11,    TOP_BOX.30,    51.62032
            16,    TOP_BOX.12,    TOP_BOX.29,    110.2798
            17,    TOP_BOX.12,    TOP_BOX.30,    579.255
            18,    TOP_BOX.13,    TOP_BOX.14,    64.38957
            19,    TOP_BOX.13,    TOP_BOX.34,    109.4525
            20,    TOP_BOX.14,    TOP_BOX.16,    109.4525
            21,    TOP_BOX.15,    TOP_BOX.20,    4872.622
            22,    TOP_BOX.15,    TOP_BOX.21,    5.78547
            23,    TOP_BOX.16,    TOP_BOX.34,    64.38957
            24,    TOP_BOX.17,    TOP_BOX.33,    72.78869
            25,    TOP_BOX.17,    TOP_BOX.35,    96.82276
            26,    TOP_BOX.19,    TOP_BOX.27,    244.2182
            27,    TOP_BOX.19,    TOP_BOX.40,    28.85781
            28,    TOP_BOX.20,    TOP_BOX.22,    5.78547
            29,    TOP_BOX.21,    TOP_BOX.22,    4872.622
            30,    TOP_BOX.23,    TOP_BOX.24,    2988.62
            31,    TOP_BOX.23,    TOP_BOX.25,    12.76924
            32,    TOP_BOX.23,    TOP_BOX.36,    14.61539
            33,    TOP_BOX.24,    TOP_BOX.26,    12.76924
            34,    TOP_BOX.24,    TOP_BOX.37,    14.61539
            35,    TOP_BOX.25,    TOP_BOX.26,    2056.775
            36,    TOP_BOX.27,    TOP_BOX.28,    2132.33
            37,    TOP_BOX.27,    TOP_BOX.32,    66.76648
            38,    TOP_BOX.27,    TOP_BOX.36,    12.76924
            39,    TOP_BOX.28,    TOP_BOX.29,    37.90867
            40,    TOP_BOX.28,    TOP_BOX.37,    12.76924
            41,    TOP_BOX.29,    TOP_BOX.32,    721.97
            42,    TOP_BOX.30,    TOP_BOX.32,    110.2798
            43,    TOP_BOX.31,    TOP_BOX.33,    96.82276
            44,    TOP_BOX.31,    TOP_BOX.35,    72.78869
            45,    TOP_BOX.32,    TOP_BOX.40,    244.2182
            46,    TOP_BOX.36,    TOP_BOX.37,    2988.62
            47,    TOP_BOX.38,    TOP_BOX.39,    209.875
HEADER SUBROUTINE
      SUBROUTINE TDHTR
C     This routine is to hold heaters at their midpoint temps
C     for steady state solutions.
      RETURN
      END
      SUBROUTINE TDREL
C     This routine is to release heaters for transient runs
C     for steady state solutions.
F     RETURN
F     END
F     SUBROUTINE TDHTOT
C     This routine prints out heater ontime and cycle summaries
F     RETURN
F     END
F     SUBROUTINE TDHTRST
C     This routine resets heater statistics
F     RETURN
F     END
F     SUBROUTINE TDPREBL
C     This routine executes logic before the build statement
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TDPOSTBL
C     This routine executes logic after the build statement
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TDPOSTSL
C     This routine executes logic after the solution
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE BASEPLOT
      CALL COMMON
F     RETURN
F     END
