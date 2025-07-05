// Layer definitions for ROMAO keymap
// Based on the keymap configuration provided

#define R_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#define ROMAO_LAYER_LIST \
ROMAO_X(DEFAULT,   "ROMAK") \
ROMAO_X(CAMEL_CASE,  "CAMEL") \
ROMAO_X(SNAKE_CASE,  "SNAKE") \
ROMAO_X(CONSTANT,  "CONST") \
ROMAO_X(KEBAB_CASE,  "KEBAB") \
ROMAO_X(SLASH_CASE,  "SLASH") \
ROMAO_X(SPACING,  "SPACE") \
ROMAO_X(CAPSWORD,  "CASE") \
ROMAO_X(CAPSLINE,  "CASE") \
ROMAO_X(ALPHA2,  "ROMAK") \
ROMAO_X(NUMBERS,  "NUM") \
ROMAO_X(SYMBOLS,  "SYM") \
ROMAO_X(SENTENCE_CASE,  "CASE") \
ROMAO_X(CCEDIL,  "Ç EXT") \
ROMAO_X(SHIFTED_ALPHA2,  "ROMAK") \
ROMAO_X(CASE_ALPHA2,  "CASE") \
ROMAO_X(CASE_CCEDIL,  "CASE") \
ROMAO_X(SHORTCUTS,  "SHORTS") \
ROMAO_X(MEHS,  "MEHS") \
ROMAO_X(PLAIN1,  "PLAIN") \
ROMAO_X(PLAIN2,  "PLAIN") \
ROMAO_X(SHIFTED_PLAIN2,  "PLAIN") \
// ROMAO_X(SECONDARY_ALTERNATE_REPEAT,  "ROMAK") \
// ROMAO_X(NAVIGATION,  "NAV") \
// ROMAO_X(NUMBERS_COPY,  "NUM") \
// ROMAO_X(SYMBOLS_COPY,  "SYM") \
// ROMAO_X(MEDIA,  "MOUSE") \
// ROMAO_X(NAVIGATION_COPY,  "NAV") \
// ROMAO_X(TEXT,  "TEXT") \
// ROMAO_X(FUNCTIONS,  "FUN") \
// ROMAO_X(SMART,  "SMART")

#define ROMAO_LAYER_DEFAULT \
&kp Q,               &kp B,               &kp M,               &kp G,               &kp K,               &kp X,               &kp L,               &kp O,               &kp U,               &kp Y, \
&lt SHORTS D,        &mt LCTL N,          &mt LALT S,          &mt LSFT T,          &kp W,               &kp Z,               &mt LSFT R,          &mt LALT A,          &mt LCTL E,          &lt SHORTS I, \
&mc_qu,              &mt LGUI F,          &mt LGUI C,          &mt LGUI P,          &kp V,               &kp J,               &ht_magic LGUI 0,    &lt_comma SHORTS 0,  &th_dot 0 0,         &kp H, \
                                          &key_repeat,         &ht_repeat NAV 0,    &ltn_num_spc 0 0,    &msl_sym_a2 0 0,     &ht_shift MEDIA 0,   &key_repeat

#define ROMAO_LAYER_CAMEL_CASE \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
                                          &trans,              &trans,              &msk_sft NUM 0,      &trans,              &trans,              &trans

#define ROMAO_LAYER_SNAKE_CASE \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
                                          &trans,              &trans,              &msk_unds NUM 0,     &trans,              &trans,              &trans

#define ROMAO_LAYER_CONSTANT \
&kp RS(Q),           &kp RS(B),           &kp RS(M),           &kp RS(G),           &kp RS(K),           &kp RS(X),           &kp RS(L),           &kp RS(O),           &kp RS(U),           &kp RS(Y), \
&lt SHORTS RS(D),    &mt LCTL RS(N),      &mt LALT RS(S),      &mt LSFT RS(T),      &kp RS(W),           &kp RS(Z),           &mt LSFT RS(R),      &mt LALT RS(A),      &mt LCTL RS(E),      &lt SHORTS RS(I), \
&mc_qu_c,            &mt LGUI RS(F),      &mt LGUI RS(C),      &mt LGUI RS(P),      &kp RS(V),           &kp RS(J),           &ht_magic_c LGUI 0,  &lt_comma SHORTS 0,  &th_dot 0 0,         &trans, \
                                          &trans,              &trans,              &msk_unds NUM 0,     &lt_case_a2 SYM 0,   &trans,              &trans

#define ROMAO_LAYER_KEBAB_CASE \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
                                          &trans,              &trans,              &msk_dash NUM 0,     &trans,              &trans,              &trans

#define ROMAO_LAYER_SLASH_CASE \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
                                          &trans,              &trans,              &msk_slash NUM 0,    &trans,              &trans,              &trans

#define ROMAO_LAYER_SPACING \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
&trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
                                          &trans,              &trans,              &msk_spcb NUM 0,     &trans,              &trans,              &trans

#define ROMAO_LAYER_CAPSWORD \
&kp RS(Q),           &kp RS(B),           &kp RS(M),           &kp RS(G),           &kp RS(K),           &kp RS(X),           &kp RS(L),           &kp RS(O),           &kp RS(U),           &kp RS(Y), \
&lt SHORTS RS(D),    &mt LCTL RS(N),      &mt LALT RS(S),      &mt LSFT RS(T),      &kp RS(W),           &kp RS(Z),           &mt LSFT RS(R),      &mt LALT RS(A),      &mt LCTL RS(E),      &lt SHORTS RS(I), \
&mc_qu_c,            &mt LGUI RS(F),      &mt LGUI RS(C),      &mt LGUI RS(P),      &kp RS(V),           &kp RS(J),           &ht_magic_c LGUI 0,  &lt_comma SHORTS 0,  &th_dot 0 0,         &kp RS(H), \
                                          &trans,              &trans,              &msk_spc NUM 0,      &lt_case_a2 SYM 0,   &lt_cancel MEDIA 0,  &trans

#define ROMAO_LAYER_CAPSLINE \
&kp RS(Q),           &kp RS(B),           &kp RS(M),           &kp RS(G),           &kp RS(K),           &kp RS(X),           &kp RS(L),           &kp RS(O),           &kp RS(U),           &kp RS(Y), \
&lt SHORTS RS(D),    &mt LCTL RS(N),      &mt LALT RS(S),      &mt LSFT RS(T),      &kp RS(W),           &kp RS(Z),           &mt LSFT RS(R),      &mt LALT RS(A),      &mt LCTL RS(E),      &lt SHORTS RS(I), \
&mc_qu_c,            &mt LGUI RS(F),      &mt LGUI RS(C),      &mt LGUI RS(P),      &kp RS(V),           &kp RS(J),           &ht_magic_c LGUI 0,  &lt_comma SHORTS 0,  &th_dot 0 0,         &kp RS(H), \
                                          &trans,              &trans,              &trans,              &lt_case_a2 SYM 0,   &lt_cancel MEDIA 0,  &trans

#define ROMAO_LAYER_ALPHA2 \
&none,               &kp Q,               &mc_qu,              &kp K,               &none,               &none,               &ac_ocir,            &ac_oacu,            &ac_uacu,            &none, \
&kp Y,               &kp Z,               &kp X,               &kp W,               &none,               &none,               &ac_atil,            &ac_aacu,            &ac_eacu,            &ac_iacu, \
&none,               &kp J,               &mc_ced,             &reversed_magic,     &none,               &none,               &ac_otil,            &ac_acir,            &ac_ecir,            &none, \
                                          &none,               &mc_sqo,             &trans,              &kp SPACE,           &mc_sqo,             &none

#define ROMAO_LAYER_NUMBERS \
&none,               &th_lbrc 0 0,        &th_rbrc 0 0,        &kp BSLH,            &none,               &none,               &mc_n7,              &mc_n8,              &mc_n9,              &none, \
&lt_deg FUN 0,       &th_lpar 0 0,        &th_rpar 0 0,        &kp AMPS,            &none,               &none,               &mc_n4,              &mc_n5,              &mc_n6,              &kp DOT, \
&none,               &th_lbkt 0 0,        &th_rbkt 0 0,        &kp PIPE,            &none,               &none,               &mc_n1,              &mc_n2,              &mc_n3,              &none, \
                                          &none,               &trans,              &trans,              &hlt SYM SPACE,      &lt_n0 MEDIA 0,      &none

#define ROMAO_LAYER_SYMBOLS \
&none,               &mc_tilde,           &kp HASH,            &th_sqo 0 0,         &none,               &none,               &th_perc 0 0,        &th_eql 0 0,         &th_colon 0 0,       &none, \
&kp AT,              &th_caret_z 0 0,     &kp DOLLAR,          &th_dqo 0 0,         &none,               &none,               &th_qmark 0 0,       &kp MINUS,           &kp PLUS,            &lt SMART COMMA, \
&none,               &mc_lt,              &mc_gt,              &th_bti 0 0,         &none,               &none,               &th_excl 0 0,        &kp SLASH,           &kp STAR,            &none, \
                                          &none,               &trans,              &hlt NUM_CP SPACE,   &none,               &trans,              &none

#define ROMAO_LAYER_SENTENCE_CASE \
&kp LS(Q),           &kp LS(B),           &kp LS(M),           &kp LS(G),           &kp LS(K),           &kp LS(X),           &kp LS(L),           &kp LS(O),           &kp LS(U),           &kp LS(Y), \
&kp LS(D),           &mt LCTL LS(N),      &mt LALT LS(S),      &mt LSFT LS(T),      &kp LS(W),           &kp LS(Z),           &mt LSFT LS(R),      &mt LALT LS(A),      &mt LCTL LS(E),      &kp LS(I), \
&mc_qu_s,            &mt LGUI LS(F),      &mt LGUI LS(C),      &mt LGUI LS(P),      &kp LS(V),           &kp LS(J),           &ht_magic_c LGUI 0,  &lt_comma SHORTS 0,  &th_dot 0 0,         &kp LS(H), \
                                          &trans,              &trans,              &trans,              &lt_sft_a2 SYM_CP 0, &trans,              &trans

#define ROMAO_LAYER_CCEDIL \
&none,               &none,               &none,               &none,               &none,               &none,               &none,               &trans,              &trans,              &none, \
&none,               &none,               &none,               &mc_aotil,           &none,               &none,               &ac_atil,            &trans,              &none,               &none, \
&none,               &none,               &none,               &mc_otiles,          &none,               &none,               &ac_otil,            &trans,              &trans,              &none, \
                                          &none,               &sl ALPHA2,          &trans,              &trans,              &trans,              &none

#define ROMAO_LAYER_SHIFTED_ALPHA2 \
&none,               &kp LS(Q),           &mc_qu_s,            &kp LS(K),           &none,               &none,               &ac_ocir_s,          &ac_oacu_s,          &ac_uacu_s,          &none, \
&kp LS(Y),           &kp LS(Z),           &kp LS(X),           &kp LS(W),           &none,               &none,               &ac_atil_s,          &ac_aacu_s,          &ac_eacu_s,          &ac_iacu_s, \
&none,               &kp LS(J),           &mc_ced_s,           &reversed_magic_c,   &none,               &none,               &ac_otil_s,          &ac_acir_s,          &ac_ecir_s,          &none, \
                                          &none,               &mc_sqo,             &trans,              &kp SPACE,           &mc_sqo,             &none

#define ROMAO_LAYER_CASE_ALPHA2 \
&none,               &kp RS(Q),           &mc_qu_c,            &kp RS(K),           &none,               &none,               &ac_ocir_c,          &ac_oacu_c,          &ac_uacu_c,          &none, \
&kp RS(Y),           &kp RS(Z),           &kp RS(X),           &kp RS(W),           &none,               &none,               &ac_atil_c,          &ac_aacu_c,          &ac_eacu_c,          &ac_iacu_c, \
&none,               &kp RS(J),           &mc_ced_c,           &reversed_magic_c,   &none,               &none,               &ac_otil_c,          &ac_acir_c,          &ac_ecir_c,          &none, \
                                          &none,               &mc_sqo,             &trans,              &kp SPACE,           &mc_sqo,             &none

#define ROMAO_LAYER_CASE_CCEDIL \
&none,               &none,               &none,               &none,               &none,               &none,               &none,               &trans,              &trans,              &none, \
&none,               &none,               &none,               &mc_aotil_c,         &none,               &none,               &ac_atil_c,          &trans,              &none,               &none, \
&none,               &none,               &none,               &mc_otiles_c,        &none,               &none,               &ac_otil_c,          &trans,              &trans,              &none, \
                                          &none,               &sl CASE_A2,         &trans,              &trans,              &trans,              &none

#define ROMAO_LAYER_SHORTCUTS \
&none,               &mc_emoji,           &mc_files,           &mc_screenshot,      &none,               &none,               &kp C_SLEEP,         &to NUM,             &to PLAIN1,          &none, \
&none,               &mc_zoom_out,        &mc_zoom_in,         &mc_reset_zoom,      &none,               &none,               &mc_lock,            &to NAV,             &to MEDIA,           &none, \
&none,               &mc_close,           &mc_refresh,         &mc_reopen,          &none,               &none,               &leader,             &to FUN,             &to MEHS,            &none, \
                                          &none,               &ht_repeat TEXT 0,   &lt_comma_spc FUN 0, &lt SMART SPACE,     &ht_repeat TEXT 0,   &none

#define ROMAO_LAYER_MEHS \
&none,               &mc_meh_b,           &mc_meh_m,           &mc_meh_g,           &none,               &none,               &mc_meh_l,           &mc_meh_o,           &mc_meh_u,           &none, \
&mc_meh_d,           &mc_meh_n,           &mc_meh_s,           &mc_meh_t,           &none,               &none,               &mc_meh_r,           &mc_meh_a,           &mc_meh_e,           &mc_meh_i, \
&none,               &mt_meh_f LGUI 0,    &mt_meh_c LGUI 0,    &mt_meh_p LGUI 0,    &none,               &none,               &mt_meh_h LGUI 0,    &mt_meh_comm LGUI 0, &mt_meh_dot LGUI 0,  &none, \
                                          &none,               &lt_plain1 NAV 0,    &hsk LGUI LGUI,      &hsk LGUI LGUI,      &lt_plain1 NAV 0,    &none

#define ROMAO_LAYER_PLAIN1 \
&kp Q,               &kp B,               &kp M,               &kp G,               &kp K,               &kp X,               &kp L,               &kp O,               &kp U,               &kp Y, \
&kp D,               &kp N,               &kp S,               &kp T,               &kp W,               &kp Z,               &kp R,               &kp A,               &kp E,               &kp I, \
&none,               &kp F,               &kp C,               &kp P,               &kp V,               &kp J,               &kp H,               &kp COMMA,           &kp DOT,             &none, \
                                          &none,               &ht_repeat NAV 0,    &lt NUM_CP SPACE,    &msl_p2 SYM_CP 0,    &ht_sft_p2 MEDIA,    &none

#define ROMAO_LAYER_PLAIN2 \
&none,               &kp Q,               &mc_qu,              &kp K,               &none,               &none,               &ac_ocir,            &ac_oacu,            &ac_uacu,            &none, \
&kp Y,               &kp Z,               &kp X,               &kp W,               &none,               &none,               &ac_atil,            &ac_aacu,            &ac_eacu,            &ac_iacu, \
&none,               &kp J,               &mc_ced,             &kp V,               &none,               &none,               &ac_otil,            &ac_acir,            &ac_ecir,            &none, \
                                          &none,               &mc_sqo,             &lt NUM_CP SPACE,    &lt SYM_CP SPACE,    &mc_sqo,             &none

#define ROMAO_LAYER_SHIFTED_PLAIN2 \
&none,               &kp LS(Q),           &mc_qu_s,            &kp LS(K),           &none,               &none,               &ac_ocir_s,          &ac_oacu_s,          &ac_uacu_s,          &none, \
&kp LS(Y),           &kp LS(Z),           &kp LS(X),           &kp LS(W),           &none,               &none,               &ac_atil_s,          &ac_aacu_s,          &ac_eacu_s,          &ac_iacu_s, \
&none,               &kp LS(J),           &mc_ced_s,           &kp LS(V),           &none,               &none,               &ac_otil_s,          &ac_acir_s,          &ac_ecir_s,          &none, \
                                          &none,               &mc_sqo,             &lt NUM_CP SPACE,    &lt SYM_CP SPACE,    &mc_sqo,             &none

// #define ROMAO_LAYER_SECONDARY_ALTERNATE_REPEAT \
// &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
// &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
// &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans,              &trans, \
//                                           &trans,              &a2_alt_repeat,      &trans,              &trans,              &trans,              &trans

// #define ROMAO_LAYER_NAVIGATION \
// &none,               &mc_swapper,         &mc_tabs,            &mc_launcher,        &none,               &none,               &kp TAB,             &kp ENTER,           &kp ESC,             &none, \
// &lt TEXT INS,        &kp LCTL,            &kp LALT,            &kp LSFT,            &none,               &none,               &kp LEFT,            &kp DOWN,            &kp UP,              &kp RIGHT, \
// &none,               &kp LGUI,            &kp LGUI,            &kp LGUI,            &none,               &none,               &kp DEL,             &kp HOME,            &kp END,             &none, \
//                                           &none,               &trans,              &none,               &hlt SYM_CP SPACE,   &mo MEDIA,           &none

// #define ROMAO_LAYER_NUMBERS_COPY \
// &none,               &th_lbrc 0 0,        &th_rbrc 0 0,        &kp BSLH,            &none,               &none,               &mc_n7,              &mc_n8,              &mc_n9,              &none, \
// &mc_deg,             &th_lpar 0 0,        &th_rpar 0 0,        &kp AMPS,            &none,               &none,               &mc_n4,              &mc_n5,              &mc_n6,              &kp DOT, \
// &none,               &th_lbkt 0 0,        &th_rbkt 0 0,        &kp PIPE,            &none,               &none,               &mc_n1,              &mc_n2,              &mc_n3,              &none, \
//                                           &none,               &trans,              &trans,              &hlt SYM_CP SPACE,   &lt_n0 MEDIA 0,      &none

// #define ROMAO_LAYER_SYMBOLS_COPY \
// &none,               &mc_tilde,           &kp HASH,            &th_sqo 0 0,         &none,               &none,               &th_perc 0 0,        &th_eql 0 0,         &th_colon 0 0,       &none, \
// &kp AT,              &th_caret_z 0 0,     &kp DOLLAR,          &th_dqo 0 0,         &none,               &none,               &th_qmark 0 0,       &kp MINUS,           &kp PLUS,            &kp STAR, \
// &none,               &mc_lt,              &mc_gt,              &th_bti 0 0,         &none,               &none,               &th_excl 0 0,        &kp SLASH,           &kp STAR,            &none, \
//                                           &none,               &trans,              &kp SPACE,           &kp SPACE,           &trans,              &none

// #define ROMAO_LAYER_MEDIA \
// &none,               &none,               &mkp LCLK,           &mkp RCLK,           &none,               &none,               &mc_hand,            &kp ENTER,           &kp ESC,             &none, \
// &none,               &mmv MOVE_LEFT,      &mmv MOVE_UP,        &mmv MOVE_RIGHT,     &none,               &none,               &mc_mic,             &mt C_MUTE C_VOL_DN, &kp C_VOL_UP,        &lt_cam TEXT 0, \
// &none,               &msc SCRL_DOWN,      &mmv MOVE_DOWN,      &msc SCRL_UP,        &none,               &none,               &kp C_PP,            &kp C_PREV,          &kp C_NEXT,          &none, \
//                                           &none,               &mo NAV_CP,          &kp SPACE,           &none,               &trans,              &none

// #define ROMAO_LAYER_NAVIGATION_COPY \
// &none,               &mc_swapper,         &mc_tabs,            &mc_launcher,        &none,               &none,               &kp TAB,             &kp ENTER,           &kp ESC,             &none, \
// &kp INS,             &kp LCTL,            &kp LALT,            &kp LSFT,            &none,               &none,               &kp LEFT,            &kp DOWN,            &kp UP,              &kp RIGHT, \
// &none,               &kp LGUI,            &kp LGUI,            &kp LGUI,            &none,               &none,               &kp DEL,             &kp HOME,            &kp END,             &none, \
//                                           &none,               &trans,              &trans,              &trans,              &trans,              &none

// #define ROMAO_LAYER_TEXT \
// &none,               &select_home,        &select_word,        &select_line,        &trans,              &trans,              &kp TAB,             &kp ENTER,           &kp ESC,             &none, \
// &none,               &hsk LCTL RCTL,      &hsk LALT RALT,      &hsk LSFT RSFT,      &trans,              &trans,              &mc_prev_word,       &kp DOWN,            &kp UP,              &mc_next_word, \
// &none,               &hsk LGUI RGUI,      &hsk LGUI RGUI,      &hsk LGUI RGUI,      &trans,              &trans,              &mc_del_word,        &kp HOME,            &kp END,             &none, \
//                                           &none,               &key_repeat,         &none,               &none,               &key_repeat,         &none

// #define ROMAO_LAYER_FUNCTIONS \
// &none,               &bt BT_PRV,          &bt BT_NXT,          &bt BT_SEL 0,        &none,               &none,               &kp F7,              &kp F8,              &kp F9,              &none, \
// &none,               &hsk RCTL LCTL,      &hsk RALT LALT,      &hsk RSFT LSFT,      &none,               &none,               &kp F4,              &kp F5,              &kp F6,              &none, \
// &none,               &hsk RGUI LGUI,      &hsk RGUI LGUI,      &hsk RGUI LGUI,      &none,               &none,               &kp F1,              &kp F2,              &kp F3,              &none, \
//                                           &none,               &bootloader,         &none,               &none,               &key_repeat,         &none

// #define ROMAO_LAYER_SMART \
// &none,               &none,               &tc_smart_word,      &tc_smart_line,      &none,               &none,               &mc_vim_replace,     &mc_o_esc,           &mc_sft_o_esc,       &none, \
// &none,               &tc_snake_case,      &tc_constant_case,   &tc_kebab_case,      &none,               &none,               &kp LS(V),           &kp V,               &kp LC(V),           &none, \
// &none,               &tc_slash_case,      &tc_pascal_case,     &tc_camel_case,      &none,               &none,               &mc_dqt0p,           &mc_dqtplusp,        &mc_dqtplusy,        &none, \
//                                           &none,               &key_repeat,         &mc_spc_esc,         &none,               &bootloader,         &none
