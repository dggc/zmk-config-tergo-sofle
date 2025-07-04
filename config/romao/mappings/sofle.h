/*                KEY POSITIONS

  ╭─────────────────────╮ ╭─────────────────────╮
  │ LTP LTR LTM LTI LTC │ │ RTC RTI RTM RTR RTP │
  │ LHP LHR LHM LHI LHC │ │ RHC RHI RHM RHR RHP │
  │ LBP LBR LBM LBI LBC │ │ RBC RBI RBM RBR RBP │
  ╰───────╮ L2  L1  L0  │ │ R0  R1  R2  ╭───────╯
          ╰─────────────╯ ╰─────────────╯ 
  ╭─────────────────────╮ ╭─────────────────────╮
  │  0   1   2   3   4  │ │   5   6   7   8   9 │
  │ 10  11  12  13  14  │ │  15  16  17  18  19 │
  │ 20  21  22  23  24  │ │  25  26  27  28  29 │
  ╰──────╮  30  31  32  │ │  33  34  35 ╭───────╯
         ╰──────────────╯ ╰─────────────╯

*/

#define XXX &none
#define ___ &trans
#if !defined (ROMAO_LAYOUTMAPPING_SOFLE)

#define ROMAO_LAYOUTMAPPING_SOFLE( \
     LTP, LTR, LTM, LTI, LTC,                RTC, RTI, RTM, RTR, RTP, \
     LHP, LHR, LHM, LHI, LHC,                RHC, RHI, RHM, RHR, RHP, \
     LBP, LBR, LBM, LBI, LBC,                RBC, RBI, RBM, RBR, RBP, \
                L2 , L1 , L0 ,                R0 , R1 , R2            \
) \
XXX  XXX  XXX  XXX  XXX  XXX                 XXX  XXX  XXX  XXX  XXX  XXX \
XXX  LTP  LTR  LTM  LTI  LTC                 RTC  RTI  RTM  RTR  RTP  XXX \
XXX  LHP  LHR  LHM  LHI  LHC                 RHC  RHI  RHM  RHR  RHP  XXX \
XXX  LBP  LBR  LBM  LBI  LBC  ___       ___  RBC  RBI  RBM  RBR  RBP  XXX \
          XXX  XXX  L2   L1   L0        R0   R1   R2   XXX  XXX

#endif // SOFLE_H

#define ROMAO_LAYER_MAPPING ROMAO_LAYOUTMAPPING_SOFLE