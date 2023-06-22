HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 6.2 Patch 36
C    Generated on Thu Jun 22 19:53:01 2023
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
            1,    293.15,    2.945791e+08 
            2,    293.15,    2.945791e+08 
            3,    293.15,    2.184090e+08 
            4,    293.15,    3.610654e+09 
            5,    293.15,    1.876952e+08 
            6,    293.15,    3.798349e+09 
            7,    293.15,    3.829063e+09 
            8,    293.15,    2.900744e+08 
            9,    293.15,    3.375411e+08 
            10,    293.15,    1.160298e+08 
            11,    293.15,    2.478818e+08 
            12,    293.15,    8.754973e+08 
            13,    293.15,    1.160298e+08 
            14,    293.15,    2.315974e+08 
            15,    293.15,    2.618075e+08 
            16,    293.15,    5.010376e+08 
            17,    293.15,    5.010376e+08 
            18,    293.15,    2.184090e+08 
            19,    293.15,    3.610654e+09 
            20,    293.15,    5.010376e+08 
            21,    293.15,    5.010376e+08 
            22,    293.15,    1.876952e+08 
            23,    293.15,    1.876952e+08 
            24,    293.15,    2.184090e+08 
HEADER CONDUCTOR DATA, BOT_BOX
            1,    BOT_BOX.1,    BOT_BOX.2,    11.57094
            2,    BOT_BOX.3,    BOT_BOX.7,    28.85781
            3,    BOT_BOX.3,    BOT_BOX.24,    244.2182
            4,    BOT_BOX.4,    BOT_BOX.7,    99.38453
            5,    BOT_BOX.4,    BOT_BOX.19,    70.91246
            6,    BOT_BOX.5,    BOT_BOX.6,    209.875
            7,    BOT_BOX.5,    BOT_BOX.22,    33.58
            8,    BOT_BOX.6,    BOT_BOX.7,    70.91246
            9,    BOT_BOX.6,    BOT_BOX.19,    99.38453
            10,    BOT_BOX.6,    BOT_BOX.23,    33.58
            11,    BOT_BOX.7,    BOT_BOX.18,    244.2182
            12,    BOT_BOX.16,    BOT_BOX.20,    15.02263
            13,    BOT_BOX.17,    BOT_BOX.21,    15.02263
            14,    BOT_BOX.18,    BOT_BOX.24,    28.85781
            15,    BOT_BOX.22,    BOT_BOX.23,    209.875
HEADER NODE DATA, CHIP
            1,    293.15,    4.885067e+07 
HEADER CONDUCTOR DATA, CHIP
C Contact - Face Contactor[CHIP][0]::3DA
            1,    CHIP.1,    STACK_PCB.11,    7.
            2,    CHIP.1,    STACK_PCB.16,    3.
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
            1,    293.15,    1.798751e+09 
            2,    293.15,    1.798751e+09 
            3,    293.15,    1.798751e+09 
            4,    293.15,    1.798751e+09 
            5,    293.15,    1.798751e+09 
            6,    293.15,    1.798751e+09 
            7,    293.15,    1.798751e+09 
            8,    293.15,    1.798751e+09 
            9,    293.15,    3.597502e+09 
            10,    293.15,    3.597502e+09 
            11,    293.15,    3.597502e+09 
            12,    293.15,    3.597502e+09 
            13,    293.15,    3.597502e+09 
            14,    293.15,    3.597502e+09 
            15,    293.15,    3.597502e+09 
            16,    293.15,    3.597502e+09 
HEADER CONDUCTOR DATA, HEADER
            1,    HEADER.1,    HEADER.2,    152.8777
            2,    HEADER.1,    HEADER.3,    4.405376
            3,    HEADER.1,    HEADER.5,    561.7216
C Contact - Face Contactor[HEADER][1]::48D
            4,    HEADER.1,    STACK_PCB.6,    0.15
            5,    HEADER.1,    STACK_PCB.9,    0.1
            6,    HEADER.2,    HEADER.4,    4.405376
            7,    HEADER.2,    HEADER.6,    561.7216
C Contact - Face Contactor[HEADER][1]::48D
            8,    HEADER.2,    STACK_PCB.6,    0.15
            9,    HEADER.2,    STACK_PCB.9,    0.1
            10,    HEADER.3,    HEADER.4,    152.8777
            11,    HEADER.3,    HEADER.7,    561.7216
C Contact - Face Contactor[HEADER][1]::48D
            12,    HEADER.3,    STACK_PCB.6,    0.175
            13,    HEADER.3,    STACK_PCB.14,    0.075
            14,    HEADER.4,    HEADER.8,    561.7216
C Contact - Face Contactor[HEADER][1]::48D
            15,    HEADER.4,    STACK_PCB.6,    0.175
            16,    HEADER.4,    STACK_PCB.14,    0.075
            17,    HEADER.5,    HEADER.6,    152.8777
            18,    HEADER.5,    HEADER.7,    4.405376
            19,    HEADER.6,    HEADER.8,    4.405376
            20,    HEADER.7,    HEADER.8,    152.8777
            21,    HEADER.9,    HEADER.10,    305.7553
            22,    HEADER.9,    HEADER.13,    280.8608
            23,    HEADER.9,    HEADER.15,    8.810753
C Contact - Face Contactor[HEADER][2]::486
            24,    HEADER.9,    STACK_PCB.6,    0.175
            25,    HEADER.9,    STACK_PCB.14,    0.075
            26,    HEADER.10,    HEADER.14,    280.8608
            27,    HEADER.10,    HEADER.16,    8.810753
C Contact - Face Contactor[HEADER][2]::486
            28,    HEADER.10,    STACK_PCB.6,    0.175
            29,    HEADER.10,    STACK_PCB.14,    0.075
            30,    HEADER.11,    HEADER.12,    305.7553
            31,    HEADER.11,    HEADER.13,    8.810753
            32,    HEADER.11,    HEADER.15,    280.8608
            33,    HEADER.12,    HEADER.14,    8.810753
            34,    HEADER.12,    HEADER.16,    280.8608
            35,    HEADER.13,    HEADER.14,    305.7553
            36,    HEADER.15,    HEADER.16,    305.7553
C Contact - Face Contactor[HEADER][2]::486
            37,    HEADER.15,    STACK_PCB.6,    0.15
            38,    HEADER.15,    STACK_PCB.9,    0.1
            39,    HEADER.16,    STACK_PCB.6,    0.15
            40,    HEADER.16,    STACK_PCB.9,    0.1
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
            10,    293.15,    3.070613e+08 
            11,    293.15,    1.827538e+09 
            12,    293.15,    3.040954e+09 
            13,    293.15,    3.070613e+08 
            14,    293.15,    1.520477e+09 
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
            12,    STACK_PCB.6,    STACK_PCB.14,    9.128675
            13,    STACK_PCB.8,    STACK_PCB.9,    8.912619
            14,    STACK_PCB.10,    STACK_PCB.11,    26.24
            15,    STACK_PCB.10,    STACK_PCB.13,    3.100625
            16,    STACK_PCB.11,    STACK_PCB.12,    8.912619
            17,    STACK_PCB.11,    STACK_PCB.15,    3.100625
            18,    STACK_PCB.11,    STACK_PCB.16,    9.128675
            19,    STACK_PCB.12,    STACK_PCB.14,    8.912619
            20,    STACK_PCB.13,    STACK_PCB.15,    26.24
HEADER NODE DATA, TOP_BOX
            1,    293.15,    1.444262e+10 
            2,    293.15,    1.703528e+09 
            3,    293.15,    2.184090e+08 
            4,    293.15,    2.184090e+08 
            5,    293.15,    1.876952e+08 
            6,    293.15,    1.876952e+08 
            7,    293.15,    2.184090e+08 
            8,    293.15,    3.945012e+08 
            9,    293.15,    8.427980e+08 
            10,    293.15,    1.147640e+09 
            11,    293.15,    9.862530e+08 
            12,    293.15,    3.945012e+08 
            13,    293.15,    2.315974e+08 
            14,    293.15,    2.618075e+08 
            15,    293.15,    2.945791e+08 
            16,    293.15,    1.703528e+09 
            17,    293.15,    1.488345e+09 
            18,    293.15,    1.703528e+09 
            19,    293.15,    2.184090e+08 
            20,    293.15,    2.945791e+08 
            21,    293.15,    1.703528e+09 
            22,    293.15,    1.488345e+09 
            23,    293.15,    1.876952e+08 
            24,    293.15,    1.876952e+08 
HEADER CONDUCTOR DATA, TOP_BOX
            1,    TOP_BOX.2,    TOP_BOX.18,    3190.1
            2,    TOP_BOX.3,    TOP_BOX.4,    244.2182
            3,    TOP_BOX.3,    TOP_BOX.7,    28.85781
            4,    TOP_BOX.4,    TOP_BOX.19,    28.85781
            5,    TOP_BOX.5,    TOP_BOX.6,    209.875
            6,    TOP_BOX.5,    TOP_BOX.23,    33.58
            7,    TOP_BOX.6,    TOP_BOX.24,    33.58
            8,    TOP_BOX.7,    TOP_BOX.19,    244.2182
            9,    TOP_BOX.15,    TOP_BOX.20,    11.57094
            10,    TOP_BOX.16,    TOP_BOX.21,    3190.1
            11,    TOP_BOX.17,    TOP_BOX.22,    58.46157
            12,    TOP_BOX.23,    TOP_BOX.24,    209.875
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
