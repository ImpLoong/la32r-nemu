/* XXX_W_MASK ONLY FOR RW BITS */


#define CRMD_W_MASK         0x000001ff
// 0 ~ 8
#define PRMD_W_MASK         0x00000007
// 0 ~ 2
#define EUEN_W_MASK         0x00000001
// 0
#define ECFG_W_MASK         0x00001fff
// 0 ~ 12
#define ESTAT_W_MASK        0x00000003
// 0 ~ 1
#define ERA_W_MASK          0xffffffff
// 0 ~ 31
#define BADV_W_MASK         0xffffffff
// 0 ~ 31
#define EENTRY_W_MASK       0xffffffc0
// 6 ~ 31

// CPUID will not be writen or set

#define SAVE_W_MASK         0xffffffff
// 0 ~ 31, SAVE0 ~ SAVE4

#define LLBCTL_W_MASK       0x00000004
// 2
#define LLBCTL_WCLLB_MASK   0x00000002 
// 1
#define TLBIDX_W_MASK       0xbf00001f
// 0 ~ 4, 24 ~ 29, 31
#define TLBEHI_W_MASK       0xffffe000
// 13 ~ 31
#define TLBELO_W_MASK       0xffffff7f
// 0 ~ 6, 8 ~ 31
#define ASID_W_MASK         0x000003ff
// 0 ~ 9
#define PGDL_W_MASK         0xfffff000
// 12 ~ 31
#define PGDH_W_MASK         0xfffff000
// 12 ~ 31 
#define PGD_R_MASK          0xfffff000
// 12 ~ 31
#define TLBRENTRY_W_MASK    0xffffffc0
// 6 ~ 31
#define DMW0_W_MASK         0xee000039
// 0, 3 ~ 5, 25 ~ 27, 29 ~ 31, DMW0 ~ DMW1
#define TID_W_MASK          0xffffffff
// 0 ~ 31
#define TCFG_W_MASK         0xffffffff
// 0 ~ 31
#define TVAL_R_MASK         0xffffffff
// 0 ~ 31
#define TICLR_CLR_MASK      0x00000001
// 0
