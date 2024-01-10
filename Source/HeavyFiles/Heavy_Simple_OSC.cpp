/** "ogsus" */

#include "Heavy_Simple_OSC.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_Simple_OSC *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_Simple_OSC_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Simple_OSC));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Simple_OSC(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_Simple_OSC_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Simple_OSC));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Simple_OSC(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_Simple_OSC_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_Simple_OSC();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_Simple_OSC::Heavy_Simple_OSC(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sLine_init(&sLine_FtgFn97w);
  numBytes += sLine_init(&sLine_FLyjoGIr);
  numBytes += sLine_init(&sLine_EhUdLVFO);
  numBytes += sLine_init(&sLine_lix26rKm);
  numBytes += sLine_init(&sLine_6V0y3mVw);
  numBytes += sBiquad_init(&sBiquad_s_LyumCObU);
  numBytes += sPhasor_init(&sPhasor_bh9mGeDs, sampleRate);
  numBytes += sTabwrite_init(&sTabwrite_jSRaB2R0, &hTable_SeBwXseX);
  numBytes += sTabhead_init(&sTabhead_H3ZrOu5I, &hTable_SeBwXseX);
  numBytes += sTabread_init(&sTabread_vwd3ZzYl, &hTable_SeBwXseX, false);
  numBytes += sTabread_init(&sTabread_9kWI82GW, &hTable_SeBwXseX, false);
  numBytes += sLine_init(&sLine_RRuOK4Wp);
  numBytes += sLine_init(&sLine_eVIh8VCN);
  numBytes += sLine_init(&sLine_EARCrUps);
  numBytes += sLine_init(&sLine_p8rICfby);
  numBytes += sLine_init(&sLine_h9oFFBlW);
  numBytes += sBiquad_init(&sBiquad_s_GsAKPzzW);
  numBytes += sLine_init(&sLine_cb9wJ458);
  numBytes += sLine_init(&sLine_DSg3PVBf);
  numBytes += sLine_init(&sLine_seZM77CZ);
  numBytes += sLine_init(&sLine_JGpbZh7Z);
  numBytes += sLine_init(&sLine_JG0LoJNn);
  numBytes += sBiquad_init(&sBiquad_s_lZxdP3pe);
  numBytes += sTabread_init(&sTabread_h4Pg40he, &hTable_wFRpwm2z, true);
  numBytes += sRPole_init(&sRPole_Zq8HpVpq);
  numBytes += sLine_init(&sLine_B4h7ZNna);
  numBytes += sLine_init(&sLine_lj6SxHyl);
  numBytes += sTabread_init(&sTabread_LGV0iaVb, &hTable_IeYC6xiw, true);
  numBytes += sTabread_init(&sTabread_zVnfbG9O, &hTable_8UAmViBd, true);
  numBytes += sTabwrite_init(&sTabwrite_hdNBKFO9, &hTable_3UDQtrHM);
  numBytes += sTabwrite_init(&sTabwrite_ELhT3A9C, &hTable_IeYC6xiw);
  numBytes += sTabwrite_init(&sTabwrite_ULxPSvNG, &hTable_8UAmViBd);
  numBytes += sTabread_init(&sTabread_Jt21PN6Z, &hTable_3UDQtrHM, true);
  numBytes += sTabread_init(&sTabread_jhXBb0XU, &hTable_dYnlmTK9, true);
  numBytes += sTabwrite_init(&sTabwrite_zpcjGJt8, &hTable_r7ICE3O6);
  numBytes += sTabwrite_init(&sTabwrite_KdsQKYlT, &hTable_dYnlmTK9);
  numBytes += sTabread_init(&sTabread_gSHVY637, &hTable_r7ICE3O6, true);
  numBytes += sTabwrite_init(&sTabwrite_VKXFTFym, &hTable_fqwvMdHt);
  numBytes += sTabread_init(&sTabread_yBJrUUUD, &hTable_fqwvMdHt, true);
  numBytes += sTabread_init(&sTabread_mAvKkT9M, &hTable_rxD5DaUK, true);
  numBytes += sRPole_init(&sRPole_yvGALiLj);
  numBytes += sTabread_init(&sTabread_qFvvP5pf, &hTable_vEzHUOio, true);
  numBytes += sRPole_init(&sRPole_yfk5Orgq);
  numBytes += sTabread_init(&sTabread_6FRH3mLL, &hTable_Uwh5AVN9, true);
  numBytes += sRPole_init(&sRPole_qV8YGfWl);
  numBytes += sTabwrite_init(&sTabwrite_mEBF4H9c, &hTable_rxD5DaUK);
  numBytes += sTabwrite_init(&sTabwrite_lK4PO21M, &hTable_Uwh5AVN9);
  numBytes += sTabwrite_init(&sTabwrite_hAcsQgoN, &hTable_wFRpwm2z);
  numBytes += sTabwrite_init(&sTabwrite_eNxRpEDE, &hTable_vEzHUOio);
  numBytes += sLine_init(&sLine_4p6cdlhP);
  numBytes += sLine_init(&sLine_tBCmODUp);
  numBytes += cBinop_init(&cBinop_rARrkwIJ, 1.0f); // __pow
  numBytes += sVarf_init(&sVarf_AhX1HHYl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ADPLGdTq, 0.0f);
  numBytes += cVar_init_f(&cVar_oEasL5Ja, 0.0f);
  numBytes += cVar_init_f(&cVar_8h6yv4P2, 0.0f);
  numBytes += cVar_init_f(&cVar_B07GtfhF, 24000.0f);
  numBytes += cSlice_init(&cSlice_8z8gRWq4, 1, -1);
  numBytes += cBinop_init(&cBinop_8meShVPo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_VhO8I8s9, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_0jaaQKO1, 0.0f);
  numBytes += cVar_init_f(&cVar_p9oHtABw, 0.0f);
  numBytes += cVar_init_f(&cVar_PmmaTQjw, 0.0f);
  numBytes += cBinop_init(&cBinop_dAGEuLo9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_m9kMF57f, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JYSXFGqf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Pa69xiza, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9DMRrgee, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lh3R8dLh, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_8jLe2JDL, 90.0f);
  numBytes += cSlice_init(&cSlice_wZKltFVK, 1, -1);
  numBytes += cVar_init_f(&cVar_E1fn8LZF, 3000.0f);
  numBytes += cSlice_init(&cSlice_U9h2ZTnK, 1, -1);
  numBytes += cDelay_init(this, &cDelay_HCDWzK2c, 0.0f);
  numBytes += cDelay_init(this, &cDelay_5e2Z2jR4, 0.0f);
  numBytes += hTable_init(&hTable_rxD5DaUK, 256);
  numBytes += sVarf_init(&sVarf_LYiVvt4o, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_Cv9zQmsi, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_epjLT3x7, 22050.0f);
  numBytes += sVarf_init(&sVarf_zMNOitM2, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_BZM39Jom, 80.0f);
  numBytes += cDelay_init(this, &cDelay_4HK7mG0r, 0.0f);
  numBytes += cDelay_init(this, &cDelay_HaSa0RAY, 86.1244f);
  numBytes += cTabhead_init(&cTabhead_MOSCfNb9, &hTable_Uwh5AVN9);
  numBytes += cVar_init_s(&cVar_dBjKk424, "del-1003-del4");
  numBytes += cBinop_init(&cBinop_Zuja3eqB, 86.1244f); // __mul
  numBytes += cBinop_init(&cBinop_gUiLHgou, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_0Kh2vnx6, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_BlLwV6UK, 0.0f); // __max
  numBytes += sVarf_init(&sVarf_YlKN4pbS, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_YuZNJVbU, 22050.0f);
  numBytes += cBinop_init(&cBinop_grNFbZ2Z, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_qIy6Qj3U, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_WtrJuht6, 0.0f);
  numBytes += cDelay_init(this, &cDelay_jPp4B3hq, 0.0f);
  numBytes += hTable_init(&hTable_Uwh5AVN9, 256);
  numBytes += cDelay_init(this, &cDelay_6jgSdoQH, 0.0f);
  numBytes += cDelay_init(this, &cDelay_bvo10OOf, 69.4325f);
  numBytes += cTabhead_init(&cTabhead_RK1XnSM0, &hTable_rxD5DaUK);
  numBytes += cVar_init_s(&cVar_nk5fKQwl, "del-1003-del2");
  numBytes += cBinop_init(&cBinop_7fgPGlw4, 69.4325f); // __mul
  numBytes += cBinop_init(&cBinop_JKrKPPmK, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_49rLKMmR, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_d8wYonzR, 0.0f); // __max
  numBytes += cIf_init(&cIf_UWHj8ayx, false);
  numBytes += cVar_init_f(&cVar_PxEx7qk4, 0.0f);
  numBytes += cVar_init_f(&cVar_GRZbCZvT, 0.0f);
  numBytes += cIf_init(&cIf_8XZc3BCp, false);
  numBytes += cBinop_init(&cBinop_SIzgVoZ3, 0.0f); // __pow
  numBytes += cDelay_init(this, &cDelay_QREXhBQm, 74.5234f);
  numBytes += cDelay_init(this, &cDelay_vhb9rSMr, 0.0f);
  numBytes += cTabhead_init(&cTabhead_tYXmCCTe, &hTable_vEzHUOio);
  numBytes += cVar_init_s(&cVar_RnwccXgx, "del-1003-del3");
  numBytes += cBinop_init(&cBinop_UZChYgFm, 74.5234f); // __mul
  numBytes += cBinop_init(&cBinop_jd60GAvZ, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_ApKuPKDC, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_5Y6ICDCA, 0.0f); // __max
  numBytes += cVar_init_f(&cVar_y8DDF5yl, 0.0f);
  numBytes += cVar_init_f(&cVar_0oTQrFFl, 80.0f);
  numBytes += cVar_init_f(&cVar_FVmfymBt, 0.0f);
  numBytes += cDelay_init(this, &cDelay_XwyxhgDT, 0.0f);
  numBytes += cDelay_init(this, &cDelay_dUOODXZT, 58.6435f);
  numBytes += cTabhead_init(&cTabhead_x9o4pJvt, &hTable_wFRpwm2z);
  numBytes += cVar_init_s(&cVar_FEYUtYor, "del-1003-del1");
  numBytes += cBinop_init(&cBinop_0L5Wy1DX, 58.6435f); // __mul
  numBytes += cBinop_init(&cBinop_4GdfSq22, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Ncb6gmEI, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_5VnkM7nt, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_ngvGUf8e, 0.0f);
  numBytes += cDelay_init(this, &cDelay_zXhSR4g1, 0.0f);
  numBytes += hTable_init(&hTable_wFRpwm2z, 256);
  numBytes += cVar_init_f(&cVar_8gVF1C68, 22050.0f);
  numBytes += sVarf_init(&sVarf_GiQa4Ifp, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_rMiAwq3o, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_bhOSN2Hf, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_O1NzmziO, 0.0f);
  numBytes += cDelay_init(this, &cDelay_jvK3ko3w, 0.0f);
  numBytes += hTable_init(&hTable_3UDQtrHM, 256);
  numBytes += cDelay_init(this, &cDelay_Nl0G9A5d, 75.2546f);
  numBytes += cDelay_init(this, &cDelay_IXUE6fSI, 0.0f);
  numBytes += cTabhead_init(&cTabhead_QqK6hYHG, &hTable_IeYC6xiw);
  numBytes += cVar_init_s(&cVar_xiCwA0LD, "del-1003-ref1");
  numBytes += cBinop_init(&cBinop_Lsp5clF5, 75.2546f); // __mul
  numBytes += cBinop_init(&cBinop_6mNmEFw8, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_DyNaCzgk, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_nYOC3ynU, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_oqogXi1v, 25.796f);
  numBytes += cDelay_init(this, &cDelay_mHZTAJUz, 0.0f);
  numBytes += cTabhead_init(&cTabhead_1TbZ56zJ, &hTable_3UDQtrHM);
  numBytes += cVar_init_s(&cVar_IGbA7P7Z, "del-1003-ref3");
  numBytes += cBinop_init(&cBinop_BqeU1pvt, 25.796f); // __mul
  numBytes += cBinop_init(&cBinop_5OMDVqAG, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_MelwPF7y, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_ritbmqVn, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_9FhLHeY4, 0.0f);
  numBytes += cDelay_init(this, &cDelay_MwPJCO4Y, 0.0f);
  numBytes += hTable_init(&hTable_IeYC6xiw, 256);
  numBytes += cDelay_init(this, &cDelay_AxFTG7ad, 0.0f);
  numBytes += cDelay_init(this, &cDelay_A1gXXDxD, 0.0f);
  numBytes += hTable_init(&hTable_8UAmViBd, 256);
  numBytes += cDelay_init(this, &cDelay_eVDzPd6y, 0.0f);
  numBytes += cDelay_init(this, &cDelay_jeG82HcH, 16.364f);
  numBytes += cTabhead_init(&cTabhead_pvQxq8h6, &hTable_r7ICE3O6);
  numBytes += cVar_init_s(&cVar_fQuCmKY8, "del-1003-ref5");
  numBytes += cBinop_init(&cBinop_j9nhDTiv, 16.364f); // __mul
  numBytes += cBinop_init(&cBinop_i2UdtvFn, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_zxfQ0uNO, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Jg2yFvQw, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_cd7TI9vl, 0.0f);
  numBytes += cDelay_init(this, &cDelay_4kRRnywY, 0.0f);
  numBytes += hTable_init(&hTable_r7ICE3O6, 256);
  numBytes += cDelay_init(this, &cDelay_oXDpM5PW, 0.0f);
  numBytes += cDelay_init(this, &cDelay_r6Re24fP, 43.5337f);
  numBytes += cTabhead_init(&cTabhead_dIAN6gNl, &hTable_8UAmViBd);
  numBytes += cVar_init_s(&cVar_q0jLN3Li, "del-1003-ref2");
  numBytes += cBinop_init(&cBinop_1NW6Kx6n, 43.5337f); // __mul
  numBytes += cBinop_init(&cBinop_CMkk36X9, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_WMdp1kR9, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_B7RdC88l, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_jqFl75bD, 0.0f);
  numBytes += cDelay_init(this, &cDelay_wx9UF834, 13.645f);
  numBytes += cTabhead_init(&cTabhead_kmtRu0Ub, &hTable_fqwvMdHt);
  numBytes += cVar_init_s(&cVar_EEkLlmQd, "del-1003-ref6");
  numBytes += cBinop_init(&cBinop_ZyqiOv8V, 13.645f); // __mul
  numBytes += cBinop_init(&cBinop_lubZcU26, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_DVoul22Y, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_6J1HVHBk, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_haUl0INL, 0.0f);
  numBytes += cDelay_init(this, &cDelay_7xhQg2qf, 0.0f);
  numBytes += hTable_init(&hTable_dYnlmTK9, 256);
  numBytes += cDelay_init(this, &cDelay_aQwSz9Rm, 0.0f);
  numBytes += cDelay_init(this, &cDelay_jn7zJYf4, 0.0f);
  numBytes += hTable_init(&hTable_fqwvMdHt, 256);
  numBytes += cDelay_init(this, &cDelay_HyXHIJIQ, 0.0f);
  numBytes += cDelay_init(this, &cDelay_8j0SujJF, 19.392f);
  numBytes += cTabhead_init(&cTabhead_mFlqjEBU, &hTable_dYnlmTK9);
  numBytes += cVar_init_s(&cVar_P3KGirJP, "del-1003-ref4");
  numBytes += cBinop_init(&cBinop_JarDctxs, 19.392f); // __mul
  numBytes += cBinop_init(&cBinop_OS8M39nX, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_0c0L7v8U, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_zOeWczwu, 0.0f); // __max
  numBytes += cBinop_init(&cBinop_PtZp7lAE, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_UapMPoOs, 22050.0f);
  numBytes += sVarf_init(&sVarf_wVGDKJnj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8ITqtsN8, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_pzBLz1pJ, 0.0f);
  numBytes += cDelay_init(this, &cDelay_Gcsw9qiH, 0.0f);
  numBytes += hTable_init(&hTable_vEzHUOio, 256);
  numBytes += cPack_init(&cPack_slLyXUuy, 2, 0.0f, 50.0f);
  numBytes += cPack_init(&cPack_5W3ZowqF, 2, 0.0f, 50.0f);
  numBytes += cPack_init(&cPack_DmMYPr42, 2, 0.0f, 30.0f);
  numBytes += cVar_init_f(&cVar_6Sb85ZpO, 0.0f);
  numBytes += cSlice_init(&cSlice_bDu43SBt, 1, -1);
  numBytes += cVar_init_f(&cVar_5YLtxTFn, 20.0f);
  numBytes += cSlice_init(&cSlice_RMbPYmR4, 1, -1);
  numBytes += cIf_init(&cIf_IuzEIXPu, false);
  numBytes += cBinop_init(&cBinop_f4NRB6jm, 0.0f); // __pow
  numBytes += cVar_init_f(&cVar_XQx2E3uf, 0.0f);
  numBytes += cVar_init_f(&cVar_mkH8Ybpt, 0.0f);
  numBytes += cVar_init_f(&cVar_vZw2eYN4, 0.0f);
  numBytes += cBinop_init(&cBinop_78oQy0ip, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_A59DkC8B, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_9UFU7jMB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_EsmNcGSm, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_TzOTEQhL, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_b45xc2ho, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2V8JLgRt, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_IiGtBJOs, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_k8uKx4Do, 80.0f);
  numBytes += cSlice_init(&cSlice_EtxduE5p, 1, -1);
  numBytes += cVar_init_f(&cVar_TO3oudhq, 5.0f);
  numBytes += cSlice_init(&cSlice_UNEdgFgt, 1, -1);
  numBytes += sVarf_init(&sVarf_SLeohyot, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_CfZQ1jW9, 60.0f);
  numBytes += cSlice_init(&cSlice_39SVSkWK, 1, -1);
  numBytes += cVar_init_s(&cVar_skFXrjYZ, "del-1003-predelay");
  numBytes += sVarf_init(&sVarf_C8IKCQJI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WSsuG5lp, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jQdAez40, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_KoBxyLN5, 0.0f);
  numBytes += cDelay_init(this, &cDelay_til7LQfc, 0.0f);
  numBytes += hTable_init(&hTable_SeBwXseX, 256);
  numBytes += cPack_init(&cPack_KRLz9hP2, 2, 0.0f, 30.0f);
  numBytes += cVar_init_f(&cVar_R6dqWvhe, 0.0f);
  numBytes += cVar_init_f(&cVar_HAfEQg8P, 0.0f);
  numBytes += cBinop_init(&cBinop_zyulCZP2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jEicegz4, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_NYD5Tt1S, 0.0f);
  numBytes += cBinop_init(&cBinop_KQlp34Qe, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HoPOFgk0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_YyAoYgTN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iFRPIAD1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_rRAD2XRm, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_vi4NvLOA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_pT3QNNDM, 0.0f);
  numBytes += cVar_init_f(&cVar_BBP5qm9p, 0.0f);
  numBytes += cVar_init_f(&cVar_ZZeKFh3n, 0.0f);
  numBytes += cVar_init_f(&cVar_5ID8RKb2, 0.0f);
  numBytes += cVar_init_f(&cVar_ZmixOlin, 0.0f);
  numBytes += cVar_init_f(&cVar_Tau8vPdr, 0.0f);
  numBytes += cVar_init_f(&cVar_72Lxq37S, 0.0f);
  numBytes += sVarf_init(&sVarf_BIwUUTci, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_6ft77wPK, 0.0f);
  numBytes += cVar_init_f(&cVar_QVSg9Vd1, 0.0f);
  numBytes += cVar_init_f(&cVar_XG0qb4u1, 0.0f);
  numBytes += cVar_init_f(&cVar_pDnLTR0C, 0.0f);
  numBytes += cVar_init_f(&cVar_K1FLPi3P, 0.0f);
  numBytes += cVar_init_f(&cVar_isIzhI8V, 0.0f);
  numBytes += cVar_init_f(&cVar_v2jJclJJ, 0.0f);
  numBytes += sVarf_init(&sVarf_M11t22Ja, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Mb14oVwb, 1.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Simple_OSC::~Heavy_Simple_OSC() {
  hTable_free(&hTable_rxD5DaUK);
  hTable_free(&hTable_Uwh5AVN9);
  hTable_free(&hTable_wFRpwm2z);
  hTable_free(&hTable_3UDQtrHM);
  hTable_free(&hTable_IeYC6xiw);
  hTable_free(&hTable_8UAmViBd);
  hTable_free(&hTable_r7ICE3O6);
  hTable_free(&hTable_dYnlmTK9);
  hTable_free(&hTable_fqwvMdHt);
  hTable_free(&hTable_vEzHUOio);
  cPack_free(&cPack_slLyXUuy);
  cPack_free(&cPack_5W3ZowqF);
  cPack_free(&cPack_DmMYPr42);
  hTable_free(&hTable_SeBwXseX);
  cPack_free(&cPack_KRLz9hP2);
}

HvTable *Heavy_Simple_OSC::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0xD05EDCD1: return &hTable_wFRpwm2z; // del-1003-del1
    case 0xFB3A9CC8: return &hTable_rxD5DaUK; // del-1003-del2
    case 0xDD1A3060: return &hTable_vEzHUOio; // del-1003-del3
    case 0x66C1DD5E: return &hTable_Uwh5AVN9; // del-1003-del4
    case 0x4C9AA77E: return &hTable_SeBwXseX; // del-1003-predelay
    case 0x77CB3B56: return &hTable_IeYC6xiw; // del-1003-ref1
    case 0x92F168C1: return &hTable_8UAmViBd; // del-1003-ref2
    case 0xE3EFDD2C: return &hTable_3UDQtrHM; // del-1003-ref3
    case 0x1BDA9F7D: return &hTable_dYnlmTK9; // del-1003-ref4
    case 0xE42D6363: return &hTable_r7ICE3O6; // del-1003-ref5
    case 0x46F8163: return &hTable_fqwvMdHt; // del-1003-ref6
    default: return nullptr;
  }
}

void Heavy_Simple_OSC::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x94DB5AB5: { // Pitch
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_wMY0TQAO_sendMessage);
      break;
    }
    case 0xB3A0D463: { // RevFeedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9Wg9MfEm_sendMessage);
      break;
    }
    case 0x3B2EB6DE: { // RevGain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GX3tE4cE_sendMessage);
      break;
    }
    case 0x30ADF4D0: { // RevPredelay
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GEVtzi19_sendMessage);
      break;
    }
    case 0x528845DB: { // Volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZcOkaWFv_sendMessage);
      break;
    }
    case 0x3532BDCC: { // 1003-crossfreq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vgmTGzZc_sendMessage);
      break;
    }
    case 0x61A07250: { // 1003-damp
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZvYzhgQD_sendMessage);
      break;
    }
    case 0x39320B22: { // 1003-dry-gain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xerl4fV7_sendMessage);
      break;
    }
    case 0x25DB1400: { // 1003-feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_r8ysJu0a_sendMessage);
      break;
    }
    case 0xAAB29B40: { // 1003-highcut
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TBhT7TI1_sendMessage);
      break;
    }
    case 0xE68264A5: { // 1003-lowcut
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_JfdBhlWd_sendMessage);
      break;
    }
    case 0xE140B550: { // 1003-predelay_ms
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4Jk88MkG_sendMessage);
      break;
    }
    case 0xFD8CC5B0: { // 1003-wet-gain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LauuFJcm_sendMessage);
      break;
    }
    case 0xF763418F: { // 1157-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Xw2KIgtN_sendMessage);
      break;
    }
    case 0x1AD52B1A: { // 1157-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_B8VHCqVX_sendMessage);
      break;
    }
    case 0xA662AE75: { // 1157-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_H2cPiLhW_sendMessage);
      break;
    }
    case 0x2C43DCAA: { // 1198-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YJcJuuEq_sendMessage);
      break;
    }
    case 0xE0617EE4: { // 1198-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YqVgIFI7_sendMessage);
      break;
    }
    case 0x6D98BE77: { // 1198-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IdFojawY_sendMessage);
      break;
    }
    case 0xC3F28B33: { // 1285-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vqW9nFnF_sendMessage);
      break;
    }
    case 0x6827348: { // 1285-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_iRbXNruw_sendMessage);
      break;
    }
    case 0xE3139C10: { // 1285-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KNmnjTra_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aaK7Eoxq_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_Simple_OSC::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "Pitch";
        info->hash = 0x94DB5AB5;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 1: {
        info->name = "RevFeedback";
        info->hash = 0xB3A0D463;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 2: {
        info->name = "RevGain";
        info->hash = 0x3B2EB6DE;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 3: {
        info->name = "RevPredelay";
        info->hash = 0x30ADF4D0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 4: {
        info->name = "Volume";
        info->hash = 0x528845DB;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 5;
}



/*
 * Send Function Implementations
 */


void Heavy_Simple_OSC::cBinop_eKCsiUr7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_AhX1HHYl, m);
}

void Heavy_Simple_OSC::cBinop_AaOVdxNF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_uDpDNbB4_sendMessage);
}

void Heavy_Simple_OSC::cBinop_uDpDNbB4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rARrkwIJ, HV_BINOP_POW, 1, m, &cBinop_rARrkwIJ_sendMessage);
  cMsg_LE3gqBY6_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_LE3gqBY6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rARrkwIJ, HV_BINOP_POW, 0, m, &cBinop_rARrkwIJ_sendMessage);
}

void Heavy_Simple_OSC::cBinop_rARrkwIJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_eKCsiUr7_sendMessage);
}

void Heavy_Simple_OSC::cVar_ADPLGdTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5ID8RKb2, 0, m, &cVar_5ID8RKb2_sendMessage);
}

void Heavy_Simple_OSC::cVar_oEasL5Ja_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XG0qb4u1, 0, m, &cVar_XG0qb4u1_sendMessage);
}

void Heavy_Simple_OSC::cVar_8h6yv4P2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_56ZRPYf1_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_B07GtfhF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_E6yr6AH1_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_YyNjTChe_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xF88DCB01: { // "highcut"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8z8gRWq4, 0, m, &cSlice_8z8gRWq4_sendMessage);
      break;
    }
    default: {
      cSwitchcase_AItO66D4_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_8z8gRWq4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_E6yr6AH1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_E6yr6AH1_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_E6yr6AH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_TBhT7TI1_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_fzktp6hB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_RRuOK4Wp, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_dqgzl3eC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_h9oFFBlW, 0, m, NULL);
}

void Heavy_Simple_OSC::cBinop_Dwd1z80e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JYSXFGqf, HV_BINOP_MULTIPLY, 1, m, &cBinop_JYSXFGqf_sendMessage);
}

void Heavy_Simple_OSC::cUnop_Er0xfhmM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_lo3TMpRu_sendMessage);
}

void Heavy_Simple_OSC::cMsg_n1tkoY1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ztGtgrId_sendMessage);
}

void Heavy_Simple_OSC::cSystem_ztGtgrId_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VhO8I8s9, HV_BINOP_DIVIDE, 1, m, &cBinop_VhO8I8s9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RJoB3Eyp_sendMessage);
}

void Heavy_Simple_OSC::cBinop_8meShVPo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GWa74Sti_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_giWAIegS_sendMessage);
}

void Heavy_Simple_OSC::cBinop_lo3TMpRu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VhO8I8s9, HV_BINOP_DIVIDE, 0, m, &cBinop_VhO8I8s9_sendMessage);
}

void Heavy_Simple_OSC::cBinop_VhO8I8s9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8meShVPo, HV_BINOP_MULTIPLY, 1, m, &cBinop_8meShVPo_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Lhir3N6H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_Er0xfhmM_sendMessage);
}

void Heavy_Simple_OSC::cCast_RJoB3Eyp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Lhir3N6H_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_DRKC452Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0jaaQKO1, 1, m, &cVar_0jaaQKO1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_sPvJIiFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dAGEuLo9, HV_BINOP_MULTIPLY, 1, m, &cBinop_dAGEuLo9_sendMessage);
}

void Heavy_Simple_OSC::cMsg_WVEAZUSk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_sPvJIiFq_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Si0GbZ9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_N4B79IaQ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_lMLMURNf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_Si0GbZ9x_sendMessage);
}

void Heavy_Simple_OSC::cVar_0jaaQKO1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GYOkUPrz_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_nGltOyeh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pa69xiza, HV_BINOP_MULTIPLY, 1, m, &cBinop_Pa69xiza_sendMessage);
}

void Heavy_Simple_OSC::cMsg_GPo35xHu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_nGltOyeh_sendMessage);
}

void Heavy_Simple_OSC::cUnop_IWr9SyFx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_TYBi9WxK_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cUnop_ueiHfVuw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_0YOVWqdZ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_p9oHtABw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_srLu67E4_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_YRiMEQb0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gvj1VlK3_sendMessage);
}

void Heavy_Simple_OSC::cBinop_m0mgHAfO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_m9kMF57f, HV_BINOP_MULTIPLY, 1, m, &cBinop_m9kMF57f_sendMessage);
}

void Heavy_Simple_OSC::cBinop_6F2g8Uqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_m0mgHAfO_sendMessage);
}

void Heavy_Simple_OSC::cMsg_zzJyIoC8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_6F2g8Uqx_sendMessage);
}

void Heavy_Simple_OSC::cBinop_aTLwq1h8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8meShVPo, HV_BINOP_MULTIPLY, 0, m, &cBinop_8meShVPo_sendMessage);
}

void Heavy_Simple_OSC::cBinop_YRiMEQb0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_aTLwq1h8_sendMessage);
}

void Heavy_Simple_OSC::cBinop_bUYtybq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9DMRrgee, HV_BINOP_MULTIPLY, 1, m, &cBinop_9DMRrgee_sendMessage);
}

void Heavy_Simple_OSC::cBinop_dE8suCN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_bUYtybq9_sendMessage);
}

void Heavy_Simple_OSC::cMsg_zV5HFpAZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_dE8suCN1_sendMessage);
}

void Heavy_Simple_OSC::cVar_PmmaTQjw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_lMLMURNf_sendMessage);
}

void Heavy_Simple_OSC::cBinop_dAGEuLo9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dqgzl3eC_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_m9kMF57f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TwWanXSk_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_URTglQTu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IQZVpVop_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_JYSXFGqf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XbMrlZqy_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_Pa69xiza_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fzHY6BAg_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_9DMRrgee_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fzktp6hB_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_lh3R8dLh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_URTglQTu_sendMessage);
}

void Heavy_Simple_OSC::cBinop_uCht4qTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lh3R8dLh, HV_BINOP_MULTIPLY, 1, m, &cBinop_lh3R8dLh_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ifwkCXeD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xylzSMQf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Bc0OJ6Bg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Z5XUUXFP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jnpfFGdg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JvdejEno_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_I7RIlFNI_sendMessage);
}

void Heavy_Simple_OSC::cMsg_GYOkUPrz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_ifwkCXeD_sendMessage);
}

void Heavy_Simple_OSC::cMsg_N4B79IaQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_uCht4qTZ_sendMessage);
}

void Heavy_Simple_OSC::cSend_0YOVWqdZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_B8VHCqVX_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_IQZVpVop_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Xw2KIgtN_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_TYBi9WxK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_H2cPiLhW_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cCast_gvj1VlK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0jaaQKO1, 0, m, &cVar_0jaaQKO1_sendMessage);
}

void Heavy_Simple_OSC::cCast_srLu67E4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PmmaTQjw, 0, m, &cVar_PmmaTQjw_sendMessage);
}

void Heavy_Simple_OSC::cCast_I7RIlFNI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9DMRrgee, HV_BINOP_MULTIPLY, 0, m, &cBinop_9DMRrgee_sendMessage);
}

void Heavy_Simple_OSC::cCast_jnpfFGdg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_m9kMF57f, HV_BINOP_MULTIPLY, 0, m, &cBinop_m9kMF57f_sendMessage);
}

void Heavy_Simple_OSC::cCast_xylzSMQf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Simple_OSC::cCast_JvdejEno_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pa69xiza, HV_BINOP_MULTIPLY, 0, m, &cBinop_Pa69xiza_sendMessage);
}

void Heavy_Simple_OSC::cCast_Bc0OJ6Bg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dAGEuLo9, HV_BINOP_MULTIPLY, 0, m, &cBinop_dAGEuLo9_sendMessage);
}

void Heavy_Simple_OSC::cCast_Z5XUUXFP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JYSXFGqf, HV_BINOP_MULTIPLY, 0, m, &cBinop_JYSXFGqf_sendMessage);
}

void Heavy_Simple_OSC::cCast_GWa74Sti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_IWr9SyFx_sendMessage);
}

void Heavy_Simple_OSC::cCast_giWAIegS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_ueiHfVuw_sendMessage);
}

void Heavy_Simple_OSC::cCast_dPcYEAI9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PmmaTQjw, 1, m, &cVar_PmmaTQjw_sendMessage);
}

void Heavy_Simple_OSC::cCast_5ArJFYO7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_p9oHtABw, 0, m, &cVar_p9oHtABw_sendMessage);
}

void Heavy_Simple_OSC::cMsg_fzHY6BAg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_eVIh8VCN, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_TwWanXSk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_EARCrUps, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_XbMrlZqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_p8rICfby, 0, m, NULL);
}

void Heavy_Simple_OSC::cVar_8jLe2JDL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_UdFPOQ49_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_v3ARyak1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xF1E7CD16: { // "feedback"
      cSlice_onMessage(_c, &Context(_c)->cSlice_wZKltFVK, 0, m, &cSlice_wZKltFVK_sendMessage);
      break;
    }
    default: {
      cSwitchcase_BdHlDum9_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_wZKltFVK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_UdFPOQ49_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_UdFPOQ49_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_UdFPOQ49_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_r8ysJu0a_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_E1fn8LZF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_BIB35HvI_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_Bx6erMo2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x309F9CEE: { // "crossfreq"
      cSlice_onMessage(_c, &Context(_c)->cSlice_U9h2ZTnK, 0, m, &cSlice_U9h2ZTnK_sendMessage);
      break;
    }
    default: {
      cSwitchcase_4ANv9fTU_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_U9h2ZTnK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_BIB35HvI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_BIB35HvI_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_BIB35HvI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vgmTGzZc_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_HCDWzK2c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_HCDWzK2c, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_5e2Z2jR4, 0, m, &cDelay_5e2Z2jR4_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HCDWzK2c, 0, m, &cDelay_HCDWzK2c_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_mEBF4H9c, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_5e2Z2jR4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_5e2Z2jR4, m);
  cMsg_PSdCwsZk_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_Bzyu5tsQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_KmFshei8_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_4YquwDBg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TNq6hnAL_sendMessage);
}

void Heavy_Simple_OSC::cSystem_TNq6hnAL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_evBNgiA4_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ULPqfpwp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wEJr0Lfx_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_evBNgiA4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 69.4325f, 0, m, &cBinop_ULPqfpwp_sendMessage);
}

void Heavy_Simple_OSC::cMsg_PSdCwsZk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_rxD5DaUK, 0, m, &hTable_rxD5DaUK_sendMessage);
}

void Heavy_Simple_OSC::cMsg_3cbUEHYh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_5e2Z2jR4, 2, m, &cDelay_5e2Z2jR4_sendMessage);
}

void Heavy_Simple_OSC::cMsg_wEJr0Lfx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_rxD5DaUK, 0, m, &hTable_rxD5DaUK_sendMessage);
}

void Heavy_Simple_OSC::cMsg_KmFshei8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_mEBF4H9c, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_rxD5DaUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3cbUEHYh_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HCDWzK2c, 2, m, &cDelay_HCDWzK2c_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rHWImn1H_sendMessage);
}

void Heavy_Simple_OSC::cCast_rHWImn1H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_HCDWzK2c, 0, m, &cDelay_HCDWzK2c_sendMessage);
}

void Heavy_Simple_OSC::cBinop_mPYoTuHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_lSSrhr9B_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_zMNOitM2, m);
}

void Heavy_Simple_OSC::cBinop_49sdgOhh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_mPYoTuHE_sendMessage);
}

void Heavy_Simple_OSC::cMsg_GQTa17sO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Btq7hu3A_sendMessage);
}

void Heavy_Simple_OSC::cSystem_Btq7hu3A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bPz6kkSB_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_Cv9zQmsi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_49sdgOhh_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Jzm9Ct8S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cv9zQmsi, HV_BINOP_MULTIPLY, 1, m, &cBinop_Cv9zQmsi_sendMessage);
}

void Heavy_Simple_OSC::cMsg_bPz6kkSB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Jzm9Ct8S_sendMessage);
}

void Heavy_Simple_OSC::cVar_epjLT3x7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cv9zQmsi, HV_BINOP_MULTIPLY, 0, m, &cBinop_Cv9zQmsi_sendMessage);
}

void Heavy_Simple_OSC::cBinop_lSSrhr9B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LYiVvt4o, m);
}

void Heavy_Simple_OSC::cVar_BZM39Jom_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_ouB5ANXH_sendMessage);
}

void Heavy_Simple_OSC::cDelay_4HK7mG0r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_4HK7mG0r, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_6FRH3mLL, 0, m, &sTabread_6FRH3mLL_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4HK7mG0r, 0, m, &cDelay_4HK7mG0r_sendMessage);
}

void Heavy_Simple_OSC::cDelay_HaSa0RAY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_HaSa0RAY, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4HK7mG0r, 0, m, &cDelay_4HK7mG0r_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_6FRH3mLL, 0, m, &sTabread_6FRH3mLL_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_MOSCfNb9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gUiLHgou, HV_BINOP_SUBTRACT, 0, m, &cBinop_gUiLHgou_sendMessage);
}

void Heavy_Simple_OSC::sTabread_6FRH3mLL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_0Kh2vnx6, HV_BINOP_SUBTRACT, 0, m, &cBinop_0Kh2vnx6_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_dBjKk424_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wqzBfZHN_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_JB2JezBQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_F6he36cG_sendMessage);
}

void Heavy_Simple_OSC::cSystem_F6he36cG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_eRZ9dW8a_sendMessage);
}

void Heavy_Simple_OSC::cBinop_VaPAHRWf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_HaSa0RAY, 2, m, &cDelay_HaSa0RAY_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Zuja3eqB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BlLwV6UK, HV_BINOP_MAX, 0, m, &cBinop_BlLwV6UK_sendMessage);
}

void Heavy_Simple_OSC::cBinop_gUiLHgou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VxF2zgu4_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_6FRH3mLL, 0, m, &sTabread_6FRH3mLL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LeH1jsBr_sendMessage);
}

void Heavy_Simple_OSC::cBinop_0Kh2vnx6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_VaPAHRWf_sendMessage);
}

void Heavy_Simple_OSC::cBinop_eRZ9dW8a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zuja3eqB, HV_BINOP_MULTIPLY, 0, m, &cBinop_Zuja3eqB_sendMessage);
}

void Heavy_Simple_OSC::cBinop_BlLwV6UK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gUiLHgou, HV_BINOP_SUBTRACT, 1, m, &cBinop_gUiLHgou_sendMessage);
}

void Heavy_Simple_OSC::cMsg_wqzBfZHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_IDSJglh1_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Uds1MRbL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_BlLwV6UK, HV_BINOP_MAX, 1, m, &cBinop_BlLwV6UK_sendMessage);
}

void Heavy_Simple_OSC::cMsg_VxF2zgu4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_HaSa0RAY, 0, m, &cDelay_HaSa0RAY_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4HK7mG0r, 0, m, &cDelay_4HK7mG0r_sendMessage);
}

void Heavy_Simple_OSC::cSystem_IDSJglh1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0Kh2vnx6, HV_BINOP_SUBTRACT, 1, m, &cBinop_0Kh2vnx6_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4HK7mG0r, 2, m, &cDelay_4HK7mG0r_sendMessage);
}

void Heavy_Simple_OSC::cCast_MZw5LOPt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dBjKk424, 0, m, &cVar_dBjKk424_sendMessage);
  cMsg_JB2JezBQ_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_MOSCfNb9, 0, m, &cTabhead_MOSCfNb9_sendMessage);
}

void Heavy_Simple_OSC::cCast_LeH1jsBr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_HaSa0RAY, 0, m, &cDelay_HaSa0RAY_sendMessage);
}

void Heavy_Simple_OSC::cVar_YuZNJVbU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_grNFbZ2Z, HV_BINOP_MULTIPLY, 0, m, &cBinop_grNFbZ2Z_sendMessage);
}

void Heavy_Simple_OSC::cMsg_nlfuXDYX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tHT9ZdON_sendMessage);
}

void Heavy_Simple_OSC::cSystem_tHT9ZdON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XArqJqPL_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_grNFbZ2Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_vZ7f1Unq_sendMessage);
}

void Heavy_Simple_OSC::cBinop_PgDi8ujy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_grNFbZ2Z, HV_BINOP_MULTIPLY, 1, m, &cBinop_grNFbZ2Z_sendMessage);
}

void Heavy_Simple_OSC::cMsg_XArqJqPL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_PgDi8ujy_sendMessage);
}

void Heavy_Simple_OSC::cBinop_gsKNNO9K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_tBZNrSA1_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qIy6Qj3U, m);
}

void Heavy_Simple_OSC::cBinop_vZ7f1Unq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_gsKNNO9K_sendMessage);
}

void Heavy_Simple_OSC::cBinop_tBZNrSA1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YlKN4pbS, m);
}

void Heavy_Simple_OSC::cDelay_WtrJuht6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_WtrJuht6, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jPp4B3hq, 0, m, &cDelay_jPp4B3hq_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WtrJuht6, 0, m, &cDelay_WtrJuht6_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_lK4PO21M, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_jPp4B3hq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_jPp4B3hq, m);
  cMsg_AEbvrwto_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_YwjsVlHl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_3zAKiIjb_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_piREEXfM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_klLqmccc_sendMessage);
}

void Heavy_Simple_OSC::cSystem_klLqmccc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_z6LYiF88_sendMessage);
}

void Heavy_Simple_OSC::cBinop_jWMw4bL2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Yb90o7xS_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_z6LYiF88_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 86.1244f, 0, m, &cBinop_jWMw4bL2_sendMessage);
}

void Heavy_Simple_OSC::cMsg_jDYXEuBl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_jPp4B3hq, 2, m, &cDelay_jPp4B3hq_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Yb90o7xS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_Uwh5AVN9, 0, m, &hTable_Uwh5AVN9_sendMessage);
}

void Heavy_Simple_OSC::cMsg_AEbvrwto_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_Uwh5AVN9, 0, m, &hTable_Uwh5AVN9_sendMessage);
}

void Heavy_Simple_OSC::cMsg_3zAKiIjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_lK4PO21M, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_Uwh5AVN9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jDYXEuBl_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WtrJuht6, 2, m, &cDelay_WtrJuht6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zf5kwmJd_sendMessage);
}

void Heavy_Simple_OSC::cCast_zf5kwmJd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_WtrJuht6, 0, m, &cDelay_WtrJuht6_sendMessage);
}

void Heavy_Simple_OSC::cDelay_6jgSdoQH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_6jgSdoQH, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_mAvKkT9M, 0, m, &sTabread_mAvKkT9M_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_6jgSdoQH, 0, m, &cDelay_6jgSdoQH_sendMessage);
}

void Heavy_Simple_OSC::cDelay_bvo10OOf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bvo10OOf, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_6jgSdoQH, 0, m, &cDelay_6jgSdoQH_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_mAvKkT9M, 0, m, &sTabread_mAvKkT9M_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_RK1XnSM0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JKrKPPmK, HV_BINOP_SUBTRACT, 0, m, &cBinop_JKrKPPmK_sendMessage);
}

void Heavy_Simple_OSC::sTabread_mAvKkT9M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_49rLKMmR, HV_BINOP_SUBTRACT, 0, m, &cBinop_49rLKMmR_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_nk5fKQwl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_e5OPHExn_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_JZ3NtcjK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2ZnKPYmP_sendMessage);
}

void Heavy_Simple_OSC::cSystem_2ZnKPYmP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_xjInRJDF_sendMessage);
}

void Heavy_Simple_OSC::cBinop_6cj1YaIN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bvo10OOf, 2, m, &cDelay_bvo10OOf_sendMessage);
}

void Heavy_Simple_OSC::cBinop_7fgPGlw4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d8wYonzR, HV_BINOP_MAX, 0, m, &cBinop_d8wYonzR_sendMessage);
}

void Heavy_Simple_OSC::cBinop_JKrKPPmK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_op6cEFFt_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_mAvKkT9M, 0, m, &sTabread_mAvKkT9M_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vjGOvqle_sendMessage);
}

void Heavy_Simple_OSC::cBinop_49rLKMmR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_6cj1YaIN_sendMessage);
}

void Heavy_Simple_OSC::cBinop_xjInRJDF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7fgPGlw4, HV_BINOP_MULTIPLY, 0, m, &cBinop_7fgPGlw4_sendMessage);
}

void Heavy_Simple_OSC::cBinop_d8wYonzR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JKrKPPmK, HV_BINOP_SUBTRACT, 1, m, &cBinop_JKrKPPmK_sendMessage);
}

void Heavy_Simple_OSC::cMsg_op6cEFFt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_bvo10OOf, 0, m, &cDelay_bvo10OOf_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_6jgSdoQH, 0, m, &cDelay_6jgSdoQH_sendMessage);
}

void Heavy_Simple_OSC::cMsg_e5OPHExn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xYWBjXCw_sendMessage);
}

void Heavy_Simple_OSC::cMsg_wy4RGlw4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_d8wYonzR, HV_BINOP_MAX, 1, m, &cBinop_d8wYonzR_sendMessage);
}

void Heavy_Simple_OSC::cSystem_xYWBjXCw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_49rLKMmR, HV_BINOP_SUBTRACT, 1, m, &cBinop_49rLKMmR_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_6jgSdoQH, 2, m, &cDelay_6jgSdoQH_sendMessage);
}

void Heavy_Simple_OSC::cCast_4AqZDi7l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nk5fKQwl, 0, m, &cVar_nk5fKQwl_sendMessage);
  cMsg_JZ3NtcjK_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_RK1XnSM0, 0, m, &cTabhead_RK1XnSM0_sendMessage);
}

void Heavy_Simple_OSC::cCast_vjGOvqle_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bvo10OOf, 0, m, &cDelay_bvo10OOf_sendMessage);
}

void Heavy_Simple_OSC::cIf_UWHj8ayx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_ohMTtY40_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_y8DDF5yl, 0, m, &cVar_y8DDF5yl_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cBinop_E2wYnWKU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_UWHj8ayx, 1, m, &cIf_UWHj8ayx_sendMessage);
}

void Heavy_Simple_OSC::cVar_PxEx7qk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_cH3V9RMD_sendMessage);
}

void Heavy_Simple_OSC::cVar_GRZbCZvT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_E2wYnWKU_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_UWHj8ayx, 0, m, &cIf_UWHj8ayx_sendMessage);
}

void Heavy_Simple_OSC::cIf_8XZc3BCp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_5zZpde5V_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_F8mhnH3I_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cBinop_K0soYUoj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_h6wtiH2o_sendMessage);
}

void Heavy_Simple_OSC::cBinop_h6wtiH2o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SIzgVoZ3, HV_BINOP_POW, 1, m, &cBinop_SIzgVoZ3_sendMessage);
  cMsg_GMQC4IDy_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_TfKjqDTv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8XZc3BCp, 1, m, &cIf_8XZc3BCp_sendMessage);
}

void Heavy_Simple_OSC::cBinop_F8mhnH3I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_K0soYUoj_sendMessage);
}

void Heavy_Simple_OSC::cMsg_5zZpde5V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.125f, 0, m, &cBinop_D1pBEVed_sendMessage);
}

void Heavy_Simple_OSC::cMsg_GMQC4IDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_SIzgVoZ3, HV_BINOP_POW, 0, m, &cBinop_SIzgVoZ3_sendMessage);
}

void Heavy_Simple_OSC::cBinop_SIzgVoZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.125f, 0, m, &cBinop_D1pBEVed_sendMessage);
}

void Heavy_Simple_OSC::cCast_XVJJXriT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_TfKjqDTv_sendMessage);
}

void Heavy_Simple_OSC::cCast_Am0U3gWm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_8XZc3BCp, 0, m, &cIf_8XZc3BCp_sendMessage);
}

void Heavy_Simple_OSC::cDelay_QREXhBQm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_QREXhBQm, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_vhb9rSMr, 0, m, &cDelay_vhb9rSMr_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_qFvvP5pf, 0, m, &sTabread_qFvvP5pf_sendMessage);
}

void Heavy_Simple_OSC::cDelay_vhb9rSMr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_vhb9rSMr, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_qFvvP5pf, 0, m, &sTabread_qFvvP5pf_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_vhb9rSMr, 0, m, &cDelay_vhb9rSMr_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_tYXmCCTe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jd60GAvZ, HV_BINOP_SUBTRACT, 0, m, &cBinop_jd60GAvZ_sendMessage);
}

void Heavy_Simple_OSC::sTabread_qFvvP5pf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_ApKuPKDC, HV_BINOP_SUBTRACT, 0, m, &cBinop_ApKuPKDC_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_RnwccXgx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jumdkhGM_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_wkItuzTo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XeOUAD5C_sendMessage);
}

void Heavy_Simple_OSC::cSystem_XeOUAD5C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_nDw0Dh1P_sendMessage);
}

void Heavy_Simple_OSC::cBinop_UZChYgFm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5Y6ICDCA, HV_BINOP_MAX, 0, m, &cBinop_5Y6ICDCA_sendMessage);
}

void Heavy_Simple_OSC::cBinop_fcLBZEXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_QREXhBQm, 2, m, &cDelay_QREXhBQm_sendMessage);
}

void Heavy_Simple_OSC::cBinop_jd60GAvZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R0pAnWOw_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_qFvvP5pf, 0, m, &sTabread_qFvvP5pf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_swwECBwQ_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ApKuPKDC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_fcLBZEXr_sendMessage);
}

void Heavy_Simple_OSC::cBinop_nDw0Dh1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UZChYgFm, HV_BINOP_MULTIPLY, 0, m, &cBinop_UZChYgFm_sendMessage);
}

void Heavy_Simple_OSC::cBinop_5Y6ICDCA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jd60GAvZ, HV_BINOP_SUBTRACT, 1, m, &cBinop_jd60GAvZ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_R0pAnWOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_QREXhBQm, 0, m, &cDelay_QREXhBQm_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_vhb9rSMr, 0, m, &cDelay_vhb9rSMr_sendMessage);
}

void Heavy_Simple_OSC::cMsg_jumdkhGM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_IzKHB5W0_sendMessage);
}

void Heavy_Simple_OSC::cMsg_6RnyyNSK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_5Y6ICDCA, HV_BINOP_MAX, 1, m, &cBinop_5Y6ICDCA_sendMessage);
}

void Heavy_Simple_OSC::cSystem_IzKHB5W0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ApKuPKDC, HV_BINOP_SUBTRACT, 1, m, &cBinop_ApKuPKDC_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_vhb9rSMr, 2, m, &cDelay_vhb9rSMr_sendMessage);
}

void Heavy_Simple_OSC::cCast_swwECBwQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_QREXhBQm, 0, m, &cDelay_QREXhBQm_sendMessage);
}

void Heavy_Simple_OSC::cCast_2Yil7wAm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RnwccXgx, 0, m, &cVar_RnwccXgx_sendMessage);
  cMsg_wkItuzTo_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_tYXmCCTe, 0, m, &cTabhead_tYXmCCTe_sendMessage);
}

void Heavy_Simple_OSC::cVar_y8DDF5yl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8gVF1C68, 0, m, &cVar_8gVF1C68_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_UapMPoOs, 0, m, &cVar_UapMPoOs_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_epjLT3x7, 0, m, &cVar_epjLT3x7_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YuZNJVbU, 0, m, &cVar_YuZNJVbU_sendMessage);
}

void Heavy_Simple_OSC::cVar_0oTQrFFl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XVJJXriT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Am0U3gWm_sendMessage);
}

void Heavy_Simple_OSC::cVar_FVmfymBt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.01f, 0, m, &cBinop_8y1zuEOK_sendMessage);
}

void Heavy_Simple_OSC::cDelay_XwyxhgDT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_XwyxhgDT, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_h4Pg40he, 0, m, &sTabread_h4Pg40he_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XwyxhgDT, 0, m, &cDelay_XwyxhgDT_sendMessage);
}

void Heavy_Simple_OSC::cDelay_dUOODXZT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_dUOODXZT, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XwyxhgDT, 0, m, &cDelay_XwyxhgDT_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_h4Pg40he, 0, m, &sTabread_h4Pg40he_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_x9o4pJvt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ncb6gmEI, HV_BINOP_SUBTRACT, 0, m, &cBinop_Ncb6gmEI_sendMessage);
}

void Heavy_Simple_OSC::sTabread_h4Pg40he_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_4GdfSq22, HV_BINOP_SUBTRACT, 0, m, &cBinop_4GdfSq22_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_FEYUtYor_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8iE2UIBC_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_5Uboqmcb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4edZbj61_sendMessage);
}

void Heavy_Simple_OSC::cSystem_4edZbj61_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_osisMLuu_sendMessage);
}

void Heavy_Simple_OSC::cBinop_WFVWroUa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_dUOODXZT, 2, m, &cDelay_dUOODXZT_sendMessage);
}

void Heavy_Simple_OSC::cBinop_0L5Wy1DX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5VnkM7nt, HV_BINOP_MAX, 0, m, &cBinop_5VnkM7nt_sendMessage);
}

void Heavy_Simple_OSC::cBinop_4GdfSq22_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_WFVWroUa_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Ncb6gmEI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HizvAmfK_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_h4Pg40he, 0, m, &sTabread_h4Pg40he_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EZQExJry_sendMessage);
}

void Heavy_Simple_OSC::cBinop_osisMLuu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0L5Wy1DX, HV_BINOP_MULTIPLY, 0, m, &cBinop_0L5Wy1DX_sendMessage);
}

void Heavy_Simple_OSC::cBinop_5VnkM7nt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ncb6gmEI, HV_BINOP_SUBTRACT, 1, m, &cBinop_Ncb6gmEI_sendMessage);
}

void Heavy_Simple_OSC::cMsg_8iE2UIBC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_q0juPKiY_sendMessage);
}

void Heavy_Simple_OSC::cMsg_kLha7l8L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_5VnkM7nt, HV_BINOP_MAX, 1, m, &cBinop_5VnkM7nt_sendMessage);
}

void Heavy_Simple_OSC::cMsg_HizvAmfK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_dUOODXZT, 0, m, &cDelay_dUOODXZT_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XwyxhgDT, 0, m, &cDelay_XwyxhgDT_sendMessage);
}

void Heavy_Simple_OSC::cSystem_q0juPKiY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4GdfSq22, HV_BINOP_SUBTRACT, 1, m, &cBinop_4GdfSq22_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XwyxhgDT, 2, m, &cDelay_XwyxhgDT_sendMessage);
}

void Heavy_Simple_OSC::cCast_8iVWnzYI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FEYUtYor, 0, m, &cVar_FEYUtYor_sendMessage);
  cMsg_5Uboqmcb_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_x9o4pJvt, 0, m, &cTabhead_x9o4pJvt_sendMessage);
}

void Heavy_Simple_OSC::cCast_EZQExJry_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_dUOODXZT, 0, m, &cDelay_dUOODXZT_sendMessage);
}

void Heavy_Simple_OSC::cDelay_ngvGUf8e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ngvGUf8e, m);
  cMsg_F5vY5TAX_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_zXhSR4g1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_zXhSR4g1, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ngvGUf8e, 0, m, &cDelay_ngvGUf8e_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_zXhSR4g1, 0, m, &cDelay_zXhSR4g1_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_hAcsQgoN, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_FDoyWIR9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_UhyIfFis_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_kWm66dYO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_NKdZeIZq_sendMessage);
}

void Heavy_Simple_OSC::cSystem_NKdZeIZq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Jtvsj1mx_sendMessage);
}

void Heavy_Simple_OSC::cBinop_fJdu8tvC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_o7Url4We_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_Jtvsj1mx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 58.6435f, 0, m, &cBinop_fJdu8tvC_sendMessage);
}

void Heavy_Simple_OSC::cMsg_UhyIfFis_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_hAcsQgoN, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_F5vY5TAX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_wFRpwm2z, 0, m, &hTable_wFRpwm2z_sendMessage);
}

void Heavy_Simple_OSC::cMsg_o7Url4We_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_wFRpwm2z, 0, m, &hTable_wFRpwm2z_sendMessage);
}

void Heavy_Simple_OSC::cMsg_fMnB5UyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_ngvGUf8e, 2, m, &cDelay_ngvGUf8e_sendMessage);
}

void Heavy_Simple_OSC::hTable_wFRpwm2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fMnB5UyA_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_zXhSR4g1, 2, m, &cDelay_zXhSR4g1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_h9dI1JgL_sendMessage);
}

void Heavy_Simple_OSC::cCast_h9dI1JgL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_zXhSR4g1, 0, m, &cDelay_zXhSR4g1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_jWciKnLI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FVmfymBt, 0, m, &cVar_FVmfymBt_sendMessage);
}

void Heavy_Simple_OSC::cBinop_cH3V9RMD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_jWciKnLI_sendMessage);
}

void Heavy_Simple_OSC::cBinop_SSZnlTAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 200.0f, 0, m, &cBinop_qGZqdUHb_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ouB5ANXH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_SSZnlTAH_sendMessage);
}

void Heavy_Simple_OSC::cBinop_7kriR7zK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6wX0Dp1u_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_bhOSN2Hf, m);
}

void Heavy_Simple_OSC::cBinop_KnyTm6g4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_7kriR7zK_sendMessage);
}

void Heavy_Simple_OSC::cVar_8gVF1C68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rMiAwq3o, HV_BINOP_MULTIPLY, 0, m, &cBinop_rMiAwq3o_sendMessage);
}

void Heavy_Simple_OSC::cMsg_8FUA5Xe7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UEjZjIAu_sendMessage);
}

void Heavy_Simple_OSC::cSystem_UEjZjIAu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mPAsV89r_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_rMiAwq3o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_KnyTm6g4_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Zs4a2ISH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rMiAwq3o, HV_BINOP_MULTIPLY, 1, m, &cBinop_rMiAwq3o_sendMessage);
}

void Heavy_Simple_OSC::cMsg_mPAsV89r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Zs4a2ISH_sendMessage);
}

void Heavy_Simple_OSC::cBinop_6wX0Dp1u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GiQa4Ifp, m);
}

void Heavy_Simple_OSC::cDelay_O1NzmziO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_O1NzmziO, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jvK3ko3w, 0, m, &cDelay_jvK3ko3w_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_O1NzmziO, 0, m, &cDelay_O1NzmziO_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_hdNBKFO9, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_jvK3ko3w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_jvK3ko3w, m);
  cMsg_qjB2r8be_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_mN8JVovJ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_APzmmhvm_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_toTiKfI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2SbBPx4t_sendMessage);
}

void Heavy_Simple_OSC::cSystem_2SbBPx4t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Zyxauq02_sendMessage);
}

void Heavy_Simple_OSC::cBinop_SsW908vR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dW9LdpUF_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_Zyxauq02_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 25.796f, 0, m, &cBinop_SsW908vR_sendMessage);
}

void Heavy_Simple_OSC::cMsg_hjWzye89_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_jvK3ko3w, 2, m, &cDelay_jvK3ko3w_sendMessage);
}

void Heavy_Simple_OSC::cMsg_qjB2r8be_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_3UDQtrHM, 0, m, &hTable_3UDQtrHM_sendMessage);
}

void Heavy_Simple_OSC::cMsg_dW9LdpUF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_3UDQtrHM, 0, m, &hTable_3UDQtrHM_sendMessage);
}

void Heavy_Simple_OSC::cMsg_APzmmhvm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_hdNBKFO9, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_3UDQtrHM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hjWzye89_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_O1NzmziO, 2, m, &cDelay_O1NzmziO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WkVEWO1w_sendMessage);
}

void Heavy_Simple_OSC::cCast_WkVEWO1w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_O1NzmziO, 0, m, &cDelay_O1NzmziO_sendMessage);
}

void Heavy_Simple_OSC::cDelay_Nl0G9A5d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Nl0G9A5d, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IXUE6fSI, 0, m, &cDelay_IXUE6fSI_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_LGV0iaVb, 0, m, &sTabread_LGV0iaVb_sendMessage);
}

void Heavy_Simple_OSC::cDelay_IXUE6fSI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_IXUE6fSI, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_LGV0iaVb, 0, m, &sTabread_LGV0iaVb_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IXUE6fSI, 0, m, &cDelay_IXUE6fSI_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_QqK6hYHG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DyNaCzgk, HV_BINOP_SUBTRACT, 0, m, &cBinop_DyNaCzgk_sendMessage);
}

void Heavy_Simple_OSC::sTabread_LGV0iaVb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_6mNmEFw8, HV_BINOP_SUBTRACT, 0, m, &cBinop_6mNmEFw8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_xiCwA0LD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_V9xLRaDE_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_8Vu9djT9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_3k55mbxt_sendMessage);
}

void Heavy_Simple_OSC::cSystem_3k55mbxt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_5kJwiom6_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Lsp5clF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nYOC3ynU, HV_BINOP_MAX, 0, m, &cBinop_nYOC3ynU_sendMessage);
}

void Heavy_Simple_OSC::cBinop_HWi0rKDh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Nl0G9A5d, 2, m, &cDelay_Nl0G9A5d_sendMessage);
}

void Heavy_Simple_OSC::cBinop_6mNmEFw8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_HWi0rKDh_sendMessage);
}

void Heavy_Simple_OSC::cBinop_DyNaCzgk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KOJcedGA_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_LGV0iaVb, 0, m, &sTabread_LGV0iaVb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rbnznitF_sendMessage);
}

void Heavy_Simple_OSC::cBinop_5kJwiom6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Lsp5clF5, HV_BINOP_MULTIPLY, 0, m, &cBinop_Lsp5clF5_sendMessage);
}

void Heavy_Simple_OSC::cBinop_nYOC3ynU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DyNaCzgk, HV_BINOP_SUBTRACT, 1, m, &cBinop_DyNaCzgk_sendMessage);
}

void Heavy_Simple_OSC::cMsg_KOJcedGA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Nl0G9A5d, 0, m, &cDelay_Nl0G9A5d_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IXUE6fSI, 0, m, &cDelay_IXUE6fSI_sendMessage);
}

void Heavy_Simple_OSC::cMsg_pYsjcnKJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_nYOC3ynU, HV_BINOP_MAX, 1, m, &cBinop_nYOC3ynU_sendMessage);
}

void Heavy_Simple_OSC::cMsg_V9xLRaDE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fhtHopK4_sendMessage);
}

void Heavy_Simple_OSC::cSystem_fhtHopK4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6mNmEFw8, HV_BINOP_SUBTRACT, 1, m, &cBinop_6mNmEFw8_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IXUE6fSI, 2, m, &cDelay_IXUE6fSI_sendMessage);
}

void Heavy_Simple_OSC::cCast_rbnznitF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Nl0G9A5d, 0, m, &cDelay_Nl0G9A5d_sendMessage);
}

void Heavy_Simple_OSC::cCast_YYyDnc8a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xiCwA0LD, 0, m, &cVar_xiCwA0LD_sendMessage);
  cMsg_8Vu9djT9_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_QqK6hYHG, 0, m, &cTabhead_QqK6hYHG_sendMessage);
}

void Heavy_Simple_OSC::cDelay_oqogXi1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_oqogXi1v, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mHZTAJUz, 0, m, &cDelay_mHZTAJUz_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_Jt21PN6Z, 0, m, &sTabread_Jt21PN6Z_sendMessage);
}

void Heavy_Simple_OSC::cDelay_mHZTAJUz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_mHZTAJUz, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_Jt21PN6Z, 0, m, &sTabread_Jt21PN6Z_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mHZTAJUz, 0, m, &cDelay_mHZTAJUz_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_1TbZ56zJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5OMDVqAG, HV_BINOP_SUBTRACT, 0, m, &cBinop_5OMDVqAG_sendMessage);
}

void Heavy_Simple_OSC::sTabread_Jt21PN6Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_MelwPF7y, HV_BINOP_SUBTRACT, 0, m, &cBinop_MelwPF7y_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_IGbA7P7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QgjYG6Ar_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_hqmxlBri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_waYbKRIH_sendMessage);
}

void Heavy_Simple_OSC::cSystem_waYbKRIH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_WJpOgHlr_sendMessage);
}

void Heavy_Simple_OSC::cBinop_8oQEoV6m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_oqogXi1v, 2, m, &cDelay_oqogXi1v_sendMessage);
}

void Heavy_Simple_OSC::cBinop_BqeU1pvt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ritbmqVn, HV_BINOP_MAX, 0, m, &cBinop_ritbmqVn_sendMessage);
}

void Heavy_Simple_OSC::cBinop_5OMDVqAG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f1RKgtN2_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_Jt21PN6Z, 0, m, &sTabread_Jt21PN6Z_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xNfDLMIz_sendMessage);
}

void Heavy_Simple_OSC::cBinop_MelwPF7y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_8oQEoV6m_sendMessage);
}

void Heavy_Simple_OSC::cBinop_WJpOgHlr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BqeU1pvt, HV_BINOP_MULTIPLY, 0, m, &cBinop_BqeU1pvt_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ritbmqVn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5OMDVqAG, HV_BINOP_SUBTRACT, 1, m, &cBinop_5OMDVqAG_sendMessage);
}

void Heavy_Simple_OSC::cMsg_QgjYG6Ar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_wEJwCndH_sendMessage);
}

void Heavy_Simple_OSC::cMsg_f1RKgtN2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_oqogXi1v, 0, m, &cDelay_oqogXi1v_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mHZTAJUz, 0, m, &cDelay_mHZTAJUz_sendMessage);
}

void Heavy_Simple_OSC::cMsg_lFk53U4d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_ritbmqVn, HV_BINOP_MAX, 1, m, &cBinop_ritbmqVn_sendMessage);
}

void Heavy_Simple_OSC::cSystem_wEJwCndH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MelwPF7y, HV_BINOP_SUBTRACT, 1, m, &cBinop_MelwPF7y_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mHZTAJUz, 2, m, &cDelay_mHZTAJUz_sendMessage);
}

void Heavy_Simple_OSC::cCast_xNfDLMIz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_oqogXi1v, 0, m, &cDelay_oqogXi1v_sendMessage);
}

void Heavy_Simple_OSC::cCast_1W5Zn4Hv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_IGbA7P7Z, 0, m, &cVar_IGbA7P7Z_sendMessage);
  cMsg_hqmxlBri_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_1TbZ56zJ, 0, m, &cTabhead_1TbZ56zJ_sendMessage);
}

void Heavy_Simple_OSC::cDelay_9FhLHeY4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_9FhLHeY4, m);
  cMsg_1WI2bH6r_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_MwPJCO4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_MwPJCO4Y, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_9FhLHeY4, 0, m, &cDelay_9FhLHeY4_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_MwPJCO4Y, 0, m, &cDelay_MwPJCO4Y_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_ELhT3A9C, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_jHQIgz90_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_41nhMyf6_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_ZWTKdWi3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_j5ORhi5Y_sendMessage);
}

void Heavy_Simple_OSC::cSystem_j5ORhi5Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_4giJ4XHv_sendMessage);
}

void Heavy_Simple_OSC::cBinop_bKAXYVix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WpCC10vD_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_4giJ4XHv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 75.2546f, 0, m, &cBinop_bKAXYVix_sendMessage);
}

void Heavy_Simple_OSC::cMsg_1WI2bH6r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_IeYC6xiw, 0, m, &hTable_IeYC6xiw_sendMessage);
}

void Heavy_Simple_OSC::cMsg_41nhMyf6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_ELhT3A9C, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_zSmSPbfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_9FhLHeY4, 2, m, &cDelay_9FhLHeY4_sendMessage);
}

void Heavy_Simple_OSC::cMsg_WpCC10vD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_IeYC6xiw, 0, m, &hTable_IeYC6xiw_sendMessage);
}

void Heavy_Simple_OSC::hTable_IeYC6xiw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zSmSPbfu_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_MwPJCO4Y, 2, m, &cDelay_MwPJCO4Y_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3UufUVep_sendMessage);
}

void Heavy_Simple_OSC::cCast_3UufUVep_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_MwPJCO4Y, 0, m, &cDelay_MwPJCO4Y_sendMessage);
}

void Heavy_Simple_OSC::cDelay_AxFTG7ad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_AxFTG7ad, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_A1gXXDxD, 0, m, &cDelay_A1gXXDxD_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_AxFTG7ad, 0, m, &cDelay_AxFTG7ad_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_ULxPSvNG, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_A1gXXDxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_A1gXXDxD, m);
  cMsg_w1hk8AFC_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_d0N7iqor_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_n8aiKreT_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_oQLHbe5R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_gaY8Hcd0_sendMessage);
}

void Heavy_Simple_OSC::cSystem_gaY8Hcd0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_aBR8lIAs_sendMessage);
}

void Heavy_Simple_OSC::cBinop_brRdrWEf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KDcjO8fI_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_aBR8lIAs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 43.5337f, 0, m, &cBinop_brRdrWEf_sendMessage);
}

void Heavy_Simple_OSC::cMsg_w1hk8AFC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_8UAmViBd, 0, m, &hTable_8UAmViBd_sendMessage);
}

void Heavy_Simple_OSC::cMsg_KDcjO8fI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_8UAmViBd, 0, m, &hTable_8UAmViBd_sendMessage);
}

void Heavy_Simple_OSC::cMsg_1sYZsMCs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_A1gXXDxD, 2, m, &cDelay_A1gXXDxD_sendMessage);
}

void Heavy_Simple_OSC::cMsg_n8aiKreT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_ULxPSvNG, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_8UAmViBd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1sYZsMCs_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_AxFTG7ad, 2, m, &cDelay_AxFTG7ad_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AaxEAj9G_sendMessage);
}

void Heavy_Simple_OSC::cCast_AaxEAj9G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_AxFTG7ad, 0, m, &cDelay_AxFTG7ad_sendMessage);
}

void Heavy_Simple_OSC::cDelay_eVDzPd6y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_eVDzPd6y, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_gSHVY637, 0, m, &sTabread_gSHVY637_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_eVDzPd6y, 0, m, &cDelay_eVDzPd6y_sendMessage);
}

void Heavy_Simple_OSC::cDelay_jeG82HcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_jeG82HcH, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_eVDzPd6y, 0, m, &cDelay_eVDzPd6y_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_gSHVY637, 0, m, &sTabread_gSHVY637_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_pvQxq8h6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zxfQ0uNO, HV_BINOP_SUBTRACT, 0, m, &cBinop_zxfQ0uNO_sendMessage);
}

void Heavy_Simple_OSC::sTabread_gSHVY637_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_i2UdtvFn, HV_BINOP_SUBTRACT, 0, m, &cBinop_i2UdtvFn_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_fQuCmKY8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0d8tLvzO_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_YtS1PwHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_OWVPm1wn_sendMessage);
}

void Heavy_Simple_OSC::cSystem_OWVPm1wn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0UQtIrEC_sendMessage);
}

void Heavy_Simple_OSC::cBinop_AojlsIgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_jeG82HcH, 2, m, &cDelay_jeG82HcH_sendMessage);
}

void Heavy_Simple_OSC::cBinop_j9nhDTiv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jg2yFvQw, HV_BINOP_MAX, 0, m, &cBinop_Jg2yFvQw_sendMessage);
}

void Heavy_Simple_OSC::cBinop_i2UdtvFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_AojlsIgp_sendMessage);
}

void Heavy_Simple_OSC::cBinop_zxfQ0uNO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Z66wymyG_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_gSHVY637, 0, m, &sTabread_gSHVY637_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FU58g30S_sendMessage);
}

void Heavy_Simple_OSC::cBinop_0UQtIrEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_j9nhDTiv, HV_BINOP_MULTIPLY, 0, m, &cBinop_j9nhDTiv_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Jg2yFvQw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zxfQ0uNO, HV_BINOP_SUBTRACT, 1, m, &cBinop_zxfQ0uNO_sendMessage);
}

void Heavy_Simple_OSC::cMsg_0d8tLvzO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Avi8Fd5I_sendMessage);
}

void Heavy_Simple_OSC::cMsg_cT99NwAT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jg2yFvQw, HV_BINOP_MAX, 1, m, &cBinop_Jg2yFvQw_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Z66wymyG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_jeG82HcH, 0, m, &cDelay_jeG82HcH_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_eVDzPd6y, 0, m, &cDelay_eVDzPd6y_sendMessage);
}

void Heavy_Simple_OSC::cSystem_Avi8Fd5I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i2UdtvFn, HV_BINOP_SUBTRACT, 1, m, &cBinop_i2UdtvFn_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_eVDzPd6y, 2, m, &cDelay_eVDzPd6y_sendMessage);
}

void Heavy_Simple_OSC::cCast_FU58g30S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_jeG82HcH, 0, m, &cDelay_jeG82HcH_sendMessage);
}

void Heavy_Simple_OSC::cCast_I0fOadrS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fQuCmKY8, 0, m, &cVar_fQuCmKY8_sendMessage);
  cMsg_YtS1PwHX_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_pvQxq8h6, 0, m, &cTabhead_pvQxq8h6_sendMessage);
}

void Heavy_Simple_OSC::cDelay_cd7TI9vl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_cd7TI9vl, m);
  cMsg_sBzREwuo_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_4kRRnywY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_4kRRnywY, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_cd7TI9vl, 0, m, &cDelay_cd7TI9vl_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4kRRnywY, 0, m, &cDelay_4kRRnywY_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_zpcjGJt8, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_zgkx73vz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_cnLpf2ri_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_Av35co2F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zWMgzbBz_sendMessage);
}

void Heavy_Simple_OSC::cSystem_zWMgzbBz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_3EfRYXxy_sendMessage);
}

void Heavy_Simple_OSC::cBinop_zVJD4TWG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YCVEZ6u4_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_3EfRYXxy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 16.364f, 0, m, &cBinop_zVJD4TWG_sendMessage);
}

void Heavy_Simple_OSC::cMsg_YCVEZ6u4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_r7ICE3O6, 0, m, &hTable_r7ICE3O6_sendMessage);
}

void Heavy_Simple_OSC::cMsg_sBzREwuo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_r7ICE3O6, 0, m, &hTable_r7ICE3O6_sendMessage);
}

void Heavy_Simple_OSC::cMsg_E8CLcReu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_cd7TI9vl, 2, m, &cDelay_cd7TI9vl_sendMessage);
}

void Heavy_Simple_OSC::cMsg_cnLpf2ri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_zpcjGJt8, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_r7ICE3O6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_E8CLcReu_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4kRRnywY, 2, m, &cDelay_4kRRnywY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FPx8ked6_sendMessage);
}

void Heavy_Simple_OSC::cCast_FPx8ked6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_4kRRnywY, 0, m, &cDelay_4kRRnywY_sendMessage);
}

void Heavy_Simple_OSC::cDelay_oXDpM5PW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_oXDpM5PW, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_zVnfbG9O, 0, m, &sTabread_zVnfbG9O_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_oXDpM5PW, 0, m, &cDelay_oXDpM5PW_sendMessage);
}

void Heavy_Simple_OSC::cDelay_r6Re24fP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_r6Re24fP, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_oXDpM5PW, 0, m, &cDelay_oXDpM5PW_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_zVnfbG9O, 0, m, &sTabread_zVnfbG9O_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_dIAN6gNl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WMdp1kR9, HV_BINOP_SUBTRACT, 0, m, &cBinop_WMdp1kR9_sendMessage);
}

void Heavy_Simple_OSC::sTabread_zVnfbG9O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_CMkk36X9, HV_BINOP_SUBTRACT, 0, m, &cBinop_CMkk36X9_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_q0jLN3Li_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y5lPENlH_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_Id6xE7x6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_V1TRTbHn_sendMessage);
}

void Heavy_Simple_OSC::cSystem_V1TRTbHn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_5kPQdasK_sendMessage);
}

void Heavy_Simple_OSC::cBinop_1NW6Kx6n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_B7RdC88l, HV_BINOP_MAX, 0, m, &cBinop_B7RdC88l_sendMessage);
}

void Heavy_Simple_OSC::cBinop_7Tg9hFTm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_r6Re24fP, 2, m, &cDelay_r6Re24fP_sendMessage);
}

void Heavy_Simple_OSC::cBinop_CMkk36X9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_7Tg9hFTm_sendMessage);
}

void Heavy_Simple_OSC::cBinop_WMdp1kR9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hlQx3pgg_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_zVnfbG9O, 0, m, &sTabread_zVnfbG9O_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zgeqXTij_sendMessage);
}

void Heavy_Simple_OSC::cBinop_5kPQdasK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1NW6Kx6n, HV_BINOP_MULTIPLY, 0, m, &cBinop_1NW6Kx6n_sendMessage);
}

void Heavy_Simple_OSC::cBinop_B7RdC88l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WMdp1kR9, HV_BINOP_SUBTRACT, 1, m, &cBinop_WMdp1kR9_sendMessage);
}

void Heavy_Simple_OSC::cMsg_hlQx3pgg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_r6Re24fP, 0, m, &cDelay_r6Re24fP_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_oXDpM5PW, 0, m, &cDelay_oXDpM5PW_sendMessage);
}

void Heavy_Simple_OSC::cMsg_YudCaEzQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_B7RdC88l, HV_BINOP_MAX, 1, m, &cBinop_B7RdC88l_sendMessage);
}

void Heavy_Simple_OSC::cMsg_y5lPENlH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xDhsp7HB_sendMessage);
}

void Heavy_Simple_OSC::cSystem_xDhsp7HB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CMkk36X9, HV_BINOP_SUBTRACT, 1, m, &cBinop_CMkk36X9_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_oXDpM5PW, 2, m, &cDelay_oXDpM5PW_sendMessage);
}

void Heavy_Simple_OSC::cCast_zgeqXTij_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_r6Re24fP, 0, m, &cDelay_r6Re24fP_sendMessage);
}

void Heavy_Simple_OSC::cCast_G9plVJJW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_q0jLN3Li, 0, m, &cVar_q0jLN3Li_sendMessage);
  cMsg_Id6xE7x6_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_dIAN6gNl, 0, m, &cTabhead_dIAN6gNl_sendMessage);
}

void Heavy_Simple_OSC::cDelay_jqFl75bD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_jqFl75bD, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_yBJrUUUD, 0, m, &sTabread_yBJrUUUD_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jqFl75bD, 0, m, &cDelay_jqFl75bD_sendMessage);
}

void Heavy_Simple_OSC::cDelay_wx9UF834_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_wx9UF834, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jqFl75bD, 0, m, &cDelay_jqFl75bD_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_yBJrUUUD, 0, m, &sTabread_yBJrUUUD_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_kmtRu0Ub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DVoul22Y, HV_BINOP_SUBTRACT, 0, m, &cBinop_DVoul22Y_sendMessage);
}

void Heavy_Simple_OSC::sTabread_yBJrUUUD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_lubZcU26, HV_BINOP_SUBTRACT, 0, m, &cBinop_lubZcU26_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_EEkLlmQd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kPXTHLzn_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_K7DTBWnA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eapxwLKa_sendMessage);
}

void Heavy_Simple_OSC::cSystem_eapxwLKa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_JEy84GDr_sendMessage);
}

void Heavy_Simple_OSC::cBinop_iA5jp0rs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_wx9UF834, 2, m, &cDelay_wx9UF834_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ZyqiOv8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6J1HVHBk, HV_BINOP_MAX, 0, m, &cBinop_6J1HVHBk_sendMessage);
}

void Heavy_Simple_OSC::cBinop_lubZcU26_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_iA5jp0rs_sendMessage);
}

void Heavy_Simple_OSC::cBinop_DVoul22Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nMk4RniC_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_yBJrUUUD, 0, m, &sTabread_yBJrUUUD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_i71ui3rN_sendMessage);
}

void Heavy_Simple_OSC::cBinop_JEy84GDr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZyqiOv8V, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZyqiOv8V_sendMessage);
}

void Heavy_Simple_OSC::cBinop_6J1HVHBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DVoul22Y, HV_BINOP_SUBTRACT, 1, m, &cBinop_DVoul22Y_sendMessage);
}

void Heavy_Simple_OSC::cMsg_kPXTHLzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_P5JclrqL_sendMessage);
}

void Heavy_Simple_OSC::cMsg_REUDX8UV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_6J1HVHBk, HV_BINOP_MAX, 1, m, &cBinop_6J1HVHBk_sendMessage);
}

void Heavy_Simple_OSC::cMsg_nMk4RniC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_wx9UF834, 0, m, &cDelay_wx9UF834_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jqFl75bD, 0, m, &cDelay_jqFl75bD_sendMessage);
}

void Heavy_Simple_OSC::cSystem_P5JclrqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lubZcU26, HV_BINOP_SUBTRACT, 1, m, &cBinop_lubZcU26_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jqFl75bD, 2, m, &cDelay_jqFl75bD_sendMessage);
}

void Heavy_Simple_OSC::cCast_i71ui3rN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_wx9UF834, 0, m, &cDelay_wx9UF834_sendMessage);
}

void Heavy_Simple_OSC::cCast_Dh9XHVD6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EEkLlmQd, 0, m, &cVar_EEkLlmQd_sendMessage);
  cMsg_K7DTBWnA_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_kmtRu0Ub, 0, m, &cTabhead_kmtRu0Ub_sendMessage);
}

void Heavy_Simple_OSC::cDelay_haUl0INL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_haUl0INL, m);
  cMsg_SWwjgoSD_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_7xhQg2qf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_7xhQg2qf, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_haUl0INL, 0, m, &cDelay_haUl0INL_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_7xhQg2qf, 0, m, &cDelay_7xhQg2qf_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_KdsQKYlT, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_pydcmh5W_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_61XS9CgO_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_DkWGpMRt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8YiMXznz_sendMessage);
}

void Heavy_Simple_OSC::cSystem_8YiMXznz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_hls827Jk_sendMessage);
}

void Heavy_Simple_OSC::cBinop_gY1VNTxi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1hqqB0sI_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_hls827Jk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 19.392f, 0, m, &cBinop_gY1VNTxi_sendMessage);
}

void Heavy_Simple_OSC::cMsg_61XS9CgO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_KdsQKYlT, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_1hqqB0sI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_dYnlmTK9, 0, m, &hTable_dYnlmTK9_sendMessage);
}

void Heavy_Simple_OSC::cMsg_VFaa7MPf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_haUl0INL, 2, m, &cDelay_haUl0INL_sendMessage);
}

void Heavy_Simple_OSC::cMsg_SWwjgoSD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_dYnlmTK9, 0, m, &hTable_dYnlmTK9_sendMessage);
}

void Heavy_Simple_OSC::hTable_dYnlmTK9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VFaa7MPf_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_7xhQg2qf, 2, m, &cDelay_7xhQg2qf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QC5aUoxp_sendMessage);
}

void Heavy_Simple_OSC::cCast_QC5aUoxp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_7xhQg2qf, 0, m, &cDelay_7xhQg2qf_sendMessage);
}

void Heavy_Simple_OSC::cDelay_aQwSz9Rm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_aQwSz9Rm, m);
  cMsg_1DRdSEse_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_jn7zJYf4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_jn7zJYf4, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_aQwSz9Rm, 0, m, &cDelay_aQwSz9Rm_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jn7zJYf4, 0, m, &cDelay_jn7zJYf4_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_VKXFTFym, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_5pWKcwlx_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_z8HxV3gz_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_jBiHsz1Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7RE6sAK5_sendMessage);
}

void Heavy_Simple_OSC::cSystem_7RE6sAK5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_kwI2n0W4_sendMessage);
}

void Heavy_Simple_OSC::cBinop_cAjYXhgn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mpTQGjpB_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_kwI2n0W4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 13.645f, 0, m, &cBinop_cAjYXhgn_sendMessage);
}

void Heavy_Simple_OSC::cMsg_z8HxV3gz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_VKXFTFym, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_1DRdSEse_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_fqwvMdHt, 0, m, &hTable_fqwvMdHt_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Nj3wfHtQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_aQwSz9Rm, 2, m, &cDelay_aQwSz9Rm_sendMessage);
}

void Heavy_Simple_OSC::cMsg_mpTQGjpB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_fqwvMdHt, 0, m, &hTable_fqwvMdHt_sendMessage);
}

void Heavy_Simple_OSC::hTable_fqwvMdHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Nj3wfHtQ_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_jn7zJYf4, 2, m, &cDelay_jn7zJYf4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Cnu9eMik_sendMessage);
}

void Heavy_Simple_OSC::cCast_Cnu9eMik_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_jn7zJYf4, 0, m, &cDelay_jn7zJYf4_sendMessage);
}

void Heavy_Simple_OSC::cDelay_HyXHIJIQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_HyXHIJIQ, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_jhXBb0XU, 0, m, &sTabread_jhXBb0XU_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HyXHIJIQ, 0, m, &cDelay_HyXHIJIQ_sendMessage);
}

void Heavy_Simple_OSC::cDelay_8j0SujJF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_8j0SujJF, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HyXHIJIQ, 0, m, &cDelay_HyXHIJIQ_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_jhXBb0XU, 0, m, &sTabread_jhXBb0XU_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_mFlqjEBU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0c0L7v8U, HV_BINOP_SUBTRACT, 0, m, &cBinop_0c0L7v8U_sendMessage);
}

void Heavy_Simple_OSC::sTabread_jhXBb0XU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_OS8M39nX, HV_BINOP_SUBTRACT, 0, m, &cBinop_OS8M39nX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_P3KGirJP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WXxsYHpk_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_syaYWKCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KZAZpLZK_sendMessage);
}

void Heavy_Simple_OSC::cSystem_KZAZpLZK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_yEr5Ecnc_sendMessage);
}

void Heavy_Simple_OSC::cBinop_D6w3e4wk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_8j0SujJF, 2, m, &cDelay_8j0SujJF_sendMessage);
}

void Heavy_Simple_OSC::cBinop_JarDctxs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zOeWczwu, HV_BINOP_MAX, 0, m, &cBinop_zOeWczwu_sendMessage);
}

void Heavy_Simple_OSC::cBinop_OS8M39nX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_D6w3e4wk_sendMessage);
}

void Heavy_Simple_OSC::cBinop_0c0L7v8U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IVfzWEoJ_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_jhXBb0XU, 0, m, &sTabread_jhXBb0XU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QybDfZDH_sendMessage);
}

void Heavy_Simple_OSC::cBinop_yEr5Ecnc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JarDctxs, HV_BINOP_MULTIPLY, 0, m, &cBinop_JarDctxs_sendMessage);
}

void Heavy_Simple_OSC::cBinop_zOeWczwu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0c0L7v8U, HV_BINOP_SUBTRACT, 1, m, &cBinop_0c0L7v8U_sendMessage);
}

void Heavy_Simple_OSC::cMsg_IVfzWEoJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_8j0SujJF, 0, m, &cDelay_8j0SujJF_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HyXHIJIQ, 0, m, &cDelay_HyXHIJIQ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_hoP28gq2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_zOeWczwu, HV_BINOP_MAX, 1, m, &cBinop_zOeWczwu_sendMessage);
}

void Heavy_Simple_OSC::cMsg_WXxsYHpk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_51JvOl64_sendMessage);
}

void Heavy_Simple_OSC::cSystem_51JvOl64_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OS8M39nX, HV_BINOP_SUBTRACT, 1, m, &cBinop_OS8M39nX_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HyXHIJIQ, 2, m, &cDelay_HyXHIJIQ_sendMessage);
}

void Heavy_Simple_OSC::cCast_QybDfZDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_8j0SujJF, 0, m, &cDelay_8j0SujJF_sendMessage);
}

void Heavy_Simple_OSC::cCast_oF85CDsV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_P3KGirJP, 0, m, &cVar_P3KGirJP_sendMessage);
  cMsg_syaYWKCY_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_mFlqjEBU, 0, m, &cTabhead_mFlqjEBU_sendMessage);
}

void Heavy_Simple_OSC::cBinop_0ex6Ff40_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_lXNNSEKQ_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_8ITqtsN8, m);
}

void Heavy_Simple_OSC::cBinop_FHASIirA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_0ex6Ff40_sendMessage);
}

void Heavy_Simple_OSC::cMsg_FVAkFKnh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_NSjnahGI_sendMessage);
}

void Heavy_Simple_OSC::cSystem_NSjnahGI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ls5i0Gsf_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_PtZp7lAE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_FHASIirA_sendMessage);
}

void Heavy_Simple_OSC::cBinop_IHoLVV3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PtZp7lAE, HV_BINOP_MULTIPLY, 1, m, &cBinop_PtZp7lAE_sendMessage);
}

void Heavy_Simple_OSC::cMsg_ls5i0Gsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_IHoLVV3u_sendMessage);
}

void Heavy_Simple_OSC::cVar_UapMPoOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PtZp7lAE, HV_BINOP_MULTIPLY, 0, m, &cBinop_PtZp7lAE_sendMessage);
}

void Heavy_Simple_OSC::cBinop_lXNNSEKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wVGDKJnj, m);
}

void Heavy_Simple_OSC::cDelay_pzBLz1pJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_pzBLz1pJ, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Gcsw9qiH, 0, m, &cDelay_Gcsw9qiH_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_pzBLz1pJ, 0, m, &cDelay_pzBLz1pJ_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_eNxRpEDE, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_Gcsw9qiH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Gcsw9qiH, m);
  cMsg_r6DfyKsG_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_aTQmzDze_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_NKnoxSpe_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_JbGtmHc5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5VehfVHu_sendMessage);
}

void Heavy_Simple_OSC::cSystem_5VehfVHu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_QB7S0K9z_sendMessage);
}

void Heavy_Simple_OSC::cBinop_pKOy4Oyw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Iu8HCIjR_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_QB7S0K9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 74.5234f, 0, m, &cBinop_pKOy4Oyw_sendMessage);
}

void Heavy_Simple_OSC::cMsg_NKnoxSpe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_eNxRpEDE, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_JEDW8dI5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_Gcsw9qiH, 2, m, &cDelay_Gcsw9qiH_sendMessage);
}

void Heavy_Simple_OSC::cMsg_r6DfyKsG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_vEzHUOio, 0, m, &hTable_vEzHUOio_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Iu8HCIjR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_vEzHUOio, 0, m, &hTable_vEzHUOio_sendMessage);
}

void Heavy_Simple_OSC::hTable_vEzHUOio_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JEDW8dI5_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_pzBLz1pJ, 2, m, &cDelay_pzBLz1pJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ljXv9wmq_sendMessage);
}

void Heavy_Simple_OSC::cCast_ljXv9wmq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_pzBLz1pJ, 0, m, &cDelay_pzBLz1pJ_sendMessage);
}

void Heavy_Simple_OSC::cPack_slLyXUuy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_lj6SxHyl, 0, m, NULL);
}

void Heavy_Simple_OSC::cPack_5W3ZowqF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_B4h7ZNna, 0, m, NULL);
}

void Heavy_Simple_OSC::cPack_DmMYPr42_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_4p6cdlhP, 0, m, NULL);
}

void Heavy_Simple_OSC::cBinop_D1pBEVed_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_DmMYPr42, 0, m, &cPack_DmMYPr42_sendMessage);
}

void Heavy_Simple_OSC::cBinop_8y1zuEOK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_5W3ZowqF, 0, m, &cPack_5W3ZowqF_sendMessage);
}

void Heavy_Simple_OSC::cBinop_qGZqdUHb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_slLyXUuy, 0, m, &cPack_slLyXUuy_sendMessage);
}

void Heavy_Simple_OSC::cMsg_ohMTtY40_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3000.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_y8DDF5yl, 0, m, &cVar_y8DDF5yl_sendMessage);
}

void Heavy_Simple_OSC::cVar_6Sb85ZpO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Ju0zlNTh_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_u6tKN3w5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3CDCFB01: { // "predelay_ms"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bDu43SBt, 0, m, &cSlice_bDu43SBt_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_bDu43SBt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_Ju0zlNTh_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_Ju0zlNTh_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_Ju0zlNTh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4Jk88MkG_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_5YLtxTFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_5KrfTwmI_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_BdHlDum9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x2BA58A7F: { // "dry-gain"
      cSlice_onMessage(_c, &Context(_c)->cSlice_RMbPYmR4, 0, m, &cSlice_RMbPYmR4_sendMessage);
      break;
    }
    default: {
      cSwitchcase_mfUaSQsn_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_RMbPYmR4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5KrfTwmI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_5KrfTwmI_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_5KrfTwmI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_xerl4fV7_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cIf_IuzEIXPu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_yvjY0Ast_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_jC1kJxsR_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cBinop_WYQAZsOE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_3XHBsX5v_sendMessage);
}

void Heavy_Simple_OSC::cBinop_3XHBsX5v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f4NRB6jm, HV_BINOP_POW, 1, m, &cBinop_f4NRB6jm_sendMessage);
  cMsg_DOoa9Zfw_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_V4D0TSNQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IuzEIXPu, 1, m, &cIf_IuzEIXPu_sendMessage);
}

void Heavy_Simple_OSC::cBinop_jC1kJxsR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_WYQAZsOE_sendMessage);
}

void Heavy_Simple_OSC::cMsg_DOoa9Zfw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_f4NRB6jm, HV_BINOP_POW, 0, m, &cBinop_f4NRB6jm_sendMessage);
}

void Heavy_Simple_OSC::cMsg_yvjY0Ast_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.125f, 0, m, &cBinop_HIk0jG4X_sendMessage);
}

void Heavy_Simple_OSC::cBinop_f4NRB6jm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.125f, 0, m, &cBinop_HIk0jG4X_sendMessage);
}

void Heavy_Simple_OSC::cCast_iyKAvG8D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IuzEIXPu, 0, m, &cIf_IuzEIXPu_sendMessage);
}

void Heavy_Simple_OSC::cCast_6bEtRjxN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_V4D0TSNQ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_nhmUpZez_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_seZM77CZ, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_v6IxFK1a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_DSg3PVBf, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_hOnXan3F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JGpbZh7Z, 0, m, NULL);
}

void Heavy_Simple_OSC::cBinop_XWd42ll8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TzOTEQhL, HV_BINOP_MULTIPLY, 1, m, &cBinop_TzOTEQhL_sendMessage);
}

void Heavy_Simple_OSC::cBinop_aKDl9DSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_XWd42ll8_sendMessage);
}

void Heavy_Simple_OSC::cVar_XQx2E3uf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9Rre90uq_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_MAi41w54_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1vokAHVr_sendMessage);
}

void Heavy_Simple_OSC::cBinop_T7SdytLE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_78oQy0ip, HV_BINOP_MULTIPLY, 0, m, &cBinop_78oQy0ip_sendMessage);
}

void Heavy_Simple_OSC::cBinop_MAi41w54_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_T7SdytLE_sendMessage);
}

void Heavy_Simple_OSC::cVar_mkH8Ybpt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3PctkjFk_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_5kk39Woz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YizSwjVV_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_cHkEmAWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_5kk39Woz_sendMessage);
}

void Heavy_Simple_OSC::cVar_vZw2eYN4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_cHkEmAWH_sendMessage);
}

void Heavy_Simple_OSC::cBinop_NVJTxuzP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9UFU7jMB, HV_BINOP_MULTIPLY, 1, m, &cBinop_9UFU7jMB_sendMessage);
}

void Heavy_Simple_OSC::cBinop_356bA4V6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_b45xc2ho, HV_BINOP_MULTIPLY, 1, m, &cBinop_b45xc2ho_sendMessage);
}

void Heavy_Simple_OSC::cMsg_9REJW0QA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_356bA4V6_sendMessage);
}

void Heavy_Simple_OSC::cUnop_gkqOEViu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_LsLWuoCT_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_Ww3SqZ8O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BSvR2BHX_sendMessage);
}

void Heavy_Simple_OSC::cSystem_BSvR2BHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_A59DkC8B, HV_BINOP_DIVIDE, 1, m, &cBinop_A59DkC8B_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tQOuOkcP_sendMessage);
}

void Heavy_Simple_OSC::cUnop_JdcVsBUW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_3OVxoZ31_sendMessage);
}

void Heavy_Simple_OSC::cBinop_78oQy0ip_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xwVnm15i_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_G3ZwVd2H_sendMessage);
}

void Heavy_Simple_OSC::cBinop_3OVxoZ31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_A59DkC8B, HV_BINOP_DIVIDE, 0, m, &cBinop_A59DkC8B_sendMessage);
}

void Heavy_Simple_OSC::cBinop_A59DkC8B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_78oQy0ip, HV_BINOP_MULTIPLY, 1, m, &cBinop_78oQy0ip_sendMessage);
}

void Heavy_Simple_OSC::cMsg_9HLAElQQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_JdcVsBUW_sendMessage);
}

void Heavy_Simple_OSC::cCast_tQOuOkcP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9HLAElQQ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_2HgrfoHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IiGtBJOs, HV_BINOP_MULTIPLY, 1, m, &cBinop_IiGtBJOs_sendMessage);
}

void Heavy_Simple_OSC::cBinop_KY3t4PWh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_2HgrfoHE_sendMessage);
}

void Heavy_Simple_OSC::cBinop_1lvgyABC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EsmNcGSm, HV_BINOP_MULTIPLY, 1, m, &cBinop_EsmNcGSm_sendMessage);
}

void Heavy_Simple_OSC::cBinop_lV7qaoyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_1lvgyABC_sendMessage);
}

void Heavy_Simple_OSC::cUnop_nm5uzEMY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_QFe8j4Vi_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_b0n3SFOz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mkH8Ybpt, 1, m, &cVar_mkH8Ybpt_sendMessage);
}

void Heavy_Simple_OSC::cBinop_9UFU7jMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hOnXan3F_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_EsmNcGSm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YmGPTg0J_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_TzOTEQhL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_v6IxFK1a_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_b45xc2ho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iy96iLmJ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_2V8JLgRt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_bJLltkZy_sendMessage);
}

void Heavy_Simple_OSC::cBinop_bJLltkZy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_iP3GlmLG_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_IiGtBJOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nhmUpZez_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_WG7vbwGV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_21innQH3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Lh0N8qtP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4nwUP6gf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ran7tYzU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2vwJGNQk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dxfNduC1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_f6tzCFiq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2V8JLgRt, HV_BINOP_MULTIPLY, 1, m, &cBinop_2V8JLgRt_sendMessage);
}

void Heavy_Simple_OSC::cMsg_YizSwjVV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_f6tzCFiq_sendMessage);
}

void Heavy_Simple_OSC::cMsg_3PctkjFk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_WG7vbwGV_sendMessage);
}

void Heavy_Simple_OSC::cSend_iP3GlmLG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_YJcJuuEq_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_QFe8j4Vi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_YqVgIFI7_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_LsLWuoCT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IdFojawY_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cCast_dxfNduC1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EsmNcGSm, HV_BINOP_MULTIPLY, 0, m, &cBinop_EsmNcGSm_sendMessage);
}

void Heavy_Simple_OSC::cCast_2vwJGNQk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TzOTEQhL, HV_BINOP_MULTIPLY, 0, m, &cBinop_TzOTEQhL_sendMessage);
}

void Heavy_Simple_OSC::cCast_Lh0N8qtP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_b45xc2ho, HV_BINOP_MULTIPLY, 0, m, &cBinop_b45xc2ho_sendMessage);
}

void Heavy_Simple_OSC::cCast_21innQH3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Simple_OSC::cCast_4nwUP6gf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9UFU7jMB, HV_BINOP_MULTIPLY, 0, m, &cBinop_9UFU7jMB_sendMessage);
}

void Heavy_Simple_OSC::cCast_ran7tYzU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IiGtBJOs, HV_BINOP_MULTIPLY, 0, m, &cBinop_IiGtBJOs_sendMessage);
}

void Heavy_Simple_OSC::cCast_1vokAHVr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mkH8Ybpt, 0, m, &cVar_mkH8Ybpt_sendMessage);
}

void Heavy_Simple_OSC::cCast_9Rre90uq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vZw2eYN4, 0, m, &cVar_vZw2eYN4_sendMessage);
}

void Heavy_Simple_OSC::cCast_Jy3x5gub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vZw2eYN4, 1, m, &cVar_vZw2eYN4_sendMessage);
}

void Heavy_Simple_OSC::cCast_atcmiqBg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XQx2E3uf, 0, m, &cVar_XQx2E3uf_sendMessage);
}

void Heavy_Simple_OSC::cCast_xwVnm15i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_gkqOEViu_sendMessage);
}

void Heavy_Simple_OSC::cCast_G3ZwVd2H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_nm5uzEMY_sendMessage);
}

void Heavy_Simple_OSC::cMsg_iy96iLmJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JG0LoJNn, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_YmGPTg0J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_cb9wJ458, 0, m, NULL);
}

void Heavy_Simple_OSC::cVar_k8uKx4Do_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IuwbHICL_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_mfUaSQsn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x26AD13E6: { // "wet-gain"
      cSlice_onMessage(_c, &Context(_c)->cSlice_EtxduE5p, 0, m, &cSlice_EtxduE5p_sendMessage);
      break;
    }
    default: {
      cSwitchcase_YyNjTChe_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_EtxduE5p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_IuwbHICL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_IuwbHICL_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_IuwbHICL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LauuFJcm_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_TO3oudhq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_3Qxzv7lc_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_AItO66D4_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xDA23B137: { // "lowcut"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UNEdgFgt, 0, m, &cSlice_UNEdgFgt_sendMessage);
      break;
    }
    default: {
      cSwitchcase_Bx6erMo2_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_UNEdgFgt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_3Qxzv7lc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_3Qxzv7lc_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_3Qxzv7lc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_JfdBhlWd_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_CfZQ1jW9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ndPld8Og_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_4ANv9fTU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x71E7CD1D: { // "damp"
      cSlice_onMessage(_c, &Context(_c)->cSlice_39SVSkWK, 0, m, &cSlice_39SVSkWK_sendMessage);
      break;
    }
    default: {
      cSwitchcase_u6tKN3w5_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_39SVSkWK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ndPld8Og_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ndPld8Og_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_ndPld8Og_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZvYzhgQD_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_QI0tfG6e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_x5jxqdf0_sendMessage);
}

void Heavy_Simple_OSC::cSystem_x5jxqdf0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_8Jmp4C83_sendMessage);
}

void Heavy_Simple_OSC::cVar_skFXrjYZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xxxw3dBc_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_W40vjxgb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jQdAez40, m);
}

void Heavy_Simple_OSC::cBinop_8Jmp4C83_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_C8IKCQJI, m);
}

void Heavy_Simple_OSC::cMsg_xxxw3dBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ypPUX6j5_sendMessage);
}

void Heavy_Simple_OSC::cSystem_ypPUX6j5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_W40vjxgb_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WSsuG5lp, m);
}

void Heavy_Simple_OSC::cDelay_KoBxyLN5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_KoBxyLN5, m);
  cMsg_OfhzkcbI_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_til7LQfc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_til7LQfc, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_KoBxyLN5, 0, m, &cDelay_KoBxyLN5_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_til7LQfc, 0, m, &cDelay_til7LQfc_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_jSRaB2R0, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_N5dSmzzJ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_nj2WJPzX_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_UEW85Amf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2Sny5fiP_sendMessage);
}

void Heavy_Simple_OSC::cSystem_2Sny5fiP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_CSYHZEk5_sendMessage);
}

void Heavy_Simple_OSC::cBinop_XT6DHUsp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Vzxfray2_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_CSYHZEk5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 3000.0f, 0, m, &cBinop_XT6DHUsp_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Vzxfray2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_SeBwXseX, 0, m, &hTable_SeBwXseX_sendMessage);
}

void Heavy_Simple_OSC::cMsg_mBcxaUKO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_KoBxyLN5, 2, m, &cDelay_KoBxyLN5_sendMessage);
}

void Heavy_Simple_OSC::cMsg_nj2WJPzX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_jSRaB2R0, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_OfhzkcbI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_SeBwXseX, 0, m, &hTable_SeBwXseX_sendMessage);
}

void Heavy_Simple_OSC::hTable_SeBwXseX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mBcxaUKO_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_til7LQfc, 2, m, &cDelay_til7LQfc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Wy5pgs7X_sendMessage);
}

void Heavy_Simple_OSC::cCast_Wy5pgs7X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_til7LQfc, 0, m, &cDelay_til7LQfc_sendMessage);
}

void Heavy_Simple_OSC::cPack_KRLz9hP2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_tBCmODUp, 0, m, NULL);
}

void Heavy_Simple_OSC::cBinop_HIk0jG4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_KRLz9hP2, 0, m, &cPack_KRLz9hP2_sendMessage);
}

void Heavy_Simple_OSC::cMsg_eODiAkxk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_6V0y3mVw, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_UnXpk3hI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_FtgFn97w, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_nZuk2nbE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_FLyjoGIr, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_mvSzT3rH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_EhUdLVFO, 0, m, NULL);
}

void Heavy_Simple_OSC::cBinop_Abp6iKPP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rRAD2XRm, HV_BINOP_MULTIPLY, 1, m, &cBinop_rRAD2XRm_sendMessage);
}

void Heavy_Simple_OSC::cMsg_HTnyWwxS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Abp6iKPP_sendMessage);
}

void Heavy_Simple_OSC::cBinop_i3T4hqzB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KQlp34Qe, HV_BINOP_MULTIPLY, 1, m, &cBinop_KQlp34Qe_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ZGMplFY2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_i3T4hqzB_sendMessage);
}

void Heavy_Simple_OSC::cMsg_KYKE5EYX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ZGMplFY2_sendMessage);
}

void Heavy_Simple_OSC::cVar_R6dqWvhe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_VuMsrcA5_sendMessage);
}

void Heavy_Simple_OSC::cVar_HAfEQg8P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ksi0TZGi_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cUnop_jkAWBrIz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_aZqkYtcX_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cUnop_TEnCZc49_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_orQA3PTi_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_8ADOEemw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cKPxUPYc_sendMessage);
}

void Heavy_Simple_OSC::cSystem_cKPxUPYc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jEicegz4, HV_BINOP_DIVIDE, 1, m, &cBinop_jEicegz4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_irIbye03_sendMessage);
}

void Heavy_Simple_OSC::cUnop_YmbwKKz0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_C4SUUbdD_sendMessage);
}

void Heavy_Simple_OSC::cBinop_C4SUUbdD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jEicegz4, HV_BINOP_DIVIDE, 0, m, &cBinop_jEicegz4_sendMessage);
}

void Heavy_Simple_OSC::cBinop_zyulCZP2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vnL73Lmr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WrVtCBd8_sendMessage);
}

void Heavy_Simple_OSC::cBinop_jEicegz4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zyulCZP2, HV_BINOP_MULTIPLY, 1, m, &cBinop_zyulCZP2_sendMessage);
}

void Heavy_Simple_OSC::cMsg_XTTwoBk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_YmbwKKz0_sendMessage);
}

void Heavy_Simple_OSC::cCast_irIbye03_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XTTwoBk4_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_ylQFSHYR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HAfEQg8P, 1, m, &cVar_HAfEQg8P_sendMessage);
}

void Heavy_Simple_OSC::cBinop_GanTOILO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YyAoYgTN, HV_BINOP_MULTIPLY, 1, m, &cBinop_YyAoYgTN_sendMessage);
}

void Heavy_Simple_OSC::cMsg_CH7aQuSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GanTOILO_sendMessage);
}

void Heavy_Simple_OSC::cBinop_AzSrXSrq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_koB6qCM9_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_VuMsrcA5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_AzSrXSrq_sendMessage);
}

void Heavy_Simple_OSC::cBinop_g0EtWsUH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zyulCZP2, HV_BINOP_MULTIPLY, 0, m, &cBinop_zyulCZP2_sendMessage);
}

void Heavy_Simple_OSC::cBinop_0DG6rk5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_g0EtWsUH_sendMessage);
}

void Heavy_Simple_OSC::cBinop_NWxSBeQq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iFRPIAD1, HV_BINOP_MULTIPLY, 1, m, &cBinop_iFRPIAD1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_bEnZlfzy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_NWxSBeQq_sendMessage);
}

void Heavy_Simple_OSC::cMsg_vQFkBTuk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_bEnZlfzy_sendMessage);
}

void Heavy_Simple_OSC::cVar_NYD5Tt1S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LsdQjw11_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_0DG6rk5y_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FPfgLPoX_sendMessage);
}

void Heavy_Simple_OSC::cBinop_0c4OgTVH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vi4NvLOA, HV_BINOP_MULTIPLY, 1, m, &cBinop_vi4NvLOA_sendMessage);
}

void Heavy_Simple_OSC::cBinop_KQlp34Qe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mvSzT3rH_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_HoPOFgk0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_rTmjrMtV_sendMessage);
}

void Heavy_Simple_OSC::cBinop_YyAoYgTN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nZuk2nbE_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_iFRPIAD1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UnXpk3hI_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_rTmjrMtV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_BBRiJlDh_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_rRAD2XRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eODiAkxk_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_vi4NvLOA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W469hhh8_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_he8GwGPJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uWiRd3vN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uuCBpWWL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kpY0nmTq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BcyBwfww_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GxHG7mkX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FLtEsITu_sendMessage);
}

void Heavy_Simple_OSC::cBinop_yARal7qO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HoPOFgk0, HV_BINOP_MULTIPLY, 1, m, &cBinop_HoPOFgk0_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Ksi0TZGi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_he8GwGPJ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_koB6qCM9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_yARal7qO_sendMessage);
}

void Heavy_Simple_OSC::cSend_BBRiJlDh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vqW9nFnF_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_orQA3PTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KNmnjTra_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_aZqkYtcX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_iRbXNruw_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cCast_LsdQjw11_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_R6dqWvhe, 0, m, &cVar_R6dqWvhe_sendMessage);
}

void Heavy_Simple_OSC::cCast_FPfgLPoX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HAfEQg8P, 0, m, &cVar_HAfEQg8P_sendMessage);
}

void Heavy_Simple_OSC::cCast_WrVtCBd8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_jkAWBrIz_sendMessage);
}

void Heavy_Simple_OSC::cCast_vnL73Lmr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_TEnCZc49_sendMessage);
}

void Heavy_Simple_OSC::cCast_uuCBpWWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rRAD2XRm, HV_BINOP_MULTIPLY, 0, m, &cBinop_rRAD2XRm_sendMessage);
}

void Heavy_Simple_OSC::cCast_kpY0nmTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vi4NvLOA, HV_BINOP_MULTIPLY, 0, m, &cBinop_vi4NvLOA_sendMessage);
}

void Heavy_Simple_OSC::cCast_FLtEsITu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iFRPIAD1, HV_BINOP_MULTIPLY, 0, m, &cBinop_iFRPIAD1_sendMessage);
}

void Heavy_Simple_OSC::cCast_GxHG7mkX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YyAoYgTN, HV_BINOP_MULTIPLY, 0, m, &cBinop_YyAoYgTN_sendMessage);
}

void Heavy_Simple_OSC::cCast_BcyBwfww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KQlp34Qe, HV_BINOP_MULTIPLY, 0, m, &cBinop_KQlp34Qe_sendMessage);
}

void Heavy_Simple_OSC::cCast_uWiRd3vN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Simple_OSC::cCast_GawDe2vM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NYD5Tt1S, 0, m, &cVar_NYD5Tt1S_sendMessage);
}

void Heavy_Simple_OSC::cCast_5o8fXOpe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_R6dqWvhe, 1, m, &cVar_R6dqWvhe_sendMessage);
}

void Heavy_Simple_OSC::cMsg_W469hhh8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_lix26rKm, 0, m, NULL);
}

void Heavy_Simple_OSC::cVar_pT3QNNDM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vKsJKA7B_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_BBP5qm9p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Yk7kiyB1_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_ZZeKFh3n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y4ufv4b7_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_5ID8RKb2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wJY25jrG_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_ZmixOlin_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Tau8vPdr, 0, m, &cVar_Tau8vPdr_sendMessage);
}

void Heavy_Simple_OSC::cVar_Tau8vPdr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JoEPzwFW_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_72Lxq37S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_isIzhI8V, 0, m, &cVar_isIzhI8V_sendMessage);
}

void Heavy_Simple_OSC::cMsg_DmbGhClQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zio3wnJy_sendMessage);
}

void Heavy_Simple_OSC::cSystem_zio3wnJy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gWQI1JZG_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_7KJg7Hov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BIwUUTci, m);
}

void Heavy_Simple_OSC::cMsg_gWQI1JZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_7KJg7Hov_sendMessage);
}

void Heavy_Simple_OSC::cVar_6ft77wPK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 127.0f, 0, m, &cBinop_J9cYiiZm_sendMessage);
}

void Heavy_Simple_OSC::cVar_QVSg9Vd1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8h6yv4P2, 0, m, &cVar_8h6yv4P2_sendMessage);
}

void Heavy_Simple_OSC::cVar_XG0qb4u1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_17ygIKGr_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_pDnLTR0C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pT3QNNDM, 0, m, &cVar_pT3QNNDM_sendMessage);
}

void Heavy_Simple_OSC::cVar_K1FLPi3P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BBP5qm9p, 0, m, &cVar_BBP5qm9p_sendMessage);
}

void Heavy_Simple_OSC::cVar_isIzhI8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OCkUz74R_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_v2jJclJJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ZZeKFh3n, 0, m, &cVar_ZZeKFh3n_sendMessage);
}

void Heavy_Simple_OSC::cBinop_NHwJKGKN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pT3QNNDM, 0, m, &cVar_pT3QNNDM_sendMessage);
}

void Heavy_Simple_OSC::cBinop_46oQit7t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5ID8RKb2, 0, m, &cVar_5ID8RKb2_sendMessage);
}

void Heavy_Simple_OSC::cBinop_J9cYiiZm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_AaOVdxNF_sendMessage);
}

void Heavy_Simple_OSC::cBinop_y8jGYTkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XG0qb4u1, 0, m, &cVar_XG0qb4u1_sendMessage);
}

void Heavy_Simple_OSC::cMsg_17ygIKGr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "wet-gain");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_v3ARyak1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_9cf89EFf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 24000.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_K1FLPi3P, 0, m, &cVar_K1FLPi3P_sendMessage);
}

void Heavy_Simple_OSC::cMsg_1qrTbuoK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3000.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_72Lxq37S, 0, m, &cVar_72Lxq37S_sendMessage);
}

void Heavy_Simple_OSC::cMsg_8qSfNDmc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_ZmixOlin, 0, m, &cVar_ZmixOlin_sendMessage);
}

void Heavy_Simple_OSC::cMsg_qdZw2Osg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 70.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_pDnLTR0C, 0, m, &cVar_pDnLTR0C_sendMessage);
}

void Heavy_Simple_OSC::cMsg_JoEPzwFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "dry-gain");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_v3ARyak1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_iQFc2S9u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 50.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_oEasL5Ja, 0, m, &cVar_oEasL5Ja_sendMessage);
}

void Heavy_Simple_OSC::cMsg_56ZRPYf1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "lowcut");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_v3ARyak1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_Yk7kiyB1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "highcut");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_v3ARyak1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_y4ufv4b7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "damp");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_v3ARyak1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_SpsCvwvX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_ADPLGdTq, 0, m, &cVar_ADPLGdTq_sendMessage);
}

void Heavy_Simple_OSC::cMsg_wJY25jrG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "predelay_ms");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_v3ARyak1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_vKsJKA7B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "feedback");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_v3ARyak1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_3J5NbtG3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 60.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_v2jJclJJ, 0, m, &cVar_v2jJclJJ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_OCkUz74R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "crossfreq");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_v3ARyak1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_2JN0pZ6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_QVSg9Vd1, 0, m, &cVar_QVSg9Vd1_sendMessage);
}

void Heavy_Simple_OSC::cReceive_aaK7Eoxq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n1tkoY1f_sendMessage(_c, 0, m);
  cMsg_Ww3SqZ8O_sendMessage(_c, 0, m);
  cMsg_jBiHsz1Q_sendMessage(_c, 0, m);
  cMsg_Av35co2F_sendMessage(_c, 0, m);
  cMsg_DkWGpMRt_sendMessage(_c, 0, m);
  cMsg_toTiKfI3_sendMessage(_c, 0, m);
  cMsg_oQLHbe5R_sendMessage(_c, 0, m);
  cMsg_ZWTKdWi3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_p9oHtABw, 0, m, &cVar_p9oHtABw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XQx2E3uf, 0, m, &cVar_XQx2E3uf_sendMessage);
  cMsg_8ADOEemw_sendMessage(_c, 0, m);
  cMsg_kWm66dYO_sendMessage(_c, 0, m);
  cMsg_4YquwDBg_sendMessage(_c, 0, m);
  cMsg_JbGtmHc5_sendMessage(_c, 0, m);
  cMsg_piREEXfM_sendMessage(_c, 0, m);
  cMsg_8FUA5Xe7_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8gVF1C68, 0, m, &cVar_8gVF1C68_sendMessage);
  cMsg_FVAkFKnh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UapMPoOs, 0, m, &cVar_UapMPoOs_sendMessage);
  cMsg_GQTa17sO_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_epjLT3x7, 0, m, &cVar_epjLT3x7_sendMessage);
  cMsg_nlfuXDYX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YuZNJVbU, 0, m, &cVar_YuZNJVbU_sendMessage);
  cMsg_DmbGhClQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_NYD5Tt1S, 0, m, &cVar_NYD5Tt1S_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_B07GtfhF, 0, m, &cVar_B07GtfhF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_TO3oudhq, 0, m, &cVar_TO3oudhq_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_GRZbCZvT, 0, m, &cVar_GRZbCZvT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_PxEx7qk4, 0, m, &cVar_PxEx7qk4_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0oTQrFFl, 0, m, &cVar_0oTQrFFl_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_BZM39Jom, 0, m, &cVar_BZM39Jom_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_CfZQ1jW9, 0, m, &cVar_CfZQ1jW9_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_k8uKx4Do, 0, m, &cVar_k8uKx4Do_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5YLtxTFn, 0, m, &cVar_5YLtxTFn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_E1fn8LZF, 0, m, &cVar_E1fn8LZF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8jLe2JDL, 0, m, &cVar_8jLe2JDL_sendMessage);
  cMsg_UEW85Amf_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_6Sb85ZpO, 0, m, &cVar_6Sb85ZpO_sendMessage);
  cMsg_8qSfNDmc_sendMessage(_c, 0, m);
  cMsg_3J5NbtG3_sendMessage(_c, 0, m);
  cMsg_1qrTbuoK_sendMessage(_c, 0, m);
  cMsg_9cf89EFf_sendMessage(_c, 0, m);
  cMsg_2JN0pZ6s_sendMessage(_c, 0, m);
  cMsg_iQFc2S9u_sendMessage(_c, 0, m);
  cMsg_qdZw2Osg_sendMessage(_c, 0, m);
  cMsg_SpsCvwvX_sendMessage(_c, 0, m);
  cMsg_Uds1MRbL_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_dBjKk424, 0, m, &cVar_dBjKk424_sendMessage);
  cMsg_JB2JezBQ_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_MOSCfNb9, 0, m, &cTabhead_MOSCfNb9_sendMessage);
  cMsg_wy4RGlw4_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_nk5fKQwl, 0, m, &cVar_nk5fKQwl_sendMessage);
  cMsg_JZ3NtcjK_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_RK1XnSM0, 0, m, &cTabhead_RK1XnSM0_sendMessage);
  cMsg_6RnyyNSK_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_RnwccXgx, 0, m, &cVar_RnwccXgx_sendMessage);
  cMsg_wkItuzTo_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_tYXmCCTe, 0, m, &cTabhead_tYXmCCTe_sendMessage);
  cMsg_kLha7l8L_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FEYUtYor, 0, m, &cVar_FEYUtYor_sendMessage);
  cMsg_5Uboqmcb_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_x9o4pJvt, 0, m, &cTabhead_x9o4pJvt_sendMessage);
  cMsg_pYsjcnKJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_xiCwA0LD, 0, m, &cVar_xiCwA0LD_sendMessage);
  cMsg_8Vu9djT9_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_QqK6hYHG, 0, m, &cTabhead_QqK6hYHG_sendMessage);
  cMsg_lFk53U4d_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_IGbA7P7Z, 0, m, &cVar_IGbA7P7Z_sendMessage);
  cMsg_hqmxlBri_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_1TbZ56zJ, 0, m, &cTabhead_1TbZ56zJ_sendMessage);
  cMsg_cT99NwAT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fQuCmKY8, 0, m, &cVar_fQuCmKY8_sendMessage);
  cMsg_YtS1PwHX_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_pvQxq8h6, 0, m, &cTabhead_pvQxq8h6_sendMessage);
  cMsg_YudCaEzQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_q0jLN3Li, 0, m, &cVar_q0jLN3Li_sendMessage);
  cMsg_Id6xE7x6_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_dIAN6gNl, 0, m, &cTabhead_dIAN6gNl_sendMessage);
  cMsg_REUDX8UV_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_EEkLlmQd, 0, m, &cVar_EEkLlmQd_sendMessage);
  cMsg_K7DTBWnA_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_kmtRu0Ub, 0, m, &cTabhead_kmtRu0Ub_sendMessage);
  cMsg_hoP28gq2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_P3KGirJP, 0, m, &cVar_P3KGirJP_sendMessage);
  cMsg_syaYWKCY_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_mFlqjEBU, 0, m, &cTabhead_mFlqjEBU_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_skFXrjYZ, 0, m, &cVar_skFXrjYZ_sendMessage);
  cMsg_QI0tfG6e_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cReceive_TBhT7TI1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_p9oHtABw, 0, m, &cVar_p9oHtABw_sendMessage);
}

void Heavy_Simple_OSC::cReceive_Xw2KIgtN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_DRKC452Z_sendMessage);
  cMsg_WVEAZUSk_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cReceive_B8VHCqVX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zV5HFpAZ_sendMessage(_c, 0, m);
  cMsg_GPo35xHu_sendMessage(_c, 0, m);
  cMsg_zzJyIoC8_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_Dwd1z80e_sendMessage);
}

void Heavy_Simple_OSC::cReceive_H2cPiLhW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lh3R8dLh, HV_BINOP_MULTIPLY, 0, m, &cBinop_lh3R8dLh_sendMessage);
}

void Heavy_Simple_OSC::cReceive_r8ysJu0a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BZM39Jom, 0, m, &cVar_BZM39Jom_sendMessage);
}

void Heavy_Simple_OSC::cReceive_vgmTGzZc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y8DDF5yl, 0, m, &cVar_y8DDF5yl_sendMessage);
}

void Heavy_Simple_OSC::cReceive_4Jk88MkG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SLeohyot, m);
}

void Heavy_Simple_OSC::cReceive_xerl4fV7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6bEtRjxN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iyKAvG8D_sendMessage);
}

void Heavy_Simple_OSC::cReceive_YqVgIFI7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lV7qaoyx_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_aKDl9DSS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_KY3t4PWh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_NVJTxuzP_sendMessage);
}

void Heavy_Simple_OSC::cReceive_IdFojawY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2V8JLgRt, HV_BINOP_MULTIPLY, 0, m, &cBinop_2V8JLgRt_sendMessage);
}

void Heavy_Simple_OSC::cReceive_YJcJuuEq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_b0n3SFOz_sendMessage);
  cMsg_9REJW0QA_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cReceive_LauuFJcm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0oTQrFFl, 0, m, &cVar_0oTQrFFl_sendMessage);
}

void Heavy_Simple_OSC::cReceive_JfdBhlWd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XQx2E3uf, 0, m, &cVar_XQx2E3uf_sendMessage);
}

void Heavy_Simple_OSC::cReceive_ZvYzhgQD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PxEx7qk4, 0, m, &cVar_PxEx7qk4_sendMessage);
}

void Heavy_Simple_OSC::cReceive_vqW9nFnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ylQFSHYR_sendMessage);
  cMsg_HTnyWwxS_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cReceive_KNmnjTra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HoPOFgk0, HV_BINOP_MULTIPLY, 0, m, &cBinop_HoPOFgk0_sendMessage);
}

void Heavy_Simple_OSC::cReceive_iRbXNruw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vQFkBTuk_sendMessage(_c, 0, m);
  cMsg_CH7aQuSS_sendMessage(_c, 0, m);
  cMsg_KYKE5EYX_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_0c4OgTVH_sendMessage);
}

void Heavy_Simple_OSC::cReceive_GX3tE4cE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_y8jGYTkk_sendMessage);
}

void Heavy_Simple_OSC::cReceive_ZcOkaWFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Mb14oVwb, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_M11t22Ja, m);
}

void Heavy_Simple_OSC::cReceive_GEVtzi19_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 700.0f, 0, m, &cBinop_46oQit7t_sendMessage);
}

void Heavy_Simple_OSC::cReceive_wMY0TQAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 127.0f, 0, m, &cBinop_J9cYiiZm_sendMessage);
}

void Heavy_Simple_OSC::cReceive_9Wg9MfEm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_NHwJKGKN_sendMessage);
}




/*
 * Context Process Implementation
 */

int Heavy_Simple_OSC::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_line_f(&sLine_FtgFn97w, VOf(Bf0));
    __hv_line_f(&sLine_FLyjoGIr, VOf(Bf1));
    __hv_line_f(&sLine_EhUdLVFO, VOf(Bf2));
    __hv_line_f(&sLine_lix26rKm, VOf(Bf3));
    __hv_line_f(&sLine_6V0y3mVw, VOf(Bf4));
    __hv_biquad_f(&sBiquad_s_LyumCObU, VIf(ZERO), VIf(Bf0), VIf(Bf1), VIf(Bf2), VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_AhX1HHYl, VOf(Bf4));
    __hv_phasor_f(&sPhasor_bh9mGeDs, VIf(Bf4), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf3), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_BIwUUTci, VOf(Bf2));
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_div_f(VIf(Bf4), VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf5));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf6));
    __hv_lte_f(VIf(Bf3), VIf(Bf2), VOf(Bf7));
    __hv_and_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf0));
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_gte_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_tabwrite_f(&sTabwrite_jSRaB2R0, VIf(Bf2));
    __hv_varread_f(&sVarf_SLeohyot, VOf(Bf1));
    __hv_tabhead_f(&sTabhead_H3ZrOu5I, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf0), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_C8IKCQJI, VOf(Bf7));
    __hv_mul_f(VIf(Bf1), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_jQdAez40, VOf(Bf1));
    __hv_min_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf1), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf0));
    __hv_varread_f(&sVarf_WSsuG5lp, VOf(Bf1));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_vwd3ZzYl, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_9kWI82GW, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf3));
    __hv_sub_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf3), VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_RRuOK4Wp, VOf(Bf0));
    __hv_line_f(&sLine_eVIh8VCN, VOf(Bf3));
    __hv_line_f(&sLine_EARCrUps, VOf(Bf7));
    __hv_line_f(&sLine_p8rICfby, VOf(Bf4));
    __hv_line_f(&sLine_h9oFFBlW, VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_GsAKPzzW, VIf(Bf1), VIf(Bf0), VIf(Bf3), VIf(Bf7), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_cb9wJ458, VOf(Bf4));
    __hv_line_f(&sLine_DSg3PVBf, VOf(Bf7));
    __hv_line_f(&sLine_seZM77CZ, VOf(Bf3));
    __hv_line_f(&sLine_JGpbZh7Z, VOf(Bf0));
    __hv_line_f(&sLine_JG0LoJNn, VOf(Bf1));
    __hv_biquad_f(&sBiquad_s_lZxdP3pe, VIf(Bf5), VIf(Bf4), VIf(Bf7), VIf(Bf3), VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_tabread_f(&sTabread_h4Pg40he, VOf(Bf0));
    __hv_varread_f(&sVarf_bhOSN2Hf, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_GiQa4Ifp, VOf(Bf7));
    __hv_rpole_f(&sRPole_Zq8HpVpq, VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf7), VIf(Bf0), VOf(Bf7));
    __hv_line_f(&sLine_B4h7ZNna, VOf(Bf3));
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_lj6SxHyl, VOf(Bf7));
    __hv_tabread_f(&sTabread_LGV0iaVb, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf5));
    __hv_tabread_f(&sTabread_zVnfbG9O, VOf(Bf6));
    __hv_sub_f(VIf(Bf5), VIf(Bf6), VOf(Bf8));
    __hv_tabwrite_f(&sTabwrite_hdNBKFO9, VIf(Bf8));
    __hv_tabwrite_f(&sTabwrite_ELhT3A9C, VIf(Bf1));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_tabwrite_f(&sTabwrite_ULxPSvNG, VIf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_tabread_f(&sTabread_Jt21PN6Z, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf4));
    __hv_tabread_f(&sTabread_jhXBb0XU, VOf(Bf1));
    __hv_sub_f(VIf(Bf4), VIf(Bf1), VOf(Bf8));
    __hv_tabwrite_f(&sTabwrite_zpcjGJt8, VIf(Bf8));
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_KdsQKYlT, VIf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_tabread_f(&sTabread_gSHVY637, VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_VKXFTFym, VIf(Bf5));
    __hv_tabread_f(&sTabread_yBJrUUUD, VOf(Bf5));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf0), VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_tabread_f(&sTabread_mAvKkT9M, VOf(Bf0));
    __hv_varread_f(&sVarf_8ITqtsN8, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_wVGDKJnj, VOf(Bf6));
    __hv_rpole_f(&sRPole_yvGALiLj, VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf6), VIf(Bf0), VOf(Bf6));
    __hv_fma_f(VIf(Bf6), VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf0), VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf0));
    __hv_tabread_f(&sTabread_qFvvP5pf, VOf(Bf6));
    __hv_varread_f(&sVarf_zMNOitM2, VOf(Bf1));
    __hv_mul_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_LYiVvt4o, VOf(Bf8));
    __hv_rpole_f(&sRPole_yfk5Orgq, VIf(Bf1), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf8));
    __hv_fma_f(VIf(Bf8), VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf7), VOf(Bf6));
    __hv_tabread_f(&sTabread_6FRH3mLL, VOf(Bf8));
    __hv_varread_f(&sVarf_qIy6Qj3U, VOf(Bf1));
    __hv_mul_f(VIf(Bf8), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_YlKN4pbS, VOf(Bf9));
    __hv_rpole_f(&sRPole_qV8YGfWl, VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf9), VIf(Bf8), VOf(Bf9));
    __hv_fma_f(VIf(Bf9), VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf6), VIf(Bf7), VOf(Bf8));
    __hv_add_f(VIf(Bf0), VIf(Bf8), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_mEBF4H9c, VIf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_tabwrite_f(&sTabwrite_lK4PO21M, VIf(Bf8));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf8));
    __hv_add_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf8), VIf(Bf7), VOf(Bf6));
    __hv_tabwrite_f(&sTabwrite_hAcsQgoN, VIf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_tabwrite_f(&sTabwrite_eNxRpEDE, VIf(Bf7));
    __hv_line_f(&sLine_4p6cdlhP, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_tBCmODUp, VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf7), VIf(Bf4), VOf(Bf7));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf5));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf7));
    __hv_varread_f(&sVarf_Mb14oVwb, VOf(Bf5));
    __hv_mul_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf5), VIf(O0), VOf(O0));
    __hv_add_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_M11t22Ja, VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf4), VIf(O1), VOf(O1));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_Simple_OSC::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s)
  float **const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_Simple_OSC::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s), uninterleave
  float *const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
