/*                              Redox KEY MATRIX / LAYOUT MAPPING

          ╭────────────────────────────╮           ╭────────────────────────────╮
          │  0   1   2   3   4   5     │           │      6   7   8   9  10  11 │
          │ 12  13  14  15  16  17  18 │           │ 19  20  21  22  23  24  25 │
          │ 26  27  28  29  30  31  32 │           │ 33  34  35  36  37  38  39 │
          │ 40  41  42  43  44  45 ╭────────╮ ╭────────╮ 50  51  52  53  54  55 │
          │ 56  57  58  59    ╭────╯ 46  47 │ │ 48  49 ╰────╮    66  67  68  69 │
          ╰───────────────────│  60  61  62 │ │ 63  64  65  │───────────────────╯
                              ╰─────────────╯ ╰─────────────╯

  ╭───────────────────────────────────╮             ╭───────────────────────────────────╮
  │ LN6  LN5  LN4  LN3  LN2  LN1      │             │      RN1  RN2  RN3  RN4  RN5  RN6 │
  │ LT6  LT5  LT4  LT3  LT2  LT1  LT0 │             │ RT0  RT1  RT2  RT3  RT4  RT5  RT6 │
  │ LM6  LM5  LM4  LM3  LM2  LM1  LM0 │             │ RM0  RM1  RM2  RM3  RM4  RM5  RM6 │
  │ LB6  LB5  LB4  LB3  LB2  LB1 ╭──────────╮ ╭──────────╮ RB1  RB2  RB3  RB4  RB5  RB6 │
  │ LF6  LF5  LF4  LF3      ╭────╯ LH4  LH3 │ │ RH3  RH4 ╰────╮      RF3  RF4  RF5  RF6 │
  ╰─────────────────────────│ LH2  LH1  LH0 │ │ RH0  RH1  RH2 │─────────────────────────╯
                            ╰───────────────╯ ╰───────────────╯
*/
#pragma once


#define LN1  5  // left-number row
#define LN2  4
#define LN3  3
#define LN4  2
#define LN5  1
#define LN6  0

#define RN1  6   // right-number row
#define RN2  7
#define RN3  8
#define RN4  9
#define RN5 10
#define RN6 11

#define LT0 18  // left-top row
#define LT1 17
#define LT2 16
#define LT3 15
#define LT4 14
#define LT5 13
#define LT6 12

#define RT0 19  // right-top row
#define RT1 20
#define RT2 21
#define RT3 22
#define RT4 23
#define RT5 24
#define RT6 25

#define LM0 32  // left-middle row
#define LM1 31
#define LM2 30
#define LM3 29
#define LM4 28
#define LM5 27
#define LM6 26

#define RM0 33  // right-middle row
#define RM1 34
#define RM2 35
#define RM3 36
#define RM4 37
#define RM5 38
#define RM6 39

#define LB1 45  // left-bottom row
#define LB2 44
#define LB3 43
#define LB4 42
#define LB5 41
#define LB6 40

#define RB1 50 // right-bottom row
#define RB2 51
#define RB3 52
#define RB4 53
#define RB5 54
#define RB6 55

#define LF3 59  // left floor keys
#define LF4 58
#define LF5 57
#define LF6 56

#define RF3 66  // right floor keys
#define RF4 67
#define RF5 68
#define RF6 69

#define LH0 62  // left thumb keys
#define LH1 61
#define LH2 60
#define LH3 47
#define LH4 46

#define RH0 63  // right thumb keys
#define RH1 64
#define RH2 65
#define RH3 48
#define RH4 49

#define KEYS_LEFT   LN6 LN5 LN4 LN3 LN2 LN1 /**/ LT6 LT5 LT4 LT3 LT2 LT1 LT0 /**/ LM6 LM5 LM4 LM3 LM2 LM1 LM0 /**/ LB6 LB5 LB4 LB3 LB2 LB1 /**/ LF3 LF4 LF5 LF6
#define KEYS_RIGHT  RN1 RN2 RN3 RN4 RN5 RN6 /**/ RT0 RT1 RT2 RT3 RT4 RT5 RT6 /**/ RM0 RM1 RM2 RM3 RM4 RM5 RM6 /**/ RB1 RB2 RB3 RB4 RB5 RB6 /**/ RF3 RF4 RF5 RF6
#define KEYS_THUMB  LH4 LH3 LH2 LH1 LH0     /**/ RH0 RH1 RH2 RH3 RH4
