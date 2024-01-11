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
  numBytes += sPhasor_init(&sPhasor_3UbglrGk, sampleRate);
  numBytes += sTabwrite_init(&sTabwrite_gJOxRaHk, &hTable_mtsEGrXy);
  numBytes += sTabhead_init(&sTabhead_hf45194G, &hTable_mtsEGrXy);
  numBytes += sTabread_init(&sTabread_cbnNnY2A, &hTable_mtsEGrXy, false);
  numBytes += sTabread_init(&sTabread_oawe0sKU, &hTable_mtsEGrXy, false);
  numBytes += sLine_init(&sLine_ximdfCsn);
  numBytes += sLine_init(&sLine_bOPyOqOi);
  numBytes += sLine_init(&sLine_xh6s3bgg);
  numBytes += sLine_init(&sLine_AFkVUVGX);
  numBytes += sLine_init(&sLine_TPnjeRBY);
  numBytes += sBiquad_init(&sBiquad_s_VwmDq9oE);
  numBytes += sLine_init(&sLine_cVolwABw);
  numBytes += sLine_init(&sLine_Nhh5ktkA);
  numBytes += sLine_init(&sLine_s2RdfzU1);
  numBytes += sLine_init(&sLine_c1ElMQrr);
  numBytes += sLine_init(&sLine_6AYTH2jr);
  numBytes += sBiquad_init(&sBiquad_s_uqelgQkJ);
  numBytes += sTabread_init(&sTabread_PtQlgqSc, &hTable_4ervBnrt, true);
  numBytes += sRPole_init(&sRPole_WEcG9Dbn);
  numBytes += sLine_init(&sLine_67rzUGFA);
  numBytes += sLine_init(&sLine_kJUGgjqH);
  numBytes += sTabread_init(&sTabread_Z9wXY6TU, &hTable_85I1a2Sp, true);
  numBytes += sTabwrite_init(&sTabwrite_fo0dfklk, &hTable_7KR7mUKQ);
  numBytes += sTabwrite_init(&sTabwrite_3k0Anbcp, &hTable_85I1a2Sp);
  numBytes += sTabread_init(&sTabread_ybvW8YS5, &hTable_7KR7mUKQ, true);
  numBytes += sTabread_init(&sTabread_LBWiIsxo, &hTable_CcxOIKbr, true);
  numBytes += sTabread_init(&sTabread_V3LPrPel, &hTable_W0LQrZM7, true);
  numBytes += sTabread_init(&sTabread_O6LeiQYq, &hTable_RO97xsqN, true);
  numBytes += sTabwrite_init(&sTabwrite_PhdFRxQK, &hTable_yFl2IOtK);
  numBytes += sTabwrite_init(&sTabwrite_Jdy5LpP0, &hTable_RO97xsqN);
  numBytes += sTabwrite_init(&sTabwrite_6IvwHegS, &hTable_W0LQrZM7);
  numBytes += sTabwrite_init(&sTabwrite_V8TfAcc1, &hTable_CcxOIKbr);
  numBytes += sTabread_init(&sTabread_OiYPPgVQ, &hTable_yFl2IOtK, true);
  numBytes += sTabread_init(&sTabread_clKMcG1X, &hTable_c4eEzUJ4, true);
  numBytes += sRPole_init(&sRPole_QKG0esPk);
  numBytes += sTabread_init(&sTabread_GUgdDAHZ, &hTable_xhzsqxv8, true);
  numBytes += sRPole_init(&sRPole_yNJBHYOy);
  numBytes += sTabread_init(&sTabread_6nqE3d7Z, &hTable_8k7IbRg6, true);
  numBytes += sRPole_init(&sRPole_RnYCgH3N);
  numBytes += sTabwrite_init(&sTabwrite_zvjQy8mE, &hTable_c4eEzUJ4);
  numBytes += sTabwrite_init(&sTabwrite_YjskzF40, &hTable_xhzsqxv8);
  numBytes += sTabwrite_init(&sTabwrite_K5BFI8Sf, &hTable_8k7IbRg6);
  numBytes += sTabwrite_init(&sTabwrite_s6I7gdUd, &hTable_4ervBnrt);
  numBytes += sLine_init(&sLine_frWm1yVt);
  numBytes += sLine_init(&sLine_dJnJF738);
  numBytes += cBinop_init(&cBinop_Tovu3K0K, 1.0f); // __pow
  numBytes += cVar_init_f(&cVar_tAG0IBBE, 0.0f);
  numBytes += cVar_init_f(&cVar_v7gMdnGa, 0.0f);
  numBytes += cVar_init_f(&cVar_UvlQQzUE, 0.0f);
  numBytes += cVar_init_f(&cVar_0FpwfvEi, 0.0f);
  numBytes += cVar_init_f(&cVar_A8Een5B3, 0.0f);
  numBytes += cVar_init_f(&cVar_kUrNi2Zn, 0.0f);
  numBytes += cVar_init_f(&cVar_s1leXmd3, 0.0f);
  numBytes += cVar_init_f(&cVar_QpumrGWW, 0.0f);
  numBytes += cVar_init_f(&cVar_FISsFIlL, 0.0f);
  numBytes += cVar_init_f(&cVar_YFRKIybG, 0.0f);
  numBytes += cVar_init_f(&cVar_wLPUGwmi, 0.0f);
  numBytes += cVar_init_f(&cVar_q9EULU79, 0.0f);
  numBytes += cVar_init_f(&cVar_teG5zUbX, 0.0f);
  numBytes += cVar_init_f(&cVar_i8G1a2eT, 0.0f);
  numBytes += cVar_init_f(&cVar_brzowTEo, 24000.0f);
  numBytes += cSlice_init(&cSlice_21NtdgOz, 1, -1);
  numBytes += cBinop_init(&cBinop_z4kBvAoy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_vmxzlSeG, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_ScUUe56h, 0.0f);
  numBytes += cVar_init_f(&cVar_23dGIjfy, 0.0f);
  numBytes += cVar_init_f(&cVar_Ijt7IaaD, 0.0f);
  numBytes += cBinop_init(&cBinop_Jch8v8EG, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_KdY6r6sr, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ButBcLl6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JEZ5lYT9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_48lZtF12, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZE6DKUKa, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_ZCNqKPg5, 0.0f);
  numBytes += cDelay_init(this, &cDelay_pf7ShhAr, 0.0f);
  numBytes += hTable_init(&hTable_c4eEzUJ4, 256);
  numBytes += cBinop_init(&cBinop_t10ItpVU, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_WDfLwx60, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_XBMuQmyI, 22050.0f);
  numBytes += sVarf_init(&sVarf_c105d2MA, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_3n70rpFZ, 0.0f);
  numBytes += cDelay_init(this, &cDelay_dRfWfa4Q, 58.6435f);
  numBytes += cTabhead_init(&cTabhead_G0BIpOXK, &hTable_4ervBnrt);
  numBytes += cVar_init_s(&cVar_8aEa2lMo, "del-1003-del1");
  numBytes += cBinop_init(&cBinop_jZ3GQbWB, 58.6435f); // __mul
  numBytes += cBinop_init(&cBinop_PiHXaOHZ, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_IKN2yk3i, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_f9wWhYJm, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_4pqOFV92, 86.1244f);
  numBytes += cDelay_init(this, &cDelay_zU3CUK1e, 0.0f);
  numBytes += cTabhead_init(&cTabhead_ndk0w9zl, &hTable_8k7IbRg6);
  numBytes += cVar_init_s(&cVar_CO19koIT, "del-1003-del4");
  numBytes += cBinop_init(&cBinop_IL5SZZSx, 86.1244f); // __mul
  numBytes += cBinop_init(&cBinop_1NzYiAjE, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_ZUHJjmUL, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_55hTvEFz, 0.0f); // __max
  numBytes += cVar_init_f(&cVar_WBwIQGaI, 0.0f);
  numBytes += cDelay_init(this, &cDelay_QGg7C5kk, 0.0f);
  numBytes += cDelay_init(this, &cDelay_kRzNmjaN, 0.0f);
  numBytes += hTable_init(&hTable_xhzsqxv8, 256);
  numBytes += cVar_init_f(&cVar_7WV7JuE4, 0.0f);
  numBytes += cDelay_init(this, &cDelay_82owZytz, 0.0f);
  numBytes += cDelay_init(this, &cDelay_nPya1Zbu, 0.0f);
  numBytes += hTable_init(&hTable_7KR7mUKQ, 256);
  numBytes += cDelay_init(this, &cDelay_GNW5K42K, 0.0f);
  numBytes += cDelay_init(this, &cDelay_tLYwYzuP, 0.0f);
  numBytes += hTable_init(&hTable_85I1a2Sp, 256);
  numBytes += cDelay_init(this, &cDelay_SoqMnkjs, 0.0f);
  numBytes += cDelay_init(this, &cDelay_FWB604e1, 25.796f);
  numBytes += cTabhead_init(&cTabhead_Qv3nZexf, &hTable_CcxOIKbr);
  numBytes += cVar_init_s(&cVar_4ZzxNIao, "del-1003-ref3");
  numBytes += cBinop_init(&cBinop_sDDBanNH, 25.796f); // __mul
  numBytes += cBinop_init(&cBinop_yDHeY8CU, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_agVbARoI, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_LMR739CO, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_QoMM6tLX, 0.0f);
  numBytes += cDelay_init(this, &cDelay_gsqevfk6, 16.364f);
  numBytes += cTabhead_init(&cTabhead_i4LXdtzU, &hTable_RO97xsqN);
  numBytes += cVar_init_s(&cVar_uga0ojk6, "del-1003-ref5");
  numBytes += cBinop_init(&cBinop_Bs8iCsZj, 16.364f); // __mul
  numBytes += cBinop_init(&cBinop_EzyL4piX, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_gppfOnFS, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_GZgWSbML, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_ueZ8hjam, 0.0f);
  numBytes += cDelay_init(this, &cDelay_FVq0cHgt, 0.0f);
  numBytes += hTable_init(&hTable_yFl2IOtK, 256);
  numBytes += cDelay_init(this, &cDelay_CzTFRbDU, 0.0f);
  numBytes += cDelay_init(this, &cDelay_HZAqu8Ul, 0.0f);
  numBytes += hTable_init(&hTable_RO97xsqN, 256);
  numBytes += cDelay_init(this, &cDelay_mgKUNNvu, 0.0f);
  numBytes += cDelay_init(this, &cDelay_7EdI9O7T, 43.5337f);
  numBytes += cTabhead_init(&cTabhead_EGTKdSEC, &hTable_7KR7mUKQ);
  numBytes += cVar_init_s(&cVar_oVb07qDv, "del-1003-ref2");
  numBytes += cBinop_init(&cBinop_cV26Yu4R, 43.5337f); // __mul
  numBytes += cBinop_init(&cBinop_7swKlITw, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_rXZFvRwF, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_xP1UUUw1, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_NMev6sme, 0.0f);
  numBytes += cDelay_init(this, &cDelay_CYcobl01, 0.0f);
  numBytes += hTable_init(&hTable_W0LQrZM7, 256);
  numBytes += cDelay_init(this, &cDelay_xmNWdM9S, 0.0f);
  numBytes += cDelay_init(this, &cDelay_0mn3xhAf, 19.392f);
  numBytes += cTabhead_init(&cTabhead_pUQtyXyC, &hTable_W0LQrZM7);
  numBytes += cVar_init_s(&cVar_3Bib75vr, "del-1003-ref4");
  numBytes += cBinop_init(&cBinop_iIJ68HCL, 19.392f); // __mul
  numBytes += cBinop_init(&cBinop_6z1e1p1v, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_l3a96YU5, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_GvLTgYTd, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_fC1fJ4TM, 0.0f);
  numBytes += cDelay_init(this, &cDelay_cJWoSs40, 0.0f);
  numBytes += hTable_init(&hTable_CcxOIKbr, 256);
  numBytes += cDelay_init(this, &cDelay_tyf1ZTY7, 0.0f);
  numBytes += cDelay_init(this, &cDelay_p9dqELjh, 13.645f);
  numBytes += cTabhead_init(&cTabhead_pxb3aKdC, &hTable_yFl2IOtK);
  numBytes += cVar_init_s(&cVar_AOZ7W5JW, "del-1003-ref6");
  numBytes += cBinop_init(&cBinop_zhgSH85F, 13.645f); // __mul
  numBytes += cBinop_init(&cBinop_wzSu6fol, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_nAyMaQtI, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_oo2CXQxA, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_8mPiUkM6, 75.2546f);
  numBytes += cDelay_init(this, &cDelay_LNvVnKns, 0.0f);
  numBytes += cTabhead_init(&cTabhead_ySUZDvWF, &hTable_85I1a2Sp);
  numBytes += cVar_init_s(&cVar_VtODd3Mt, "del-1003-ref1");
  numBytes += cBinop_init(&cBinop_TDuZENmC, 75.2546f); // __mul
  numBytes += cBinop_init(&cBinop_ch9D8fPt, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_BwBAlmoW, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Mmiv8o4E, 0.0f); // __max
  numBytes += sVarf_init(&sVarf_eDC0fVso, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7hGXoks5, 22050.0f);
  numBytes += cBinop_init(&cBinop_2MorjTx5, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_ZT5GTPzC, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_lFZ1Y4qq, 80.0f);
  numBytes += cIf_init(&cIf_IQ1K1GfF, false);
  numBytes += cDelay_init(this, &cDelay_Vwhof8BK, 0.0f);
  numBytes += cDelay_init(this, &cDelay_ybcQuAtv, 69.4325f);
  numBytes += cTabhead_init(&cTabhead_0M64l0Gh, &hTable_c4eEzUJ4);
  numBytes += cVar_init_s(&cVar_TtMEGLm8, "del-1003-del2");
  numBytes += cBinop_init(&cBinop_UAouUH8d, 69.4325f); // __mul
  numBytes += cBinop_init(&cBinop_7bxetEsU, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_8cvU7gH3, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_kOZTgyly, 0.0f); // __max
  numBytes += cDelay_init(this, &cDelay_dR8vtTDI, 0.0f);
  numBytes += cDelay_init(this, &cDelay_WtomsTUw, 0.0f);
  numBytes += hTable_init(&hTable_8k7IbRg6, 256);
  numBytes += cDelay_init(this, &cDelay_g8Gc8wfi, 0.0f);
  numBytes += cDelay_init(this, &cDelay_tB5u7Nme, 0.0f);
  numBytes += hTable_init(&hTable_4ervBnrt, 256);
  numBytes += cIf_init(&cIf_sUSuTsvw, false);
  numBytes += cBinop_init(&cBinop_cjCFXVAz, 0.0f); // __pow
  numBytes += cVar_init_f(&cVar_JHtfM96w, 0.0f);
  numBytes += cBinop_init(&cBinop_ZAxJfDZo, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_o0zDoBJ9, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5qZ8VvZR, 22050.0f);
  numBytes += sVarf_init(&sVarf_k8tn3zqK, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Oqh0GlJ1, 0.0f);
  numBytes += cVar_init_f(&cVar_8cPBoDHm, 80.0f);
  numBytes += cBinop_init(&cBinop_QhoTeVFq, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_m3Hjlh6x, 22050.0f);
  numBytes += sVarf_init(&sVarf_8yY53ufI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TtC5BsR1, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_dtO0LWkW, 0.0f);
  numBytes += cDelay_init(this, &cDelay_lWAdKa0h, 74.5234f);
  numBytes += cTabhead_init(&cTabhead_NE3H1yLp, &hTable_xhzsqxv8);
  numBytes += cVar_init_s(&cVar_W84iPXbj, "del-1003-del3");
  numBytes += cBinop_init(&cBinop_KhWuJiWz, 74.5234f); // __mul
  numBytes += cBinop_init(&cBinop_wTgPd93k, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_nKE2XDNH, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_PnOgdPHC, 0.0f); // __max
  numBytes += cPack_init(&cPack_e58mGv7O, 2, 0.0f, 50.0f);
  numBytes += cPack_init(&cPack_z9rkRtZV, 2, 0.0f, 50.0f);
  numBytes += cPack_init(&cPack_ZHaYA2Pt, 2, 0.0f, 30.0f);
  numBytes += cVar_init_f(&cVar_PnzIK3Vh, 3000.0f);
  numBytes += cSlice_init(&cSlice_vK7EHZfi, 1, -1);
  numBytes += cVar_init_f(&cVar_0vIarOiu, 0.0f);
  numBytes += cSlice_init(&cSlice_04ljyhD8, 1, -1);
  numBytes += cVar_init_f(&cVar_DfLBRuqL, 90.0f);
  numBytes += cSlice_init(&cSlice_18z3q9MT, 1, -1);
  numBytes += cVar_init_s(&cVar_ftMlP82l, "del-1003-predelay");
  numBytes += sVarf_init(&sVarf_OXlVbtbQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_I3FPghgQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jWrQS0Ni, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_hqXHY4BI, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mI9C1uh3, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_7vyFm8jN, 0.0f);
  numBytes += cVar_init_f(&cVar_SyS7fg5X, 0.0f);
  numBytes += cVar_init_f(&cVar_YjwzHzqH, 0.0f);
  numBytes += cBinop_init(&cBinop_SnyiZ520, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_5zh7ZkAQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_eyXtf3Xo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZngYq1Sd, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lJak4BQ0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_uOtIDtOv, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_gCKwDiqz, 80.0f);
  numBytes += cSlice_init(&cSlice_AbjSKJYj, 1, -1);
  numBytes += cVar_init_f(&cVar_TDMRWSfy, 60.0f);
  numBytes += cSlice_init(&cSlice_z686CO7V, 1, -1);
  numBytes += cVar_init_f(&cVar_IqHMTtt0, 5.0f);
  numBytes += cSlice_init(&cSlice_w9S7Hnu8, 1, -1);
  numBytes += cVar_init_f(&cVar_WS8t6Yxf, 20.0f);
  numBytes += cSlice_init(&cSlice_SQZLsJxL, 1, -1);
  numBytes += sVarf_init(&sVarf_CzLQyl6J, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_moxLieAH, false);
  numBytes += cBinop_init(&cBinop_5BcPE5IP, 0.0f); // __pow
  numBytes += cDelay_init(this, &cDelay_xuDugMBa, 0.0f);
  numBytes += cDelay_init(this, &cDelay_3n9DfMMv, 0.0f);
  numBytes += hTable_init(&hTable_mtsEGrXy, 256);
  numBytes += cPack_init(&cPack_z5EiD2v3, 2, 0.0f, 30.0f);
  numBytes += cVar_init_f(&cVar_Ffn0pfyW, 0.0f);
  numBytes += cVar_init_f(&cVar_eJ2UQe0V, 0.0f);
  numBytes += sVarf_init(&sVarf_QunF1xzH, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_U9yv6x1O, 0.0f);
  numBytes += sVarf_init(&sVarf_ptMPAl5T, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_IW9RoBuM, 1.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Simple_OSC::~Heavy_Simple_OSC() {
  hTable_free(&hTable_c4eEzUJ4);
  hTable_free(&hTable_xhzsqxv8);
  hTable_free(&hTable_7KR7mUKQ);
  hTable_free(&hTable_85I1a2Sp);
  hTable_free(&hTable_yFl2IOtK);
  hTable_free(&hTable_RO97xsqN);
  hTable_free(&hTable_W0LQrZM7);
  hTable_free(&hTable_CcxOIKbr);
  hTable_free(&hTable_8k7IbRg6);
  hTable_free(&hTable_4ervBnrt);
  cPack_free(&cPack_e58mGv7O);
  cPack_free(&cPack_z9rkRtZV);
  cPack_free(&cPack_ZHaYA2Pt);
  hTable_free(&hTable_mtsEGrXy);
  cPack_free(&cPack_z5EiD2v3);
}

HvTable *Heavy_Simple_OSC::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0xD05EDCD1: return &hTable_4ervBnrt; // del-1003-del1
    case 0xFB3A9CC8: return &hTable_c4eEzUJ4; // del-1003-del2
    case 0xDD1A3060: return &hTable_xhzsqxv8; // del-1003-del3
    case 0x66C1DD5E: return &hTable_8k7IbRg6; // del-1003-del4
    case 0x4C9AA77E: return &hTable_mtsEGrXy; // del-1003-predelay
    case 0x77CB3B56: return &hTable_85I1a2Sp; // del-1003-ref1
    case 0x92F168C1: return &hTable_7KR7mUKQ; // del-1003-ref2
    case 0xE3EFDD2C: return &hTable_CcxOIKbr; // del-1003-ref3
    case 0x1BDA9F7D: return &hTable_W0LQrZM7; // del-1003-ref4
    case 0xE42D6363: return &hTable_RO97xsqN; // del-1003-ref5
    case 0x46F8163: return &hTable_yFl2IOtK; // del-1003-ref6
    default: return nullptr;
  }
}

void Heavy_Simple_OSC::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x94DB5AB5: { // Pitch
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qi4iGQuv_sendMessage);
      break;
    }
    case 0xB3A0D463: { // RevFeedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6UFQH0NZ_sendMessage);
      break;
    }
    case 0x3B2EB6DE: { // RevGain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5Q5tuoK1_sendMessage);
      break;
    }
    case 0x30ADF4D0: { // RevPredelay
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FdEBmVOW_sendMessage);
      break;
    }
    case 0x528845DB: { // Volume
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_BFdOhmj1_sendMessage);
      break;
    }
    case 0x3532BDCC: { // 1003-crossfreq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_JlmTblPB_sendMessage);
      break;
    }
    case 0x61A07250: { // 1003-damp
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_oJMIdmZL_sendMessage);
      break;
    }
    case 0x39320B22: { // 1003-dry-gain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3868GZ3a_sendMessage);
      break;
    }
    case 0x25DB1400: { // 1003-feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Wb2oKNSD_sendMessage);
      break;
    }
    case 0xAAB29B40: { // 1003-highcut
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zm7vvp0k_sendMessage);
      break;
    }
    case 0xE68264A5: { // 1003-lowcut
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ysiWZTk1_sendMessage);
      break;
    }
    case 0xE140B550: { // 1003-predelay_ms
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_x1iXSGdK_sendMessage);
      break;
    }
    case 0xFD8CC5B0: { // 1003-wet-gain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_klHIoybS_sendMessage);
      break;
    }
    case 0xF763418F: { // 1157-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ak5HVysJ_sendMessage);
      break;
    }
    case 0x1AD52B1A: { // 1157-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XJObAyhw_sendMessage);
      break;
    }
    case 0xA662AE75: { // 1157-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qN8uNhoJ_sendMessage);
      break;
    }
    case 0x2C43DCAA: { // 1198-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_81T6ZpZ3_sendMessage);
      break;
    }
    case 0xE0617EE4: { // 1198-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bvH9unRn_sendMessage);
      break;
    }
    case 0x6D98BE77: { // 1198-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_JeiqLHNh_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OAy9DkIw_sendMessage);
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


void Heavy_Simple_OSC::cBinop_I8DWEYHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QunF1xzH, m);
}

void Heavy_Simple_OSC::cBinop_rZF2JPD1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_SXKgfTJh_sendMessage);
}

void Heavy_Simple_OSC::cBinop_SXKgfTJh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Tovu3K0K, HV_BINOP_POW, 1, m, &cBinop_Tovu3K0K_sendMessage);
  cMsg_Yg1U1ohz_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_Yg1U1ohz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Tovu3K0K, HV_BINOP_POW, 0, m, &cBinop_Tovu3K0K_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Tovu3K0K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_I8DWEYHN_sendMessage);
}

void Heavy_Simple_OSC::cVar_tAG0IBBE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_harqdADj_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_v7gMdnGa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tAG0IBBE, 0, m, &cVar_tAG0IBBE_sendMessage);
}

void Heavy_Simple_OSC::cVar_UvlQQzUE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U9yv6x1O, 0, m, &cVar_U9yv6x1O_sendMessage);
}

void Heavy_Simple_OSC::cVar_0FpwfvEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_omY9jnBt_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_A8Een5B3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kUrNi2Zn, 0, m, &cVar_kUrNi2Zn_sendMessage);
}

void Heavy_Simple_OSC::cVar_kUrNi2Zn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TSXZmKCS_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_s1leXmd3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NnplWxxS_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_QpumrGWW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s1leXmd3, 0, m, &cVar_s1leXmd3_sendMessage);
}

void Heavy_Simple_OSC::cVar_FISsFIlL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0FpwfvEi, 0, m, &cVar_0FpwfvEi_sendMessage);
}

void Heavy_Simple_OSC::cVar_YFRKIybG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_i8G1a2eT, 0, m, &cVar_i8G1a2eT_sendMessage);
}

void Heavy_Simple_OSC::cVar_wLPUGwmi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eJ2UQe0V, 0, m, &cVar_eJ2UQe0V_sendMessage);
}

void Heavy_Simple_OSC::cVar_q9EULU79_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TVqPCFq4_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_teG5zUbX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 127.0f, 0, m, &cBinop_FZ4VxKQl_sendMessage);
}

void Heavy_Simple_OSC::cVar_i8G1a2eT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XpeOlGgQ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_brzowTEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_sv4hxbc3_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_VRfCekFo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xF88DCB01: { // "highcut"
      cSlice_onMessage(_c, &Context(_c)->cSlice_21NtdgOz, 0, m, &cSlice_21NtdgOz_sendMessage);
      break;
    }
    default: {
      cSwitchcase_V0z5ygjq_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_21NtdgOz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_sv4hxbc3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_sv4hxbc3_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_sv4hxbc3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zm7vvp0k_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cUnop_lMilj39S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_gYm3QNxF_sendMessage);
}

void Heavy_Simple_OSC::cMsg_93X2gKqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cU0baC5Q_sendMessage);
}

void Heavy_Simple_OSC::cSystem_cU0baC5Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vmxzlSeG, HV_BINOP_DIVIDE, 1, m, &cBinop_vmxzlSeG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4adVX0Xu_sendMessage);
}

void Heavy_Simple_OSC::cBinop_z4kBvAoy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YPipanZA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1xZ7aGL7_sendMessage);
}

void Heavy_Simple_OSC::cBinop_gYm3QNxF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vmxzlSeG, HV_BINOP_DIVIDE, 0, m, &cBinop_vmxzlSeG_sendMessage);
}

void Heavy_Simple_OSC::cBinop_vmxzlSeG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z4kBvAoy, HV_BINOP_MULTIPLY, 1, m, &cBinop_z4kBvAoy_sendMessage);
}

void Heavy_Simple_OSC::cMsg_P4jF5y2L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_lMilj39S_sendMessage);
}

void Heavy_Simple_OSC::cCast_4adVX0Xu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_P4jF5y2L_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_ScUUe56h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_kuVLAtts_sendMessage);
}

void Heavy_Simple_OSC::cBinop_QtJoQYLf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z4kBvAoy, HV_BINOP_MULTIPLY, 0, m, &cBinop_z4kBvAoy_sendMessage);
}

void Heavy_Simple_OSC::cBinop_eDIjshOS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_QtJoQYLf_sendMessage);
}

void Heavy_Simple_OSC::cBinop_vgTo1x8d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ButBcLl6, HV_BINOP_MULTIPLY, 1, m, &cBinop_ButBcLl6_sendMessage);
}

void Heavy_Simple_OSC::cBinop_uv8bWjLc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_vgTo1x8d_sendMessage);
}

void Heavy_Simple_OSC::cMsg_nucL0dac_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_uv8bWjLc_sendMessage);
}

void Heavy_Simple_OSC::cBinop_36wxCXd0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jch8v8EG, HV_BINOP_MULTIPLY, 1, m, &cBinop_Jch8v8EG_sendMessage);
}

void Heavy_Simple_OSC::cUnop_LxkdNCZz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_9jafpizZ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_23dGIjfy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AjHMPb9M_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_UrdAmnQy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PCx8Sehx_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_kuVLAtts_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_UrdAmnQy_sendMessage);
}

void Heavy_Simple_OSC::cBinop_4Yvc1OQJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JEZ5lYT9, HV_BINOP_MULTIPLY, 1, m, &cBinop_JEZ5lYT9_sendMessage);
}

void Heavy_Simple_OSC::cBinop_HCfeIA7c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4Yvc1OQJ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_YDghDgBb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_HCfeIA7c_sendMessage);
}

void Heavy_Simple_OSC::cUnop_4i5iHU9w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_mVDTwY48_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_Ijt7IaaD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5n5T4nQH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_eDIjshOS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aOJ1Rfye_sendMessage);
}

void Heavy_Simple_OSC::cBinop_G14PJwAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZE6DKUKa, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZE6DKUKa_sendMessage);
}

void Heavy_Simple_OSC::cMsg_7lRjJgU5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_G14PJwAi_sendMessage);
}

void Heavy_Simple_OSC::cBinop_aqC5dg5q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_48lZtF12, HV_BINOP_MULTIPLY, 1, m, &cBinop_48lZtF12_sendMessage);
}

void Heavy_Simple_OSC::cMsg_lqfJ4Fwu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_aqC5dg5q_sendMessage);
}

void Heavy_Simple_OSC::cBinop_WIQstErM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_23dGIjfy, 1, m, &cVar_23dGIjfy_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Jch8v8EG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VZ3eaK4f_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_KdY6r6sr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_E781S1jL_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ButBcLl6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4xbbS84R_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_JEZ5lYT9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_buHKK8sP_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_48lZtF12_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uWCI9hVj_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_E781S1jL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Uv7NXPem_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_ZE6DKUKa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ITvd5ylh_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_at3CSqCu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KdY6r6sr, HV_BINOP_MULTIPLY, 1, m, &cBinop_KdY6r6sr_sendMessage);
}

void Heavy_Simple_OSC::cBinop_E31hpAH9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pP0oX8P7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xLQjRLC2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3yoFzh3N_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hesNuNx6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ur9uC08A_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DGWepQc5_sendMessage);
}

void Heavy_Simple_OSC::cMsg_AjHMPb9M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_E31hpAH9_sendMessage);
}

void Heavy_Simple_OSC::cMsg_PCx8Sehx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_at3CSqCu_sendMessage);
}

void Heavy_Simple_OSC::cSend_Uv7NXPem_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ak5HVysJ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_9jafpizZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XJObAyhw_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_mVDTwY48_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qN8uNhoJ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cCast_2dYCtl03_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ijt7IaaD, 0, m, &cVar_Ijt7IaaD_sendMessage);
}

void Heavy_Simple_OSC::cCast_y3GJfJOn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ScUUe56h, 1, m, &cVar_ScUUe56h_sendMessage);
}

void Heavy_Simple_OSC::cCast_1xZ7aGL7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_LxkdNCZz_sendMessage);
}

void Heavy_Simple_OSC::cCast_YPipanZA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_4i5iHU9w_sendMessage);
}

void Heavy_Simple_OSC::cCast_pP0oX8P7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Simple_OSC::cCast_3yoFzh3N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Jch8v8EG, HV_BINOP_MULTIPLY, 0, m, &cBinop_Jch8v8EG_sendMessage);
}

void Heavy_Simple_OSC::cCast_DGWepQc5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JEZ5lYT9, HV_BINOP_MULTIPLY, 0, m, &cBinop_JEZ5lYT9_sendMessage);
}

void Heavy_Simple_OSC::cCast_xLQjRLC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZE6DKUKa, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZE6DKUKa_sendMessage);
}

void Heavy_Simple_OSC::cCast_Ur9uC08A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_48lZtF12, HV_BINOP_MULTIPLY, 0, m, &cBinop_48lZtF12_sendMessage);
}

void Heavy_Simple_OSC::cCast_hesNuNx6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ButBcLl6, HV_BINOP_MULTIPLY, 0, m, &cBinop_ButBcLl6_sendMessage);
}

void Heavy_Simple_OSC::cCast_5n5T4nQH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ScUUe56h, 0, m, &cVar_ScUUe56h_sendMessage);
}

void Heavy_Simple_OSC::cCast_aOJ1Rfye_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_23dGIjfy, 0, m, &cVar_23dGIjfy_sendMessage);
}

void Heavy_Simple_OSC::cMsg_uWCI9hVj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_bOPyOqOi, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_buHKK8sP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ximdfCsn, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_4xbbS84R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_xh6s3bgg, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_ITvd5ylh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_TPnjeRBY, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_VZ3eaK4f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_AFkVUVGX, 0, m, NULL);
}

void Heavy_Simple_OSC::cDelay_ZCNqKPg5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ZCNqKPg5, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_pf7ShhAr, 0, m, &cDelay_pf7ShhAr_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZCNqKPg5, 0, m, &cDelay_ZCNqKPg5_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_zvjQy8mE, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_pf7ShhAr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_pf7ShhAr, m);
  cMsg_KhHpQAcN_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_gKfXhwO0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_qHpRdZio_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_BRJoY6ZH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eR5Qjd3P_sendMessage);
}

void Heavy_Simple_OSC::cSystem_eR5Qjd3P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_QdSQ5QEG_sendMessage);
}

void Heavy_Simple_OSC::cBinop_dNjMxoKB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6hs6QnDS_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_QdSQ5QEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 69.4325f, 0, m, &cBinop_dNjMxoKB_sendMessage);
}

void Heavy_Simple_OSC::cMsg_KhHpQAcN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_c4eEzUJ4, 0, m, &hTable_c4eEzUJ4_sendMessage);
}

void Heavy_Simple_OSC::cMsg_6hs6QnDS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_c4eEzUJ4, 0, m, &hTable_c4eEzUJ4_sendMessage);
}

void Heavy_Simple_OSC::cMsg_CDXOFQ5d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_pf7ShhAr, 2, m, &cDelay_pf7ShhAr_sendMessage);
}

void Heavy_Simple_OSC::cMsg_qHpRdZio_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_zvjQy8mE, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_c4eEzUJ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CDXOFQ5d_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZCNqKPg5, 2, m, &cDelay_ZCNqKPg5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MCmiXY1x_sendMessage);
}

void Heavy_Simple_OSC::cCast_MCmiXY1x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZCNqKPg5, 0, m, &cDelay_ZCNqKPg5_sendMessage);
}

void Heavy_Simple_OSC::cBinop_FBwjyubB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_682m06X5_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_c105d2MA, m);
}

void Heavy_Simple_OSC::cBinop_tYeDfy7W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_FBwjyubB_sendMessage);
}

void Heavy_Simple_OSC::cMsg_cJ6oCRSU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_IrgOz7Rb_sendMessage);
}

void Heavy_Simple_OSC::cSystem_IrgOz7Rb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pWqmK4GW_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_t10ItpVU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_tYeDfy7W_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ETdF9jys_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t10ItpVU, HV_BINOP_MULTIPLY, 1, m, &cBinop_t10ItpVU_sendMessage);
}

void Heavy_Simple_OSC::cMsg_pWqmK4GW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_ETdF9jys_sendMessage);
}

void Heavy_Simple_OSC::cVar_XBMuQmyI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t10ItpVU, HV_BINOP_MULTIPLY, 0, m, &cBinop_t10ItpVU_sendMessage);
}

void Heavy_Simple_OSC::cBinop_682m06X5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_WDfLwx60, m);
}

void Heavy_Simple_OSC::cDelay_3n70rpFZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_3n70rpFZ, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_PtQlgqSc, 0, m, &sTabread_PtQlgqSc_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3n70rpFZ, 0, m, &cDelay_3n70rpFZ_sendMessage);
}

void Heavy_Simple_OSC::cDelay_dRfWfa4Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_dRfWfa4Q, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3n70rpFZ, 0, m, &cDelay_3n70rpFZ_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_PtQlgqSc, 0, m, &sTabread_PtQlgqSc_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_G0BIpOXK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PiHXaOHZ, HV_BINOP_SUBTRACT, 0, m, &cBinop_PiHXaOHZ_sendMessage);
}

void Heavy_Simple_OSC::sTabread_PtQlgqSc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_IKN2yk3i, HV_BINOP_SUBTRACT, 0, m, &cBinop_IKN2yk3i_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_8aEa2lMo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f4pFO7x8_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_ikSTpX6b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lqYDu3kO_sendMessage);
}

void Heavy_Simple_OSC::cSystem_lqYDu3kO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Eosg4qgv_sendMessage);
}

void Heavy_Simple_OSC::cBinop_jZ3GQbWB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f9wWhYJm, HV_BINOP_MAX, 0, m, &cBinop_f9wWhYJm_sendMessage);
}

void Heavy_Simple_OSC::cBinop_6mWqh46Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_dRfWfa4Q, 2, m, &cDelay_dRfWfa4Q_sendMessage);
}

void Heavy_Simple_OSC::cBinop_PiHXaOHZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dqMk7Kb4_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_PtQlgqSc, 0, m, &sTabread_PtQlgqSc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jua9rYcc_sendMessage);
}

void Heavy_Simple_OSC::cBinop_IKN2yk3i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_6mWqh46Z_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Eosg4qgv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jZ3GQbWB, HV_BINOP_MULTIPLY, 0, m, &cBinop_jZ3GQbWB_sendMessage);
}

void Heavy_Simple_OSC::cBinop_f9wWhYJm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PiHXaOHZ, HV_BINOP_SUBTRACT, 1, m, &cBinop_PiHXaOHZ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_OqZsnrvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_f9wWhYJm, HV_BINOP_MAX, 1, m, &cBinop_f9wWhYJm_sendMessage);
}

void Heavy_Simple_OSC::cMsg_dqMk7Kb4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_dRfWfa4Q, 0, m, &cDelay_dRfWfa4Q_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3n70rpFZ, 0, m, &cDelay_3n70rpFZ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_f4pFO7x8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EpOuMApb_sendMessage);
}

void Heavy_Simple_OSC::cSystem_EpOuMApb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IKN2yk3i, HV_BINOP_SUBTRACT, 1, m, &cBinop_IKN2yk3i_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3n70rpFZ, 2, m, &cDelay_3n70rpFZ_sendMessage);
}

void Heavy_Simple_OSC::cCast_iN7edz9F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8aEa2lMo, 0, m, &cVar_8aEa2lMo_sendMessage);
  cMsg_ikSTpX6b_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_G0BIpOXK, 0, m, &cTabhead_G0BIpOXK_sendMessage);
}

void Heavy_Simple_OSC::cCast_jua9rYcc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_dRfWfa4Q, 0, m, &cDelay_dRfWfa4Q_sendMessage);
}

void Heavy_Simple_OSC::cBinop_4lBuQaJl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Oqh0GlJ1, 0, m, &cVar_Oqh0GlJ1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_GBQ03HO5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_4lBuQaJl_sendMessage);
}

void Heavy_Simple_OSC::cDelay_4pqOFV92_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_4pqOFV92, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_zU3CUK1e, 0, m, &cDelay_zU3CUK1e_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_6nqE3d7Z, 0, m, &sTabread_6nqE3d7Z_sendMessage);
}

void Heavy_Simple_OSC::cDelay_zU3CUK1e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_zU3CUK1e, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_6nqE3d7Z, 0, m, &sTabread_6nqE3d7Z_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_zU3CUK1e, 0, m, &cDelay_zU3CUK1e_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_ndk0w9zl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZUHJjmUL, HV_BINOP_SUBTRACT, 0, m, &cBinop_ZUHJjmUL_sendMessage);
}

void Heavy_Simple_OSC::sTabread_6nqE3d7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_1NzYiAjE, HV_BINOP_SUBTRACT, 0, m, &cBinop_1NzYiAjE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_CO19koIT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sgPdIe2H_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_Y83SsaIQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_21QcX2xy_sendMessage);
}

void Heavy_Simple_OSC::cSystem_21QcX2xy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_j7Tw6FcJ_sendMessage);
}

void Heavy_Simple_OSC::cBinop_gS2yoN7p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_4pqOFV92, 2, m, &cDelay_4pqOFV92_sendMessage);
}

void Heavy_Simple_OSC::cBinop_IL5SZZSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_55hTvEFz, HV_BINOP_MAX, 0, m, &cBinop_55hTvEFz_sendMessage);
}

void Heavy_Simple_OSC::cBinop_1NzYiAjE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_gS2yoN7p_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ZUHJjmUL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7pa4mqpr_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_6nqE3d7Z, 0, m, &sTabread_6nqE3d7Z_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9MVPMxYe_sendMessage);
}

void Heavy_Simple_OSC::cBinop_j7Tw6FcJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IL5SZZSx, HV_BINOP_MULTIPLY, 0, m, &cBinop_IL5SZZSx_sendMessage);
}

void Heavy_Simple_OSC::cBinop_55hTvEFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZUHJjmUL, HV_BINOP_SUBTRACT, 1, m, &cBinop_ZUHJjmUL_sendMessage);
}

void Heavy_Simple_OSC::cMsg_7pa4mqpr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_4pqOFV92, 0, m, &cDelay_4pqOFV92_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_zU3CUK1e, 0, m, &cDelay_zU3CUK1e_sendMessage);
}

void Heavy_Simple_OSC::cMsg_sgPdIe2H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sF2BgZmF_sendMessage);
}

void Heavy_Simple_OSC::cMsg_a24ZVaCp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_55hTvEFz, HV_BINOP_MAX, 1, m, &cBinop_55hTvEFz_sendMessage);
}

void Heavy_Simple_OSC::cSystem_sF2BgZmF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1NzYiAjE, HV_BINOP_SUBTRACT, 1, m, &cBinop_1NzYiAjE_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_zU3CUK1e, 2, m, &cDelay_zU3CUK1e_sendMessage);
}

void Heavy_Simple_OSC::cCast_9MVPMxYe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_4pqOFV92, 0, m, &cDelay_4pqOFV92_sendMessage);
}

void Heavy_Simple_OSC::cCast_m4KPgswP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CO19koIT, 0, m, &cVar_CO19koIT_sendMessage);
  cMsg_Y83SsaIQ_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_ndk0w9zl, 0, m, &cTabhead_ndk0w9zl_sendMessage);
}

void Heavy_Simple_OSC::cVar_WBwIQGaI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_GBQ03HO5_sendMessage);
}

void Heavy_Simple_OSC::cDelay_QGg7C5kk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_QGg7C5kk, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_kRzNmjaN, 0, m, &cDelay_kRzNmjaN_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QGg7C5kk, 0, m, &cDelay_QGg7C5kk_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_YjskzF40, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_kRzNmjaN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_kRzNmjaN, m);
  cMsg_wJbgQx6G_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_8TrVWFVy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_gbOCfDpm_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_76U5jyCg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aGgCWjRO_sendMessage);
}

void Heavy_Simple_OSC::cSystem_aGgCWjRO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_4fgMLtPR_sendMessage);
}

void Heavy_Simple_OSC::cBinop_b1G5dlPQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zRIrb6Jb_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_4fgMLtPR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 74.5234f, 0, m, &cBinop_b1G5dlPQ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_gbOCfDpm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_YjskzF40, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_QWkBPRxt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_kRzNmjaN, 2, m, &cDelay_kRzNmjaN_sendMessage);
}

void Heavy_Simple_OSC::cMsg_wJbgQx6G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_xhzsqxv8, 0, m, &hTable_xhzsqxv8_sendMessage);
}

void Heavy_Simple_OSC::cMsg_zRIrb6Jb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_xhzsqxv8, 0, m, &hTable_xhzsqxv8_sendMessage);
}

void Heavy_Simple_OSC::hTable_xhzsqxv8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QWkBPRxt_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QGg7C5kk, 2, m, &cDelay_QGg7C5kk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BKwrhOQA_sendMessage);
}

void Heavy_Simple_OSC::cCast_BKwrhOQA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_QGg7C5kk, 0, m, &cDelay_QGg7C5kk_sendMessage);
}

void Heavy_Simple_OSC::cVar_7WV7JuE4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_UVJA8oc9_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_IQ1K1GfF, 0, m, &cIf_IQ1K1GfF_sendMessage);
}

void Heavy_Simple_OSC::cDelay_82owZytz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_82owZytz, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_nPya1Zbu, 0, m, &cDelay_nPya1Zbu_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_82owZytz, 0, m, &cDelay_82owZytz_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_fo0dfklk, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_nPya1Zbu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_nPya1Zbu, m);
  cMsg_Q8OVosbq_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_HnmFhQPo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_cIcIPsRf_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_jGcuu3M4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_s1cnVc8o_sendMessage);
}

void Heavy_Simple_OSC::cSystem_s1cnVc8o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_MY0V3qlL_sendMessage);
}

void Heavy_Simple_OSC::cBinop_RygbZHBh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5vkjnlPG_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_MY0V3qlL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 43.5337f, 0, m, &cBinop_RygbZHBh_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Q8OVosbq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_7KR7mUKQ, 0, m, &hTable_7KR7mUKQ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_5vkjnlPG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_7KR7mUKQ, 0, m, &hTable_7KR7mUKQ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_cIcIPsRf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_fo0dfklk, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_42jyV7CM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_nPya1Zbu, 2, m, &cDelay_nPya1Zbu_sendMessage);
}

void Heavy_Simple_OSC::hTable_7KR7mUKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_42jyV7CM_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_82owZytz, 2, m, &cDelay_82owZytz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o3CmtgCT_sendMessage);
}

void Heavy_Simple_OSC::cCast_o3CmtgCT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_82owZytz, 0, m, &cDelay_82owZytz_sendMessage);
}

void Heavy_Simple_OSC::cDelay_GNW5K42K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_GNW5K42K, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tLYwYzuP, 0, m, &cDelay_tLYwYzuP_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_GNW5K42K, 0, m, &cDelay_GNW5K42K_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_3k0Anbcp, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_tLYwYzuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_tLYwYzuP, m);
  cMsg_rj6OnhHE_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_pEK2cL9w_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_EEXRL6sY_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_CXRcgJtA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fkCyJrGM_sendMessage);
}

void Heavy_Simple_OSC::cSystem_fkCyJrGM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_CVsxU1Vq_sendMessage);
}

void Heavy_Simple_OSC::cBinop_QbZ3AQwF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OQjgCCiO_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_CVsxU1Vq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 75.2546f, 0, m, &cBinop_QbZ3AQwF_sendMessage);
}

void Heavy_Simple_OSC::cMsg_rj6OnhHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_85I1a2Sp, 0, m, &hTable_85I1a2Sp_sendMessage);
}

void Heavy_Simple_OSC::cMsg_BvXigcPj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_tLYwYzuP, 2, m, &cDelay_tLYwYzuP_sendMessage);
}

void Heavy_Simple_OSC::cMsg_OQjgCCiO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_85I1a2Sp, 0, m, &hTable_85I1a2Sp_sendMessage);
}

void Heavy_Simple_OSC::cMsg_EEXRL6sY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_3k0Anbcp, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_85I1a2Sp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BvXigcPj_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_GNW5K42K, 2, m, &cDelay_GNW5K42K_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wQradkJM_sendMessage);
}

void Heavy_Simple_OSC::cCast_wQradkJM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_GNW5K42K, 0, m, &cDelay_GNW5K42K_sendMessage);
}

void Heavy_Simple_OSC::cDelay_SoqMnkjs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_SoqMnkjs, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_LBWiIsxo, 0, m, &sTabread_LBWiIsxo_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SoqMnkjs, 0, m, &cDelay_SoqMnkjs_sendMessage);
}

void Heavy_Simple_OSC::cDelay_FWB604e1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_FWB604e1, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SoqMnkjs, 0, m, &cDelay_SoqMnkjs_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_LBWiIsxo, 0, m, &sTabread_LBWiIsxo_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_Qv3nZexf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yDHeY8CU, HV_BINOP_SUBTRACT, 0, m, &cBinop_yDHeY8CU_sendMessage);
}

void Heavy_Simple_OSC::sTabread_LBWiIsxo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_agVbARoI, HV_BINOP_SUBTRACT, 0, m, &cBinop_agVbARoI_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_4ZzxNIao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wll6oROZ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_abYqOpAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vkWj3Ixz_sendMessage);
}

void Heavy_Simple_OSC::cSystem_vkWj3Ixz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2LlYXDhK_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ABvLg5RZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_FWB604e1, 2, m, &cDelay_FWB604e1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_sDDBanNH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LMR739CO, HV_BINOP_MAX, 0, m, &cBinop_LMR739CO_sendMessage);
}

void Heavy_Simple_OSC::cBinop_yDHeY8CU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_H2IfFsBT_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_LBWiIsxo, 0, m, &sTabread_LBWiIsxo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2mdZKJJp_sendMessage);
}

void Heavy_Simple_OSC::cBinop_agVbARoI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ABvLg5RZ_sendMessage);
}

void Heavy_Simple_OSC::cBinop_2LlYXDhK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sDDBanNH, HV_BINOP_MULTIPLY, 0, m, &cBinop_sDDBanNH_sendMessage);
}

void Heavy_Simple_OSC::cBinop_LMR739CO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yDHeY8CU, HV_BINOP_SUBTRACT, 1, m, &cBinop_yDHeY8CU_sendMessage);
}

void Heavy_Simple_OSC::cMsg_jPxgF1Kc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_LMR739CO, HV_BINOP_MAX, 1, m, &cBinop_LMR739CO_sendMessage);
}

void Heavy_Simple_OSC::cMsg_wll6oROZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sAWNrrCy_sendMessage);
}

void Heavy_Simple_OSC::cMsg_H2IfFsBT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_FWB604e1, 0, m, &cDelay_FWB604e1_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SoqMnkjs, 0, m, &cDelay_SoqMnkjs_sendMessage);
}

void Heavy_Simple_OSC::cSystem_sAWNrrCy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_agVbARoI, HV_BINOP_SUBTRACT, 1, m, &cBinop_agVbARoI_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SoqMnkjs, 2, m, &cDelay_SoqMnkjs_sendMessage);
}

void Heavy_Simple_OSC::cCast_2mdZKJJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_FWB604e1, 0, m, &cDelay_FWB604e1_sendMessage);
}

void Heavy_Simple_OSC::cCast_tI4MFqfA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4ZzxNIao, 0, m, &cVar_4ZzxNIao_sendMessage);
  cMsg_abYqOpAS_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_Qv3nZexf, 0, m, &cTabhead_Qv3nZexf_sendMessage);
}

void Heavy_Simple_OSC::cDelay_QoMM6tLX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_QoMM6tLX, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_O6LeiQYq, 0, m, &sTabread_O6LeiQYq_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QoMM6tLX, 0, m, &cDelay_QoMM6tLX_sendMessage);
}

void Heavy_Simple_OSC::cDelay_gsqevfk6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_gsqevfk6, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QoMM6tLX, 0, m, &cDelay_QoMM6tLX_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_O6LeiQYq, 0, m, &sTabread_O6LeiQYq_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_i4LXdtzU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gppfOnFS, HV_BINOP_SUBTRACT, 0, m, &cBinop_gppfOnFS_sendMessage);
}

void Heavy_Simple_OSC::sTabread_O6LeiQYq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_EzyL4piX, HV_BINOP_SUBTRACT, 0, m, &cBinop_EzyL4piX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_uga0ojk6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dZ1taEJR_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_d5XQvj99_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CnfvoO31_sendMessage);
}

void Heavy_Simple_OSC::cSystem_CnfvoO31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_kLHmKf9H_sendMessage);
}

void Heavy_Simple_OSC::cBinop_aIzUB5fl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_gsqevfk6, 2, m, &cDelay_gsqevfk6_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Bs8iCsZj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GZgWSbML, HV_BINOP_MAX, 0, m, &cBinop_GZgWSbML_sendMessage);
}

void Heavy_Simple_OSC::cBinop_EzyL4piX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_aIzUB5fl_sendMessage);
}

void Heavy_Simple_OSC::cBinop_gppfOnFS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nk8NthdM_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_O6LeiQYq, 0, m, &sTabread_O6LeiQYq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_49ktt3u4_sendMessage);
}

void Heavy_Simple_OSC::cBinop_kLHmKf9H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Bs8iCsZj, HV_BINOP_MULTIPLY, 0, m, &cBinop_Bs8iCsZj_sendMessage);
}

void Heavy_Simple_OSC::cBinop_GZgWSbML_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gppfOnFS, HV_BINOP_SUBTRACT, 1, m, &cBinop_gppfOnFS_sendMessage);
}

void Heavy_Simple_OSC::cMsg_nk8NthdM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_gsqevfk6, 0, m, &cDelay_gsqevfk6_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QoMM6tLX, 0, m, &cDelay_QoMM6tLX_sendMessage);
}

void Heavy_Simple_OSC::cMsg_HDlcRQrY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_GZgWSbML, HV_BINOP_MAX, 1, m, &cBinop_GZgWSbML_sendMessage);
}

void Heavy_Simple_OSC::cMsg_dZ1taEJR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_m0MDuUYe_sendMessage);
}

void Heavy_Simple_OSC::cSystem_m0MDuUYe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EzyL4piX, HV_BINOP_SUBTRACT, 1, m, &cBinop_EzyL4piX_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_QoMM6tLX, 2, m, &cDelay_QoMM6tLX_sendMessage);
}

void Heavy_Simple_OSC::cCast_49ktt3u4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_gsqevfk6, 0, m, &cDelay_gsqevfk6_sendMessage);
}

void Heavy_Simple_OSC::cCast_RbsWjEj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uga0ojk6, 0, m, &cVar_uga0ojk6_sendMessage);
  cMsg_d5XQvj99_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_i4LXdtzU, 0, m, &cTabhead_i4LXdtzU_sendMessage);
}

void Heavy_Simple_OSC::cDelay_ueZ8hjam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ueZ8hjam, m);
  cMsg_ZKofEVEt_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_FVq0cHgt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_FVq0cHgt, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ueZ8hjam, 0, m, &cDelay_ueZ8hjam_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_FVq0cHgt, 0, m, &cDelay_FVq0cHgt_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_PhdFRxQK, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_7ae6WT0f_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_cdu6BqzJ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_Z4zYSVCe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KWPy9bJ6_sendMessage);
}

void Heavy_Simple_OSC::cSystem_KWPy9bJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_DNnP6WM3_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Zaw2pGku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pHJELsxe_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_DNnP6WM3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 13.645f, 0, m, &cBinop_Zaw2pGku_sendMessage);
}

void Heavy_Simple_OSC::cMsg_pHJELsxe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_yFl2IOtK, 0, m, &hTable_yFl2IOtK_sendMessage);
}

void Heavy_Simple_OSC::cMsg_cdu6BqzJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_PhdFRxQK, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_o653UKHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_ueZ8hjam, 2, m, &cDelay_ueZ8hjam_sendMessage);
}

void Heavy_Simple_OSC::cMsg_ZKofEVEt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_yFl2IOtK, 0, m, &hTable_yFl2IOtK_sendMessage);
}

void Heavy_Simple_OSC::hTable_yFl2IOtK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_o653UKHA_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_FVq0cHgt, 2, m, &cDelay_FVq0cHgt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9VYJEUHQ_sendMessage);
}

void Heavy_Simple_OSC::cCast_9VYJEUHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_FVq0cHgt, 0, m, &cDelay_FVq0cHgt_sendMessage);
}

void Heavy_Simple_OSC::cDelay_CzTFRbDU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_CzTFRbDU, m);
  cMsg_mKS2uiX0_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_HZAqu8Ul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_HZAqu8Ul, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_CzTFRbDU, 0, m, &cDelay_CzTFRbDU_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HZAqu8Ul, 0, m, &cDelay_HZAqu8Ul_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Jdy5LpP0, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_gzD2KZp3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_ahAuBH7V_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_aHfYvrZn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Yo6icbzn_sendMessage);
}

void Heavy_Simple_OSC::cSystem_Yo6icbzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_h7lXydkl_sendMessage);
}

void Heavy_Simple_OSC::cBinop_fyeDfQoQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YsTW3ARx_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_h7lXydkl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 16.364f, 0, m, &cBinop_fyeDfQoQ_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Fc9S15BZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_CzTFRbDU, 2, m, &cDelay_CzTFRbDU_sendMessage);
}

void Heavy_Simple_OSC::cMsg_ahAuBH7V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Jdy5LpP0, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_mKS2uiX0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_RO97xsqN, 0, m, &hTable_RO97xsqN_sendMessage);
}

void Heavy_Simple_OSC::cMsg_YsTW3ARx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_RO97xsqN, 0, m, &hTable_RO97xsqN_sendMessage);
}

void Heavy_Simple_OSC::hTable_RO97xsqN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Fc9S15BZ_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_HZAqu8Ul, 2, m, &cDelay_HZAqu8Ul_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1zbrX8lw_sendMessage);
}

void Heavy_Simple_OSC::cCast_1zbrX8lw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_HZAqu8Ul, 0, m, &cDelay_HZAqu8Ul_sendMessage);
}

void Heavy_Simple_OSC::cDelay_mgKUNNvu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_mgKUNNvu, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_ybvW8YS5, 0, m, &sTabread_ybvW8YS5_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mgKUNNvu, 0, m, &cDelay_mgKUNNvu_sendMessage);
}

void Heavy_Simple_OSC::cDelay_7EdI9O7T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_7EdI9O7T, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mgKUNNvu, 0, m, &cDelay_mgKUNNvu_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_ybvW8YS5, 0, m, &sTabread_ybvW8YS5_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_EGTKdSEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7swKlITw, HV_BINOP_SUBTRACT, 0, m, &cBinop_7swKlITw_sendMessage);
}

void Heavy_Simple_OSC::sTabread_ybvW8YS5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_rXZFvRwF, HV_BINOP_SUBTRACT, 0, m, &cBinop_rXZFvRwF_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_oVb07qDv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9rRpoKFu_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_G1hkdePX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XCXecrwc_sendMessage);
}

void Heavy_Simple_OSC::cSystem_XCXecrwc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_58MTqFzK_sendMessage);
}

void Heavy_Simple_OSC::cBinop_B9w09NBJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_7EdI9O7T, 2, m, &cDelay_7EdI9O7T_sendMessage);
}

void Heavy_Simple_OSC::cBinop_cV26Yu4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xP1UUUw1, HV_BINOP_MAX, 0, m, &cBinop_xP1UUUw1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_7swKlITw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5XbPipyH_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_ybvW8YS5, 0, m, &sTabread_ybvW8YS5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nrXG1Kwr_sendMessage);
}

void Heavy_Simple_OSC::cBinop_rXZFvRwF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_B9w09NBJ_sendMessage);
}

void Heavy_Simple_OSC::cBinop_58MTqFzK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cV26Yu4R, HV_BINOP_MULTIPLY, 0, m, &cBinop_cV26Yu4R_sendMessage);
}

void Heavy_Simple_OSC::cBinop_xP1UUUw1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7swKlITw, HV_BINOP_SUBTRACT, 1, m, &cBinop_7swKlITw_sendMessage);
}

void Heavy_Simple_OSC::cMsg_5XbPipyH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_7EdI9O7T, 0, m, &cDelay_7EdI9O7T_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mgKUNNvu, 0, m, &cDelay_mgKUNNvu_sendMessage);
}

void Heavy_Simple_OSC::cMsg_fuBJ9j2u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_xP1UUUw1, HV_BINOP_MAX, 1, m, &cBinop_xP1UUUw1_sendMessage);
}

void Heavy_Simple_OSC::cMsg_9rRpoKFu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7q7sTcuS_sendMessage);
}

void Heavy_Simple_OSC::cSystem_7q7sTcuS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rXZFvRwF, HV_BINOP_SUBTRACT, 1, m, &cBinop_rXZFvRwF_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mgKUNNvu, 2, m, &cDelay_mgKUNNvu_sendMessage);
}

void Heavy_Simple_OSC::cCast_nrXG1Kwr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_7EdI9O7T, 0, m, &cDelay_7EdI9O7T_sendMessage);
}

void Heavy_Simple_OSC::cCast_ZQLSBHmg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oVb07qDv, 0, m, &cVar_oVb07qDv_sendMessage);
  cMsg_G1hkdePX_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_EGTKdSEC, 0, m, &cTabhead_EGTKdSEC_sendMessage);
}

void Heavy_Simple_OSC::cDelay_NMev6sme_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_NMev6sme, m);
  cMsg_PWqKGEmS_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_CYcobl01_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_CYcobl01, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_NMev6sme, 0, m, &cDelay_NMev6sme_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_CYcobl01, 0, m, &cDelay_CYcobl01_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_6IvwHegS, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_wB7rAnYG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_s56cRx2n_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_iOLlK5kq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZzWEoOEv_sendMessage);
}

void Heavy_Simple_OSC::cSystem_ZzWEoOEv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_VWSFiRqp_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Ny1fKtl2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4ikZorfq_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_VWSFiRqp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 19.392f, 0, m, &cBinop_Ny1fKtl2_sendMessage);
}

void Heavy_Simple_OSC::cMsg_PWqKGEmS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_W0LQrZM7, 0, m, &hTable_W0LQrZM7_sendMessage);
}

void Heavy_Simple_OSC::cMsg_bsXnHI4r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_NMev6sme, 2, m, &cDelay_NMev6sme_sendMessage);
}

void Heavy_Simple_OSC::cMsg_4ikZorfq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_W0LQrZM7, 0, m, &hTable_W0LQrZM7_sendMessage);
}

void Heavy_Simple_OSC::cMsg_s56cRx2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_6IvwHegS, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_W0LQrZM7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bsXnHI4r_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_CYcobl01, 2, m, &cDelay_CYcobl01_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nCNY8faJ_sendMessage);
}

void Heavy_Simple_OSC::cCast_nCNY8faJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_CYcobl01, 0, m, &cDelay_CYcobl01_sendMessage);
}

void Heavy_Simple_OSC::cDelay_xmNWdM9S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_xmNWdM9S, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_V3LPrPel, 0, m, &sTabread_V3LPrPel_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xmNWdM9S, 0, m, &cDelay_xmNWdM9S_sendMessage);
}

void Heavy_Simple_OSC::cDelay_0mn3xhAf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_0mn3xhAf, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xmNWdM9S, 0, m, &cDelay_xmNWdM9S_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_V3LPrPel, 0, m, &sTabread_V3LPrPel_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_pUQtyXyC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_l3a96YU5, HV_BINOP_SUBTRACT, 0, m, &cBinop_l3a96YU5_sendMessage);
}

void Heavy_Simple_OSC::sTabread_V3LPrPel_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_6z1e1p1v, HV_BINOP_SUBTRACT, 0, m, &cBinop_6z1e1p1v_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_3Bib75vr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CTMd2HPz_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_F9NwKrgF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hxzHmkV5_sendMessage);
}

void Heavy_Simple_OSC::cSystem_hxzHmkV5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_DGWWs5Jz_sendMessage);
}

void Heavy_Simple_OSC::cBinop_CBVvA5vi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_0mn3xhAf, 2, m, &cDelay_0mn3xhAf_sendMessage);
}

void Heavy_Simple_OSC::cBinop_iIJ68HCL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GvLTgYTd, HV_BINOP_MAX, 0, m, &cBinop_GvLTgYTd_sendMessage);
}

void Heavy_Simple_OSC::cBinop_6z1e1p1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_CBVvA5vi_sendMessage);
}

void Heavy_Simple_OSC::cBinop_l3a96YU5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PQmX9DkL_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_V3LPrPel, 0, m, &sTabread_V3LPrPel_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5jpuX0LF_sendMessage);
}

void Heavy_Simple_OSC::cBinop_DGWWs5Jz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iIJ68HCL, HV_BINOP_MULTIPLY, 0, m, &cBinop_iIJ68HCL_sendMessage);
}

void Heavy_Simple_OSC::cBinop_GvLTgYTd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_l3a96YU5, HV_BINOP_SUBTRACT, 1, m, &cBinop_l3a96YU5_sendMessage);
}

void Heavy_Simple_OSC::cMsg_aNNQXAd4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_GvLTgYTd, HV_BINOP_MAX, 1, m, &cBinop_GvLTgYTd_sendMessage);
}

void Heavy_Simple_OSC::cMsg_CTMd2HPz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1AbxKDDK_sendMessage);
}

void Heavy_Simple_OSC::cMsg_PQmX9DkL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_0mn3xhAf, 0, m, &cDelay_0mn3xhAf_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xmNWdM9S, 0, m, &cDelay_xmNWdM9S_sendMessage);
}

void Heavy_Simple_OSC::cSystem_1AbxKDDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6z1e1p1v, HV_BINOP_SUBTRACT, 1, m, &cBinop_6z1e1p1v_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xmNWdM9S, 2, m, &cDelay_xmNWdM9S_sendMessage);
}

void Heavy_Simple_OSC::cCast_5jpuX0LF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_0mn3xhAf, 0, m, &cDelay_0mn3xhAf_sendMessage);
}

void Heavy_Simple_OSC::cCast_eLcLZ3iL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3Bib75vr, 0, m, &cVar_3Bib75vr_sendMessage);
  cMsg_F9NwKrgF_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_pUQtyXyC, 0, m, &cTabhead_pUQtyXyC_sendMessage);
}

void Heavy_Simple_OSC::cDelay_fC1fJ4TM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_fC1fJ4TM, m);
  cMsg_rHij4ODo_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_cJWoSs40_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_cJWoSs40, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_fC1fJ4TM, 0, m, &cDelay_fC1fJ4TM_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_cJWoSs40, 0, m, &cDelay_cJWoSs40_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_V8TfAcc1, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_T0zFnfyF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_P6MeAdNQ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_tXBJot8W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UdhMhxCS_sendMessage);
}

void Heavy_Simple_OSC::cSystem_UdhMhxCS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2jlRfMBi_sendMessage);
}

void Heavy_Simple_OSC::cBinop_yFuM59Ke_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SzQOuZJA_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_2jlRfMBi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 25.796f, 0, m, &cBinop_yFuM59Ke_sendMessage);
}

void Heavy_Simple_OSC::cMsg_E9QVw0hi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_fC1fJ4TM, 2, m, &cDelay_fC1fJ4TM_sendMessage);
}

void Heavy_Simple_OSC::cMsg_SzQOuZJA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_CcxOIKbr, 0, m, &hTable_CcxOIKbr_sendMessage);
}

void Heavy_Simple_OSC::cMsg_rHij4ODo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_CcxOIKbr, 0, m, &hTable_CcxOIKbr_sendMessage);
}

void Heavy_Simple_OSC::cMsg_P6MeAdNQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_V8TfAcc1, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_CcxOIKbr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_E9QVw0hi_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_cJWoSs40, 2, m, &cDelay_cJWoSs40_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tiqnEyT7_sendMessage);
}

void Heavy_Simple_OSC::cCast_tiqnEyT7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_cJWoSs40, 0, m, &cDelay_cJWoSs40_sendMessage);
}

void Heavy_Simple_OSC::cDelay_tyf1ZTY7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_tyf1ZTY7, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_OiYPPgVQ, 0, m, &sTabread_OiYPPgVQ_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tyf1ZTY7, 0, m, &cDelay_tyf1ZTY7_sendMessage);
}

void Heavy_Simple_OSC::cDelay_p9dqELjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_p9dqELjh, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tyf1ZTY7, 0, m, &cDelay_tyf1ZTY7_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_OiYPPgVQ, 0, m, &sTabread_OiYPPgVQ_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_pxb3aKdC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nAyMaQtI, HV_BINOP_SUBTRACT, 0, m, &cBinop_nAyMaQtI_sendMessage);
}

void Heavy_Simple_OSC::sTabread_OiYPPgVQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_wzSu6fol, HV_BINOP_SUBTRACT, 0, m, &cBinop_wzSu6fol_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_AOZ7W5JW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YWcl6Pfw_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_Y35G74gi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_m4fycS2f_sendMessage);
}

void Heavy_Simple_OSC::cSystem_m4fycS2f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_TpVvDWwW_sendMessage);
}

void Heavy_Simple_OSC::cBinop_08PMgoX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_p9dqELjh, 2, m, &cDelay_p9dqELjh_sendMessage);
}

void Heavy_Simple_OSC::cBinop_zhgSH85F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oo2CXQxA, HV_BINOP_MAX, 0, m, &cBinop_oo2CXQxA_sendMessage);
}

void Heavy_Simple_OSC::cBinop_wzSu6fol_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_08PMgoX1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_nAyMaQtI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JYg1DlZb_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_OiYPPgVQ, 0, m, &sTabread_OiYPPgVQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MLgORMGL_sendMessage);
}

void Heavy_Simple_OSC::cBinop_TpVvDWwW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zhgSH85F, HV_BINOP_MULTIPLY, 0, m, &cBinop_zhgSH85F_sendMessage);
}

void Heavy_Simple_OSC::cBinop_oo2CXQxA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nAyMaQtI, HV_BINOP_SUBTRACT, 1, m, &cBinop_nAyMaQtI_sendMessage);
}

void Heavy_Simple_OSC::cMsg_JYg1DlZb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_p9dqELjh, 0, m, &cDelay_p9dqELjh_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tyf1ZTY7, 0, m, &cDelay_tyf1ZTY7_sendMessage);
}

void Heavy_Simple_OSC::cMsg_YWcl6Pfw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_HieEcCdw_sendMessage);
}

void Heavy_Simple_OSC::cMsg_5hTJNFYr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_oo2CXQxA, HV_BINOP_MAX, 1, m, &cBinop_oo2CXQxA_sendMessage);
}

void Heavy_Simple_OSC::cSystem_HieEcCdw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wzSu6fol, HV_BINOP_SUBTRACT, 1, m, &cBinop_wzSu6fol_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tyf1ZTY7, 2, m, &cDelay_tyf1ZTY7_sendMessage);
}

void Heavy_Simple_OSC::cCast_MLgORMGL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_p9dqELjh, 0, m, &cDelay_p9dqELjh_sendMessage);
}

void Heavy_Simple_OSC::cCast_BQWebaLG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AOZ7W5JW, 0, m, &cVar_AOZ7W5JW_sendMessage);
  cMsg_Y35G74gi_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_pxb3aKdC, 0, m, &cTabhead_pxb3aKdC_sendMessage);
}

void Heavy_Simple_OSC::cDelay_8mPiUkM6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_8mPiUkM6, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_LNvVnKns, 0, m, &cDelay_LNvVnKns_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_Z9wXY6TU, 0, m, &sTabread_Z9wXY6TU_sendMessage);
}

void Heavy_Simple_OSC::cDelay_LNvVnKns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_LNvVnKns, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_Z9wXY6TU, 0, m, &sTabread_Z9wXY6TU_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_LNvVnKns, 0, m, &cDelay_LNvVnKns_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_ySUZDvWF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ch9D8fPt, HV_BINOP_SUBTRACT, 0, m, &cBinop_ch9D8fPt_sendMessage);
}

void Heavy_Simple_OSC::sTabread_Z9wXY6TU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_BwBAlmoW, HV_BINOP_SUBTRACT, 0, m, &cBinop_BwBAlmoW_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_VtODd3Mt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_baeeEd27_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_Jdfy9G90_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tKYHm9eQ_sendMessage);
}

void Heavy_Simple_OSC::cSystem_tKYHm9eQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_rMj5h0Lf_sendMessage);
}

void Heavy_Simple_OSC::cBinop_TDuZENmC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Mmiv8o4E, HV_BINOP_MAX, 0, m, &cBinop_Mmiv8o4E_sendMessage);
}

void Heavy_Simple_OSC::cBinop_rxYjzl6q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_8mPiUkM6, 2, m, &cDelay_8mPiUkM6_sendMessage);
}

void Heavy_Simple_OSC::cBinop_ch9D8fPt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ylbHDf8c_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_Z9wXY6TU, 0, m, &sTabread_Z9wXY6TU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FWmMRQqf_sendMessage);
}

void Heavy_Simple_OSC::cBinop_BwBAlmoW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_rxYjzl6q_sendMessage);
}

void Heavy_Simple_OSC::cBinop_rMj5h0Lf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TDuZENmC, HV_BINOP_MULTIPLY, 0, m, &cBinop_TDuZENmC_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Mmiv8o4E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ch9D8fPt, HV_BINOP_SUBTRACT, 1, m, &cBinop_ch9D8fPt_sendMessage);
}

void Heavy_Simple_OSC::cMsg_ylbHDf8c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_8mPiUkM6, 0, m, &cDelay_8mPiUkM6_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_LNvVnKns, 0, m, &cDelay_LNvVnKns_sendMessage);
}

void Heavy_Simple_OSC::cMsg_qsEt4WPH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_Mmiv8o4E, HV_BINOP_MAX, 1, m, &cBinop_Mmiv8o4E_sendMessage);
}

void Heavy_Simple_OSC::cMsg_baeeEd27_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_z2b6Sm7a_sendMessage);
}

void Heavy_Simple_OSC::cSystem_z2b6Sm7a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BwBAlmoW, HV_BINOP_SUBTRACT, 1, m, &cBinop_BwBAlmoW_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_LNvVnKns, 2, m, &cDelay_LNvVnKns_sendMessage);
}

void Heavy_Simple_OSC::cCast_ZiShgIZq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VtODd3Mt, 0, m, &cVar_VtODd3Mt_sendMessage);
  cMsg_Jdfy9G90_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_ySUZDvWF, 0, m, &cTabhead_ySUZDvWF_sendMessage);
}

void Heavy_Simple_OSC::cCast_FWmMRQqf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_8mPiUkM6, 0, m, &cDelay_8mPiUkM6_sendMessage);
}

void Heavy_Simple_OSC::cVar_7hGXoks5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2MorjTx5, HV_BINOP_MULTIPLY, 0, m, &cBinop_2MorjTx5_sendMessage);
}

void Heavy_Simple_OSC::cMsg_09sLZgbN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BeA64Gpu_sendMessage);
}

void Heavy_Simple_OSC::cSystem_BeA64Gpu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0QQ0HeEe_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_2MorjTx5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_aI8xJ5L6_sendMessage);
}

void Heavy_Simple_OSC::cBinop_tLOhlRAF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2MorjTx5, HV_BINOP_MULTIPLY, 1, m, &cBinop_2MorjTx5_sendMessage);
}

void Heavy_Simple_OSC::cMsg_0QQ0HeEe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_tLOhlRAF_sendMessage);
}

void Heavy_Simple_OSC::cBinop_DNiBoomV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_4PeHVtYi_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZT5GTPzC, m);
}

void Heavy_Simple_OSC::cBinop_aI8xJ5L6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_DNiBoomV_sendMessage);
}

void Heavy_Simple_OSC::cBinop_4PeHVtYi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eDC0fVso, m);
}

void Heavy_Simple_OSC::cVar_lFZ1Y4qq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DNTITy0N_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ePQf5vBL_sendMessage);
}

void Heavy_Simple_OSC::cIf_IQ1K1GfF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_ian1Vnis_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_JHtfM96w, 0, m, &cVar_JHtfM96w_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cBinop_UVJA8oc9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IQ1K1GfF, 1, m, &cIf_IQ1K1GfF_sendMessage);
}

void Heavy_Simple_OSC::cDelay_Vwhof8BK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Vwhof8BK, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_clKMcG1X, 0, m, &sTabread_clKMcG1X_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Vwhof8BK, 0, m, &cDelay_Vwhof8BK_sendMessage);
}

void Heavy_Simple_OSC::cDelay_ybcQuAtv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ybcQuAtv, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Vwhof8BK, 0, m, &cDelay_Vwhof8BK_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_clKMcG1X, 0, m, &sTabread_clKMcG1X_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_0M64l0Gh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7bxetEsU, HV_BINOP_SUBTRACT, 0, m, &cBinop_7bxetEsU_sendMessage);
}

void Heavy_Simple_OSC::sTabread_clKMcG1X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_8cvU7gH3, HV_BINOP_SUBTRACT, 0, m, &cBinop_8cvU7gH3_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_TtMEGLm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1F62o7iI_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_77G3puPH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AiJ5Xr3E_sendMessage);
}

void Heavy_Simple_OSC::cSystem_AiJ5Xr3E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_pINQpEzR_sendMessage);
}

void Heavy_Simple_OSC::cBinop_UAouUH8d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kOZTgyly, HV_BINOP_MAX, 0, m, &cBinop_kOZTgyly_sendMessage);
}

void Heavy_Simple_OSC::cBinop_QWdrbhyW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ybcQuAtv, 2, m, &cDelay_ybcQuAtv_sendMessage);
}

void Heavy_Simple_OSC::cBinop_7bxetEsU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cJwo32Dw_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_clKMcG1X, 0, m, &sTabread_clKMcG1X_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YjLKj9a4_sendMessage);
}

void Heavy_Simple_OSC::cBinop_8cvU7gH3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_QWdrbhyW_sendMessage);
}

void Heavy_Simple_OSC::cBinop_pINQpEzR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UAouUH8d, HV_BINOP_MULTIPLY, 0, m, &cBinop_UAouUH8d_sendMessage);
}

void Heavy_Simple_OSC::cBinop_kOZTgyly_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7bxetEsU, HV_BINOP_SUBTRACT, 1, m, &cBinop_7bxetEsU_sendMessage);
}

void Heavy_Simple_OSC::cMsg_cJwo32Dw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ybcQuAtv, 0, m, &cDelay_ybcQuAtv_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Vwhof8BK, 0, m, &cDelay_Vwhof8BK_sendMessage);
}

void Heavy_Simple_OSC::cMsg_TZY9t5aJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_kOZTgyly, HV_BINOP_MAX, 1, m, &cBinop_kOZTgyly_sendMessage);
}

void Heavy_Simple_OSC::cMsg_1F62o7iI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WnnZvfhF_sendMessage);
}

void Heavy_Simple_OSC::cSystem_WnnZvfhF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8cvU7gH3, HV_BINOP_SUBTRACT, 1, m, &cBinop_8cvU7gH3_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Vwhof8BK, 2, m, &cDelay_Vwhof8BK_sendMessage);
}

void Heavy_Simple_OSC::cCast_YjLKj9a4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ybcQuAtv, 0, m, &cDelay_ybcQuAtv_sendMessage);
}

void Heavy_Simple_OSC::cCast_Iy1poKSz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TtMEGLm8, 0, m, &cVar_TtMEGLm8_sendMessage);
  cMsg_77G3puPH_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_0M64l0Gh, 0, m, &cTabhead_0M64l0Gh_sendMessage);
}

void Heavy_Simple_OSC::cDelay_dR8vtTDI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_dR8vtTDI, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WtomsTUw, 0, m, &cDelay_WtomsTUw_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_dR8vtTDI, 0, m, &cDelay_dR8vtTDI_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_K5BFI8Sf, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_WtomsTUw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_WtomsTUw, m);
  cMsg_HfhajE2l_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_Y6HytiLU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_ygit6nyt_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_Lc3XNgRa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jLtbqstl_sendMessage);
}

void Heavy_Simple_OSC::cSystem_jLtbqstl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_mWlPaXr1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_WjKk0hdr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T36HUz5G_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_mWlPaXr1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 86.1244f, 0, m, &cBinop_WjKk0hdr_sendMessage);
}

void Heavy_Simple_OSC::cMsg_ygit6nyt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_K5BFI8Sf, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_fXgesLpe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_WtomsTUw, 2, m, &cDelay_WtomsTUw_sendMessage);
}

void Heavy_Simple_OSC::cMsg_HfhajE2l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_8k7IbRg6, 0, m, &hTable_8k7IbRg6_sendMessage);
}

void Heavy_Simple_OSC::cMsg_T36HUz5G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_8k7IbRg6, 0, m, &hTable_8k7IbRg6_sendMessage);
}

void Heavy_Simple_OSC::hTable_8k7IbRg6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fXgesLpe_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_dR8vtTDI, 2, m, &cDelay_dR8vtTDI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sycW8HB9_sendMessage);
}

void Heavy_Simple_OSC::cCast_sycW8HB9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_dR8vtTDI, 0, m, &cDelay_dR8vtTDI_sendMessage);
}

void Heavy_Simple_OSC::cDelay_g8Gc8wfi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_g8Gc8wfi, m);
  cMsg_Uw5Q4rsa_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cDelay_tB5u7Nme_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_tB5u7Nme, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_g8Gc8wfi, 0, m, &cDelay_g8Gc8wfi_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tB5u7Nme, 0, m, &cDelay_tB5u7Nme_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_s6I7gdUd, 1, m, NULL);
}

void Heavy_Simple_OSC::cSwitchcase_f6kMQ1U8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_bdrRbPtw_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_AEOTTskN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2JAThU2d_sendMessage);
}

void Heavy_Simple_OSC::cSystem_2JAThU2d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_BnUsZKMW_sendMessage);
}

void Heavy_Simple_OSC::cBinop_Z3p0yQkK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VYoFQDQV_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_BnUsZKMW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 58.6435f, 0, m, &cBinop_Z3p0yQkK_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Uw5Q4rsa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_4ervBnrt, 0, m, &hTable_4ervBnrt_sendMessage);
}

void Heavy_Simple_OSC::cMsg_12bc7Sk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_g8Gc8wfi, 2, m, &cDelay_g8Gc8wfi_sendMessage);
}

void Heavy_Simple_OSC::cMsg_VYoFQDQV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_4ervBnrt, 0, m, &hTable_4ervBnrt_sendMessage);
}

void Heavy_Simple_OSC::cMsg_bdrRbPtw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_s6I7gdUd, 1, m, NULL);
}

void Heavy_Simple_OSC::hTable_4ervBnrt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_12bc7Sk4_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tB5u7Nme, 2, m, &cDelay_tB5u7Nme_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2eNyhO2n_sendMessage);
}

void Heavy_Simple_OSC::cCast_2eNyhO2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_tB5u7Nme, 0, m, &cDelay_tB5u7Nme_sendMessage);
}

void Heavy_Simple_OSC::cIf_sUSuTsvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_kCgBdXfc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_iIUzv7go_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cBinop_0Kkb30um_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_WZJtsUE0_sendMessage);
}

void Heavy_Simple_OSC::cBinop_WZJtsUE0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cjCFXVAz, HV_BINOP_POW, 1, m, &cBinop_cjCFXVAz_sendMessage);
  cMsg_FhA2GGvp_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_sbi2LbHv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_sUSuTsvw, 1, m, &cIf_sUSuTsvw_sendMessage);
}

void Heavy_Simple_OSC::cBinop_iIUzv7go_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_0Kkb30um_sendMessage);
}

void Heavy_Simple_OSC::cMsg_FhA2GGvp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cjCFXVAz, HV_BINOP_POW, 0, m, &cBinop_cjCFXVAz_sendMessage);
}

void Heavy_Simple_OSC::cMsg_kCgBdXfc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.125f, 0, m, &cBinop_cG0zulqx_sendMessage);
}

void Heavy_Simple_OSC::cBinop_cjCFXVAz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.125f, 0, m, &cBinop_cG0zulqx_sendMessage);
}

void Heavy_Simple_OSC::cCast_ePQf5vBL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_sUSuTsvw, 0, m, &cIf_sUSuTsvw_sendMessage);
}

void Heavy_Simple_OSC::cCast_DNTITy0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_sbi2LbHv_sendMessage);
}

void Heavy_Simple_OSC::cBinop_LXEBB9yE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 200.0f, 0, m, &cBinop_RmdNGInb_sendMessage);
}

void Heavy_Simple_OSC::cBinop_EkhEOgEg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_LXEBB9yE_sendMessage);
}

void Heavy_Simple_OSC::cVar_JHtfM96w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5qZ8VvZR, 0, m, &cVar_5qZ8VvZR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_7hGXoks5, 0, m, &cVar_7hGXoks5_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_m3Hjlh6x, 0, m, &cVar_m3Hjlh6x_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XBMuQmyI, 0, m, &cVar_XBMuQmyI_sendMessage);
}

void Heavy_Simple_OSC::cMsg_76WkuqSG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mb5Ix3QR_sendMessage);
}

void Heavy_Simple_OSC::cSystem_mb5Ix3QR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sBRfvTQU_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_ZAxJfDZo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_wNKKWRKe_sendMessage);
}

void Heavy_Simple_OSC::cBinop_AiojmViz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZAxJfDZo, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZAxJfDZo_sendMessage);
}

void Heavy_Simple_OSC::cMsg_sBRfvTQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_AiojmViz_sendMessage);
}

void Heavy_Simple_OSC::cBinop_zEQcWcYu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IViOngY4_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_k8tn3zqK, m);
}

void Heavy_Simple_OSC::cBinop_wNKKWRKe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_zEQcWcYu_sendMessage);
}

void Heavy_Simple_OSC::cVar_5qZ8VvZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZAxJfDZo, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZAxJfDZo_sendMessage);
}

void Heavy_Simple_OSC::cBinop_IViOngY4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_o0zDoBJ9, m);
}

void Heavy_Simple_OSC::cVar_Oqh0GlJ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.01f, 0, m, &cBinop_Ra55lS1o_sendMessage);
}

void Heavy_Simple_OSC::cVar_8cPBoDHm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_EkhEOgEg_sendMessage);
}

void Heavy_Simple_OSC::cBinop_K2PnY8Nu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_HXFmKHgN_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TtC5BsR1, m);
}

void Heavy_Simple_OSC::cBinop_LeaTu6EJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_K2PnY8Nu_sendMessage);
}

void Heavy_Simple_OSC::cMsg_BYOHDWhm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LCfjIgvk_sendMessage);
}

void Heavy_Simple_OSC::cSystem_LCfjIgvk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GT3xRFtt_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_QhoTeVFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_LeaTu6EJ_sendMessage);
}

void Heavy_Simple_OSC::cBinop_jPWJcp64_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QhoTeVFq, HV_BINOP_MULTIPLY, 1, m, &cBinop_QhoTeVFq_sendMessage);
}

void Heavy_Simple_OSC::cMsg_GT3xRFtt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_jPWJcp64_sendMessage);
}

void Heavy_Simple_OSC::cVar_m3Hjlh6x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QhoTeVFq, HV_BINOP_MULTIPLY, 0, m, &cBinop_QhoTeVFq_sendMessage);
}

void Heavy_Simple_OSC::cBinop_HXFmKHgN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8yY53ufI, m);
}

void Heavy_Simple_OSC::cDelay_dtO0LWkW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_dtO0LWkW, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_GUgdDAHZ, 0, m, &sTabread_GUgdDAHZ_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_dtO0LWkW, 0, m, &cDelay_dtO0LWkW_sendMessage);
}

void Heavy_Simple_OSC::cDelay_lWAdKa0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_lWAdKa0h, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_dtO0LWkW, 0, m, &cDelay_dtO0LWkW_sendMessage);
  sTabread_onMessage(_c, &Context(_c)->sTabread_GUgdDAHZ, 0, m, &sTabread_GUgdDAHZ_sendMessage);
}

void Heavy_Simple_OSC::cTabhead_NE3H1yLp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wTgPd93k, HV_BINOP_SUBTRACT, 0, m, &cBinop_wTgPd93k_sendMessage);
}

void Heavy_Simple_OSC::sTabread_GUgdDAHZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_nKE2XDNH, HV_BINOP_SUBTRACT, 0, m, &cBinop_nKE2XDNH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cVar_W84iPXbj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZZi1QwKW_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_BFWqdNSG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4egy1hgc_sendMessage);
}

void Heavy_Simple_OSC::cSystem_4egy1hgc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_oqH6Q3am_sendMessage);
}

void Heavy_Simple_OSC::cBinop_TzCAJ0Xb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_lWAdKa0h, 2, m, &cDelay_lWAdKa0h_sendMessage);
}

void Heavy_Simple_OSC::cBinop_KhWuJiWz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PnOgdPHC, HV_BINOP_MAX, 0, m, &cBinop_PnOgdPHC_sendMessage);
}

void Heavy_Simple_OSC::cBinop_wTgPd93k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cU49PmFW_sendMessage(_c, 0, m);
  sTabread_onMessage(_c, &Context(_c)->sTabread_GUgdDAHZ, 0, m, &sTabread_GUgdDAHZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JPO8eqRN_sendMessage);
}

void Heavy_Simple_OSC::cBinop_nKE2XDNH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_TzCAJ0Xb_sendMessage);
}

void Heavy_Simple_OSC::cBinop_oqH6Q3am_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KhWuJiWz, HV_BINOP_MULTIPLY, 0, m, &cBinop_KhWuJiWz_sendMessage);
}

void Heavy_Simple_OSC::cBinop_PnOgdPHC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wTgPd93k, HV_BINOP_SUBTRACT, 1, m, &cBinop_wTgPd93k_sendMessage);
}

void Heavy_Simple_OSC::cMsg_ZZi1QwKW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ey4HHz6g_sendMessage);
}

void Heavy_Simple_OSC::cMsg_cU49PmFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_lWAdKa0h, 0, m, &cDelay_lWAdKa0h_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_dtO0LWkW, 0, m, &cDelay_dtO0LWkW_sendMessage);
}

void Heavy_Simple_OSC::cMsg_TriIo9CI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cBinop_onMessage(_c, &Context(_c)->cBinop_PnOgdPHC, HV_BINOP_MAX, 1, m, &cBinop_PnOgdPHC_sendMessage);
}

void Heavy_Simple_OSC::cSystem_ey4HHz6g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nKE2XDNH, HV_BINOP_SUBTRACT, 1, m, &cBinop_nKE2XDNH_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_dtO0LWkW, 2, m, &cDelay_dtO0LWkW_sendMessage);
}

void Heavy_Simple_OSC::cCast_JPO8eqRN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_lWAdKa0h, 0, m, &cDelay_lWAdKa0h_sendMessage);
}

void Heavy_Simple_OSC::cCast_yJW7dWi9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_W84iPXbj, 0, m, &cVar_W84iPXbj_sendMessage);
  cMsg_BFWqdNSG_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_NE3H1yLp, 0, m, &cTabhead_NE3H1yLp_sendMessage);
}

void Heavy_Simple_OSC::cPack_e58mGv7O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_67rzUGFA, 0, m, NULL);
}

void Heavy_Simple_OSC::cPack_z9rkRtZV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_kJUGgjqH, 0, m, NULL);
}

void Heavy_Simple_OSC::cPack_ZHaYA2Pt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_frWm1yVt, 0, m, NULL);
}

void Heavy_Simple_OSC::cBinop_Ra55lS1o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_e58mGv7O, 0, m, &cPack_e58mGv7O_sendMessage);
}

void Heavy_Simple_OSC::cBinop_cG0zulqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ZHaYA2Pt, 0, m, &cPack_ZHaYA2Pt_sendMessage);
}

void Heavy_Simple_OSC::cBinop_RmdNGInb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_z9rkRtZV, 0, m, &cPack_z9rkRtZV_sendMessage);
}

void Heavy_Simple_OSC::cMsg_ian1Vnis_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3000.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_JHtfM96w, 0, m, &cVar_JHtfM96w_sendMessage);
}

void Heavy_Simple_OSC::cVar_PnzIK3Vh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_0haNe4d1_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_Lrtu7Bfa_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x309F9CEE: { // "crossfreq"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vK7EHZfi, 0, m, &cSlice_vK7EHZfi_sendMessage);
      break;
    }
    default: {
      cSwitchcase_Pdo0CRbG_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_vK7EHZfi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_0haNe4d1_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_0haNe4d1_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_0haNe4d1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_JlmTblPB_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_0vIarOiu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_jVsxsyRt_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_YQEAdXTa_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3CDCFB01: { // "predelay_ms"
      cSlice_onMessage(_c, &Context(_c)->cSlice_04ljyhD8, 0, m, &cSlice_04ljyhD8_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_04ljyhD8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_jVsxsyRt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_jVsxsyRt_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_jVsxsyRt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_x1iXSGdK_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_DfLBRuqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_s3smdupv_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_UWPxqu2P_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xF1E7CD16: { // "feedback"
      cSlice_onMessage(_c, &Context(_c)->cSlice_18z3q9MT, 0, m, &cSlice_18z3q9MT_sendMessage);
      break;
    }
    default: {
      cSwitchcase_uKqo1pSQ_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_18z3q9MT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_s3smdupv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_s3smdupv_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_s3smdupv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Wb2oKNSD_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_ftMlP82l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fD4XIdUZ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cMsg_Mz3Cn5fZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2t0x4rTx_sendMessage);
}

void Heavy_Simple_OSC::cSystem_2t0x4rTx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Gm2V1BCF_sendMessage);
}

void Heavy_Simple_OSC::cBinop_avFOEQ0W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jWrQS0Ni, m);
}

void Heavy_Simple_OSC::cBinop_Gm2V1BCF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_I3FPghgQ, m);
}

void Heavy_Simple_OSC::cMsg_fD4XIdUZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8xmEEMCe_sendMessage);
}

void Heavy_Simple_OSC::cSystem_8xmEEMCe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_avFOEQ0W_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_OXlVbtbQ, m);
}

void Heavy_Simple_OSC::cMsg_m29MOnkW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_c1ElMQrr, 0, m, NULL);
}

void Heavy_Simple_OSC::cUnop_uvXzTYEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_MBPHWxRB_sendMessage);
}

void Heavy_Simple_OSC::cMsg_EPABsnfY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AKRoQHV7_sendMessage);
}

void Heavy_Simple_OSC::cSystem_AKRoQHV7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mI9C1uh3, HV_BINOP_DIVIDE, 1, m, &cBinop_mI9C1uh3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bBl7sY27_sendMessage);
}

void Heavy_Simple_OSC::cBinop_hqXHY4BI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AeCnf3mm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DiQyGEIA_sendMessage);
}

void Heavy_Simple_OSC::cBinop_MBPHWxRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mI9C1uh3, HV_BINOP_DIVIDE, 0, m, &cBinop_mI9C1uh3_sendMessage);
}

void Heavy_Simple_OSC::cBinop_mI9C1uh3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hqXHY4BI, HV_BINOP_MULTIPLY, 1, m, &cBinop_hqXHY4BI_sendMessage);
}

void Heavy_Simple_OSC::cMsg_L9o6iDAh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_uvXzTYEC_sendMessage);
}

void Heavy_Simple_OSC::cCast_bBl7sY27_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_L9o6iDAh_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cUnop_YRqJSNkM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_1vf1wEw1_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_A9FJrmgD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZngYq1Sd, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZngYq1Sd_sendMessage);
}

void Heavy_Simple_OSC::cBinop_VegDv4tJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_A9FJrmgD_sendMessage);
}

void Heavy_Simple_OSC::cBinop_F8z8r3Lw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SnyiZ520, HV_BINOP_MULTIPLY, 1, m, &cBinop_SnyiZ520_sendMessage);
}

void Heavy_Simple_OSC::cBinop_M3RKnWRO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uOtIDtOv, HV_BINOP_MULTIPLY, 1, m, &cBinop_uOtIDtOv_sendMessage);
}

void Heavy_Simple_OSC::cBinop_0LGqexJb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_M3RKnWRO_sendMessage);
}

void Heavy_Simple_OSC::cBinop_1U6Yx6bs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lJak4BQ0, HV_BINOP_MULTIPLY, 1, m, &cBinop_lJak4BQ0_sendMessage);
}

void Heavy_Simple_OSC::cBinop_KPEo6d3C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_1U6Yx6bs_sendMessage);
}

void Heavy_Simple_OSC::cVar_7vyFm8jN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VFL6tS7j_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_acaa0ycT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6DsL9it5_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_rhUgudNa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_acaa0ycT_sendMessage);
}

void Heavy_Simple_OSC::cBinop_A3j3O3Cl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7vyFm8jN, 1, m, &cVar_7vyFm8jN_sendMessage);
}

void Heavy_Simple_OSC::cUnop_D1vcdQlh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_FukZHXPY_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_SyS7fg5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_rhUgudNa_sendMessage);
}

void Heavy_Simple_OSC::cVar_YjwzHzqH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XLx9WeAL_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_qikN6K9Q_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HHEUZn9Z_sendMessage);
}

void Heavy_Simple_OSC::cBinop_wvbFaFDq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hqXHY4BI, HV_BINOP_MULTIPLY, 0, m, &cBinop_hqXHY4BI_sendMessage);
}

void Heavy_Simple_OSC::cBinop_qikN6K9Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_wvbFaFDq_sendMessage);
}

void Heavy_Simple_OSC::cBinop_pKOlVOEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eyXtf3Xo, HV_BINOP_MULTIPLY, 1, m, &cBinop_eyXtf3Xo_sendMessage);
}

void Heavy_Simple_OSC::cMsg_LDO0eJA7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_pKOlVOEo_sendMessage);
}

void Heavy_Simple_OSC::cBinop_MNh4Kn9o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_JpAZUyCr_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_SnyiZ520_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m29MOnkW_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_5zh7ZkAQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_MNh4Kn9o_sendMessage);
}

void Heavy_Simple_OSC::cBinop_eyXtf3Xo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_U26oFoqV_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_ZngYq1Sd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Gq1G08Ec_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_lJak4BQ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7kziUhD7_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_uOtIDtOv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_q52UBONe_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_RI8ghNQA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5zh7ZkAQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_5zh7ZkAQ_sendMessage);
}

void Heavy_Simple_OSC::cBinop_GcHHqJ2k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1jfSvbee_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nEYxnoII_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dVdAtccH_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lQ11Ml6B_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hexYyuQL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6edAzdgT_sendMessage);
}

void Heavy_Simple_OSC::cMsg_VFL6tS7j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_GcHHqJ2k_sendMessage);
}

void Heavy_Simple_OSC::cMsg_6DsL9it5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_RI8ghNQA_sendMessage);
}

void Heavy_Simple_OSC::cSend_JpAZUyCr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_81T6ZpZ3_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_1vf1wEw1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_JeiqLHNh_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSend_FukZHXPY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_bvH9unRn_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cCast_nEYxnoII_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eyXtf3Xo, HV_BINOP_MULTIPLY, 0, m, &cBinop_eyXtf3Xo_sendMessage);
}

void Heavy_Simple_OSC::cCast_1jfSvbee_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Simple_OSC::cCast_6edAzdgT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lJak4BQ0, HV_BINOP_MULTIPLY, 0, m, &cBinop_lJak4BQ0_sendMessage);
}

void Heavy_Simple_OSC::cCast_dVdAtccH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SnyiZ520, HV_BINOP_MULTIPLY, 0, m, &cBinop_SnyiZ520_sendMessage);
}

void Heavy_Simple_OSC::cCast_hexYyuQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZngYq1Sd, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZngYq1Sd_sendMessage);
}

void Heavy_Simple_OSC::cCast_lQ11Ml6B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uOtIDtOv, HV_BINOP_MULTIPLY, 0, m, &cBinop_uOtIDtOv_sendMessage);
}

void Heavy_Simple_OSC::cCast_fcBWwRVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SyS7fg5X, 1, m, &cVar_SyS7fg5X_sendMessage);
}

void Heavy_Simple_OSC::cCast_wjAWZCYd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YjwzHzqH, 0, m, &cVar_YjwzHzqH_sendMessage);
}

void Heavy_Simple_OSC::cCast_XLx9WeAL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SyS7fg5X, 0, m, &cVar_SyS7fg5X_sendMessage);
}

void Heavy_Simple_OSC::cCast_HHEUZn9Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7vyFm8jN, 0, m, &cVar_7vyFm8jN_sendMessage);
}

void Heavy_Simple_OSC::cCast_DiQyGEIA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_D1vcdQlh_sendMessage);
}

void Heavy_Simple_OSC::cCast_AeCnf3mm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_YRqJSNkM_sendMessage);
}

void Heavy_Simple_OSC::cMsg_q52UBONe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_s2RdfzU1, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_U26oFoqV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_6AYTH2jr, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_Gq1G08Ec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Nhh5ktkA, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_7kziUhD7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_cVolwABw, 0, m, NULL);
}

void Heavy_Simple_OSC::cVar_gCKwDiqz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_lU1UErqX_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_wma42b5t_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x26AD13E6: { // "wet-gain"
      cSlice_onMessage(_c, &Context(_c)->cSlice_AbjSKJYj, 0, m, &cSlice_AbjSKJYj_sendMessage);
      break;
    }
    default: {
      cSwitchcase_VRfCekFo_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_AbjSKJYj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_lU1UErqX_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_lU1UErqX_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_lU1UErqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_klHIoybS_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_TDMRWSfy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IYsGG2ao_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_Pdo0CRbG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x71E7CD1D: { // "damp"
      cSlice_onMessage(_c, &Context(_c)->cSlice_z686CO7V, 0, m, &cSlice_z686CO7V_sendMessage);
      break;
    }
    default: {
      cSwitchcase_YQEAdXTa_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_z686CO7V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_IYsGG2ao_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_IYsGG2ao_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_IYsGG2ao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_oJMIdmZL_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_IqHMTtt0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_2kcl24WN_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_V0z5ygjq_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xDA23B137: { // "lowcut"
      cSlice_onMessage(_c, &Context(_c)->cSlice_w9S7Hnu8, 0, m, &cSlice_w9S7Hnu8_sendMessage);
      break;
    }
    default: {
      cSwitchcase_Lrtu7Bfa_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_w9S7Hnu8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_2kcl24WN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_2kcl24WN_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_2kcl24WN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ysiWZTk1_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_WS8t6Yxf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_cRFJ2GOT_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_uKqo1pSQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x2BA58A7F: { // "dry-gain"
      cSlice_onMessage(_c, &Context(_c)->cSlice_SQZLsJxL, 0, m, &cSlice_SQZLsJxL_sendMessage);
      break;
    }
    default: {
      cSwitchcase_wma42b5t_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
  }
}

void Heavy_Simple_OSC::cSlice_SQZLsJxL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_cRFJ2GOT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_cRFJ2GOT_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cSend_cRFJ2GOT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3868GZ3a_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cIf_moxLieAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_R6tHQu0O_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_GwINVR8F_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Simple_OSC::cBinop_4gCekKgo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_rHbdj12z_sendMessage);
}

void Heavy_Simple_OSC::cBinop_rHbdj12z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5BcPE5IP, HV_BINOP_POW, 1, m, &cBinop_5BcPE5IP_sendMessage);
  cMsg_BmWB6Bjf_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_WwV1f1IZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_moxLieAH, 1, m, &cIf_moxLieAH_sendMessage);
}

void Heavy_Simple_OSC::cBinop_GwINVR8F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_4gCekKgo_sendMessage);
}

void Heavy_Simple_OSC::cMsg_BmWB6Bjf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_5BcPE5IP, HV_BINOP_POW, 0, m, &cBinop_5BcPE5IP_sendMessage);
}

void Heavy_Simple_OSC::cMsg_R6tHQu0O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.125f, 0, m, &cBinop_GAebJ98X_sendMessage);
}

void Heavy_Simple_OSC::cBinop_5BcPE5IP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.125f, 0, m, &cBinop_GAebJ98X_sendMessage);
}

void Heavy_Simple_OSC::cCast_hs0GPSvX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_WwV1f1IZ_sendMessage);
}

void Heavy_Simple_OSC::cCast_5nr8FAMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_moxLieAH, 0, m, &cIf_moxLieAH_sendMessage);
}

void Heavy_Simple_OSC::cDelay_xuDugMBa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_xuDugMBa, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3n9DfMMv, 0, m, &cDelay_3n9DfMMv_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xuDugMBa, 0, m, &cDelay_xuDugMBa_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_gJOxRaHk, 1, m, NULL);
}

void Heavy_Simple_OSC::cDelay_3n9DfMMv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_3n9DfMMv, m);
  cMsg_MyUFhWg7_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cSwitchcase_VED1itSd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_TuBilrfj_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Simple_OSC::cMsg_eXx0eoUY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_u9RxI04V_sendMessage);
}

void Heavy_Simple_OSC::cSystem_u9RxI04V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_elBR7DSM_sendMessage);
}

void Heavy_Simple_OSC::cBinop_udDSErTb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b4dtZHDG_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_elBR7DSM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 3000.0f, 0, m, &cBinop_udDSErTb_sendMessage);
}

void Heavy_Simple_OSC::cMsg_b4dtZHDG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_mtsEGrXy, 0, m, &hTable_mtsEGrXy_sendMessage);
}

void Heavy_Simple_OSC::cMsg_MyUFhWg7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_mtsEGrXy, 0, m, &hTable_mtsEGrXy_sendMessage);
}

void Heavy_Simple_OSC::cMsg_TuBilrfj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_gJOxRaHk, 1, m, NULL);
}

void Heavy_Simple_OSC::cMsg_5IX3bjVs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_3n9DfMMv, 2, m, &cDelay_3n9DfMMv_sendMessage);
}

void Heavy_Simple_OSC::hTable_mtsEGrXy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5IX3bjVs_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xuDugMBa, 2, m, &cDelay_xuDugMBa_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ygQBiJeC_sendMessage);
}

void Heavy_Simple_OSC::cCast_ygQBiJeC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_xuDugMBa, 0, m, &cDelay_xuDugMBa_sendMessage);
}

void Heavy_Simple_OSC::cPack_z5EiD2v3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_dJnJF738, 0, m, NULL);
}

void Heavy_Simple_OSC::cBinop_GAebJ98X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_z5EiD2v3, 0, m, &cPack_z5EiD2v3_sendMessage);
}

void Heavy_Simple_OSC::cVar_Ffn0pfyW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_q9EULU79, 0, m, &cVar_q9EULU79_sendMessage);
}

void Heavy_Simple_OSC::cVar_eJ2UQe0V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ambKQVGE_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cVar_U9yv6x1O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eoyV8icy_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cBinop_FZ4VxKQl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_rZF2JPD1_sendMessage);
}

void Heavy_Simple_OSC::cBinop_sFGf5u0K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0FpwfvEi, 0, m, &cVar_0FpwfvEi_sendMessage);
}

void Heavy_Simple_OSC::cBinop_TdMOpqqe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kUrNi2Zn, 0, m, &cVar_kUrNi2Zn_sendMessage);
}

void Heavy_Simple_OSC::cBinop_e3dDpana_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U9yv6x1O, 0, m, &cVar_U9yv6x1O_sendMessage);
}

void Heavy_Simple_OSC::cMsg_QJoU1Mnj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_QpumrGWW, 0, m, &cVar_QpumrGWW_sendMessage);
}

void Heavy_Simple_OSC::cMsg_NnplWxxS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "lowcut");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_UWPxqu2P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_cexWYVTa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 24000.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_v7gMdnGa, 0, m, &cVar_v7gMdnGa_sendMessage);
}

void Heavy_Simple_OSC::cMsg_eoyV8icy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "predelay_ms");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_UWPxqu2P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_harqdADj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "highcut");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_UWPxqu2P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_omY9jnBt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "feedback");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_UWPxqu2P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_ambKQVGE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "dry-gain");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_UWPxqu2P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_XpeOlGgQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "damp");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_UWPxqu2P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_IYyE9Fj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_wLPUGwmi, 0, m, &cVar_wLPUGwmi_sendMessage);
}

void Heavy_Simple_OSC::cMsg_Exg8a6hm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 50.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_A8Een5B3, 0, m, &cVar_A8Een5B3_sendMessage);
}

void Heavy_Simple_OSC::cMsg_esZXHvah_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_UvlQQzUE, 0, m, &cVar_UvlQQzUE_sendMessage);
}

void Heavy_Simple_OSC::cMsg_pMoYrQtX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3000.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Ffn0pfyW, 0, m, &cVar_Ffn0pfyW_sendMessage);
}

void Heavy_Simple_OSC::cMsg_rDHW6peH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 70.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_FISsFIlL, 0, m, &cVar_FISsFIlL_sendMessage);
}

void Heavy_Simple_OSC::cMsg_TVqPCFq4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "crossfreq");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_UWPxqu2P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_TSXZmKCS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "wet-gain");
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_UWPxqu2P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Simple_OSC::cMsg_hk0SwLld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 60.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_YFRKIybG, 0, m, &cVar_YFRKIybG_sendMessage);
}

void Heavy_Simple_OSC::cReceive_OAy9DkIw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_93X2gKqy_sendMessage(_c, 0, m);
  cMsg_EPABsnfY_sendMessage(_c, 0, m);
  cMsg_Z4zYSVCe_sendMessage(_c, 0, m);
  cMsg_aHfYvrZn_sendMessage(_c, 0, m);
  cMsg_iOLlK5kq_sendMessage(_c, 0, m);
  cMsg_tXBJot8W_sendMessage(_c, 0, m);
  cMsg_jGcuu3M4_sendMessage(_c, 0, m);
  cMsg_CXRcgJtA_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Ijt7IaaD, 0, m, &cVar_Ijt7IaaD_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YjwzHzqH, 0, m, &cVar_YjwzHzqH_sendMessage);
  cMsg_AEOTTskN_sendMessage(_c, 0, m);
  cMsg_BRJoY6ZH_sendMessage(_c, 0, m);
  cMsg_76U5jyCg_sendMessage(_c, 0, m);
  cMsg_Lc3XNgRa_sendMessage(_c, 0, m);
  cMsg_76WkuqSG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5qZ8VvZR, 0, m, &cVar_5qZ8VvZR_sendMessage);
  cMsg_09sLZgbN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7hGXoks5, 0, m, &cVar_7hGXoks5_sendMessage);
  cMsg_BYOHDWhm_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_m3Hjlh6x, 0, m, &cVar_m3Hjlh6x_sendMessage);
  cMsg_cJ6oCRSU_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_XBMuQmyI, 0, m, &cVar_XBMuQmyI_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_brzowTEo, 0, m, &cVar_brzowTEo_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_IqHMTtt0, 0, m, &cVar_IqHMTtt0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_7WV7JuE4, 0, m, &cVar_7WV7JuE4_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WBwIQGaI, 0, m, &cVar_WBwIQGaI_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_lFZ1Y4qq, 0, m, &cVar_lFZ1Y4qq_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8cPBoDHm, 0, m, &cVar_8cPBoDHm_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_TDMRWSfy, 0, m, &cVar_TDMRWSfy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_gCKwDiqz, 0, m, &cVar_gCKwDiqz_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WS8t6Yxf, 0, m, &cVar_WS8t6Yxf_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_PnzIK3Vh, 0, m, &cVar_PnzIK3Vh_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_DfLBRuqL, 0, m, &cVar_DfLBRuqL_sendMessage);
  cMsg_eXx0eoUY_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0vIarOiu, 0, m, &cVar_0vIarOiu_sendMessage);
  cMsg_IYyE9Fj3_sendMessage(_c, 0, m);
  cMsg_hk0SwLld_sendMessage(_c, 0, m);
  cMsg_pMoYrQtX_sendMessage(_c, 0, m);
  cMsg_cexWYVTa_sendMessage(_c, 0, m);
  cMsg_QJoU1Mnj_sendMessage(_c, 0, m);
  cMsg_Exg8a6hm_sendMessage(_c, 0, m);
  cMsg_rDHW6peH_sendMessage(_c, 0, m);
  cMsg_esZXHvah_sendMessage(_c, 0, m);
  cMsg_OqZsnrvF_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8aEa2lMo, 0, m, &cVar_8aEa2lMo_sendMessage);
  cMsg_ikSTpX6b_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_G0BIpOXK, 0, m, &cTabhead_G0BIpOXK_sendMessage);
  cMsg_a24ZVaCp_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_CO19koIT, 0, m, &cVar_CO19koIT_sendMessage);
  cMsg_Y83SsaIQ_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_ndk0w9zl, 0, m, &cTabhead_ndk0w9zl_sendMessage);
  cMsg_jPxgF1Kc_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_4ZzxNIao, 0, m, &cVar_4ZzxNIao_sendMessage);
  cMsg_abYqOpAS_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_Qv3nZexf, 0, m, &cTabhead_Qv3nZexf_sendMessage);
  cMsg_HDlcRQrY_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uga0ojk6, 0, m, &cVar_uga0ojk6_sendMessage);
  cMsg_d5XQvj99_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_i4LXdtzU, 0, m, &cTabhead_i4LXdtzU_sendMessage);
  cMsg_fuBJ9j2u_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_oVb07qDv, 0, m, &cVar_oVb07qDv_sendMessage);
  cMsg_G1hkdePX_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_EGTKdSEC, 0, m, &cTabhead_EGTKdSEC_sendMessage);
  cMsg_aNNQXAd4_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3Bib75vr, 0, m, &cVar_3Bib75vr_sendMessage);
  cMsg_F9NwKrgF_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_pUQtyXyC, 0, m, &cTabhead_pUQtyXyC_sendMessage);
  cMsg_5hTJNFYr_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_AOZ7W5JW, 0, m, &cVar_AOZ7W5JW_sendMessage);
  cMsg_Y35G74gi_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_pxb3aKdC, 0, m, &cTabhead_pxb3aKdC_sendMessage);
  cMsg_qsEt4WPH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_VtODd3Mt, 0, m, &cVar_VtODd3Mt_sendMessage);
  cMsg_Jdfy9G90_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_ySUZDvWF, 0, m, &cTabhead_ySUZDvWF_sendMessage);
  cMsg_TZY9t5aJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_TtMEGLm8, 0, m, &cVar_TtMEGLm8_sendMessage);
  cMsg_77G3puPH_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_0M64l0Gh, 0, m, &cTabhead_0M64l0Gh_sendMessage);
  cMsg_TriIo9CI_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_W84iPXbj, 0, m, &cVar_W84iPXbj_sendMessage);
  cMsg_BFWqdNSG_sendMessage(_c, 0, m);
  cTabhead_onMessage(_c, &Context(_c)->cTabhead_NE3H1yLp, 0, m, &cTabhead_NE3H1yLp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ftMlP82l, 0, m, &cVar_ftMlP82l_sendMessage);
  cMsg_Mz3Cn5fZ_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cReceive_zm7vvp0k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ijt7IaaD, 0, m, &cVar_Ijt7IaaD_sendMessage);
}

void Heavy_Simple_OSC::cReceive_qN8uNhoJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KdY6r6sr, HV_BINOP_MULTIPLY, 0, m, &cBinop_KdY6r6sr_sendMessage);
}

void Heavy_Simple_OSC::cReceive_ak5HVysJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WIQstErM_sendMessage);
  cMsg_7lRjJgU5_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cReceive_XJObAyhw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YDghDgBb_sendMessage(_c, 0, m);
  cMsg_lqfJ4Fwu_sendMessage(_c, 0, m);
  cMsg_nucL0dac_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_36wxCXd0_sendMessage);
}

void Heavy_Simple_OSC::cReceive_JlmTblPB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JHtfM96w, 0, m, &cVar_JHtfM96w_sendMessage);
}

void Heavy_Simple_OSC::cReceive_x1iXSGdK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CzLQyl6J, m);
}

void Heavy_Simple_OSC::cReceive_Wb2oKNSD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8cPBoDHm, 0, m, &cVar_8cPBoDHm_sendMessage);
}

void Heavy_Simple_OSC::cReceive_JeiqLHNh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5zh7ZkAQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_5zh7ZkAQ_sendMessage);
}

void Heavy_Simple_OSC::cReceive_81T6ZpZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_A3j3O3Cl_sendMessage);
  cMsg_LDO0eJA7_sendMessage(_c, 0, m);
}

void Heavy_Simple_OSC::cReceive_bvH9unRn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_KPEo6d3C_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_VegDv4tJ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_0LGqexJb_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_F8z8r3Lw_sendMessage);
}

void Heavy_Simple_OSC::cReceive_klHIoybS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lFZ1Y4qq, 0, m, &cVar_lFZ1Y4qq_sendMessage);
}

void Heavy_Simple_OSC::cReceive_oJMIdmZL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WBwIQGaI, 0, m, &cVar_WBwIQGaI_sendMessage);
}

void Heavy_Simple_OSC::cReceive_ysiWZTk1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YjwzHzqH, 0, m, &cVar_YjwzHzqH_sendMessage);
}

void Heavy_Simple_OSC::cReceive_3868GZ3a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hs0GPSvX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5nr8FAMt_sendMessage);
}

void Heavy_Simple_OSC::cReceive_6UFQH0NZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_sFGf5u0K_sendMessage);
}

void Heavy_Simple_OSC::cReceive_5Q5tuoK1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_TdMOpqqe_sendMessage);
}

void Heavy_Simple_OSC::cReceive_BFdOhmj1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ptMPAl5T, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_IW9RoBuM, m);
}

void Heavy_Simple_OSC::cReceive_FdEBmVOW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 700.0f, 0, m, &cBinop_e3dDpana_sendMessage);
}

void Heavy_Simple_OSC::cReceive_qi4iGQuv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 127.0f, 0, m, &cBinop_FZ4VxKQl_sendMessage);
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
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9, Bf10, Bf11, Bf12;
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
    __hv_varread_f(&sVarf_QunF1xzH, VOf(Bf0));
    __hv_phasor_f(&sPhasor_3UbglrGk, VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf4), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf2), VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_tabwrite_f(&sTabwrite_gJOxRaHk, VIf(Bf1));
    __hv_varread_f(&sVarf_CzLQyl6J, VOf(Bf3));
    __hv_tabhead_f(&sTabhead_hf45194G, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf4), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_I3FPghgQ, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_jWrQS0Ni, VOf(Bf3));
    __hv_min_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf4));
    __hv_varread_f(&sVarf_OXlVbtbQ, VOf(Bf3));
    __hv_zero_f(VOf(Bf2));
    __hv_lt_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_cast_fi(VIf(Bf2), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_cbnNnY2A, VIi(Bi1), VOf(Bf2));
    __hv_tabread_if(&sTabread_oawe0sKU, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf2));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf2), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_ximdfCsn, VOf(Bf4));
    __hv_line_f(&sLine_bOPyOqOi, VOf(Bf2));
    __hv_line_f(&sLine_xh6s3bgg, VOf(Bf0));
    __hv_line_f(&sLine_AFkVUVGX, VOf(Bf5));
    __hv_line_f(&sLine_TPnjeRBY, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_VwmDq9oE, VIf(Bf3), VIf(Bf4), VIf(Bf2), VIf(Bf0), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_cVolwABw, VOf(Bf5));
    __hv_line_f(&sLine_Nhh5ktkA, VOf(Bf0));
    __hv_line_f(&sLine_s2RdfzU1, VOf(Bf2));
    __hv_line_f(&sLine_c1ElMQrr, VOf(Bf4));
    __hv_line_f(&sLine_6AYTH2jr, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_uqelgQkJ, VIf(Bf6), VIf(Bf5), VIf(Bf0), VIf(Bf2), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_tabread_f(&sTabread_PtQlgqSc, VOf(Bf4));
    __hv_varread_f(&sVarf_k8tn3zqK, VOf(Bf2));
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_o0zDoBJ9, VOf(Bf0));
    __hv_rpole_f(&sRPole_WEcG9Dbn, VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf0));
    __hv_line_f(&sLine_67rzUGFA, VOf(Bf2));
    __hv_fma_f(VIf(Bf0), VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_kJUGgjqH, VOf(Bf0));
    __hv_tabread_f(&sTabread_Z9wXY6TU, VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf6));
    __hv_tabwrite_f(&sTabwrite_fo0dfklk, VIf(Bf6));
    __hv_tabwrite_f(&sTabwrite_3k0Anbcp, VIf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_tabread_f(&sTabread_ybvW8YS5, VOf(Bf3));
    __hv_add_f(VIf(Bf5), VIf(Bf3), VOf(Bf6));
    __hv_tabread_f(&sTabread_LBWiIsxo, VOf(Bf7));
    __hv_add_f(VIf(Bf6), VIf(Bf7), VOf(Bf8));
    __hv_tabread_f(&sTabread_V3LPrPel, VOf(Bf9));
    __hv_add_f(VIf(Bf8), VIf(Bf9), VOf(Bf10));
    __hv_tabread_f(&sTabread_O6LeiQYq, VOf(Bf11));
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf12));
    __hv_tabwrite_f(&sTabwrite_PhdFRxQK, VIf(Bf12));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_tabwrite_f(&sTabwrite_Jdy5LpP0, VIf(Bf9));
    __hv_sub_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_tabwrite_f(&sTabwrite_6IvwHegS, VIf(Bf7));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_V8TfAcc1, VIf(Bf3));
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_tabread_f(&sTabread_OiYPPgVQ, VOf(Bf10));
    __hv_fma_f(VIf(Bf4), VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_tabread_f(&sTabread_clKMcG1X, VOf(Bf4));
    __hv_varread_f(&sVarf_ZT5GTPzC, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_eDC0fVso, VOf(Bf5));
    __hv_rpole_f(&sRPole_QKG0esPk, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf5));
    __hv_fma_f(VIf(Bf5), VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf4), VIf(Bf0), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf4));
    __hv_tabread_f(&sTabread_GUgdDAHZ, VOf(Bf5));
    __hv_varread_f(&sVarf_TtC5BsR1, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_8yY53ufI, VOf(Bf7));
    __hv_rpole_f(&sRPole_yNJBHYOy, VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf7));
    __hv_fma_f(VIf(Bf7), VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf5));
    __hv_tabread_f(&sTabread_6nqE3d7Z, VOf(Bf7));
    __hv_varread_f(&sVarf_c105d2MA, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_WDfLwx60, VOf(Bf6));
    __hv_rpole_f(&sRPole_RnYCgH3N, VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf6), VIf(Bf7), VOf(Bf6));
    __hv_fma_f(VIf(Bf6), VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf7));
    __hv_add_f(VIf(Bf4), VIf(Bf7), VOf(Bf2));
    __hv_tabwrite_f(&sTabwrite_zvjQy8mE, VIf(Bf2));
    __hv_add_f(VIf(Bf11), VIf(Bf10), VOf(Bf2));
    __hv_add_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf5));
    __hv_tabwrite_f(&sTabwrite_YjskzF40, VIf(Bf5));
    __hv_sub_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_tabwrite_f(&sTabwrite_K5BFI8Sf, VIf(Bf7));
    __hv_add_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_s6I7gdUd, VIf(Bf0));
    __hv_line_f(&sLine_frWm1yVt, VOf(Bf0));
    __hv_mul_f(VIf(Bf10), VIf(Bf0), VOf(Bf10));
    __hv_mul_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_dJnJF738, VOf(Bf11));
    __hv_mul_f(VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf10));
    __hv_add_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_IW9RoBuM, VOf(Bf0));
    __hv_mul_f(VIf(Bf10), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_ptMPAl5T, VOf(Bf0));
    __hv_mul_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(O0), VOf(O0));

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
