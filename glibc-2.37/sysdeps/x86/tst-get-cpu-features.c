/* Test case for <sys/platform/x86.h> interface
   Copyright (C) 2015-2023 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <stdlib.h>
#include <stdio.h>
#include <sys/platform/x86.h>
#include <support/check.h>

#define CHECK_CPU_FEATURE_PRESENT(name)		\
  {						\
    if (CPU_FEATURE_PRESENT (name))		\
      printf ("  " #name "\n");			\
  }

#define CHECK_CPU_FEATURE_ACTIVE(name)	\
  {						\
    if (CPU_FEATURE_ACTIVE(name))		\
      printf ("  " #name "\n");			\
  }

static int
do_test (void)
{
#ifdef __SSE2__
  TEST_VERIFY_EXIT (CPU_FEATURE_PRESENT (SSE2));
#endif

  printf ("CPU features:\n");
  CHECK_CPU_FEATURE_PRESENT (SSE3);
  CHECK_CPU_FEATURE_PRESENT (PCLMULQDQ);
  CHECK_CPU_FEATURE_PRESENT (DTES64);
  CHECK_CPU_FEATURE_PRESENT (MONITOR);
  CHECK_CPU_FEATURE_PRESENT (DS_CPL);
  CHECK_CPU_FEATURE_PRESENT (VMX);
  CHECK_CPU_FEATURE_PRESENT (SMX);
  CHECK_CPU_FEATURE_PRESENT (EIST);
  CHECK_CPU_FEATURE_PRESENT (TM2);
  CHECK_CPU_FEATURE_PRESENT (SSSE3);
  CHECK_CPU_FEATURE_PRESENT (CNXT_ID);
  CHECK_CPU_FEATURE_PRESENT (SDBG);
  CHECK_CPU_FEATURE_PRESENT (FMA);
  CHECK_CPU_FEATURE_PRESENT (CMPXCHG16B);
  CHECK_CPU_FEATURE_PRESENT (XTPRUPDCTRL);
  CHECK_CPU_FEATURE_PRESENT (PDCM);
  CHECK_CPU_FEATURE_PRESENT (PCID);
  CHECK_CPU_FEATURE_PRESENT (DCA);
  CHECK_CPU_FEATURE_PRESENT (SSE4_1);
  CHECK_CPU_FEATURE_PRESENT (SSE4_2);
  CHECK_CPU_FEATURE_PRESENT (X2APIC);
  CHECK_CPU_FEATURE_PRESENT (MOVBE);
  CHECK_CPU_FEATURE_PRESENT (POPCNT);
  CHECK_CPU_FEATURE_PRESENT (TSC_DEADLINE);
  CHECK_CPU_FEATURE_PRESENT (AES);
  CHECK_CPU_FEATURE_PRESENT (XSAVE);
  CHECK_CPU_FEATURE_PRESENT (OSXSAVE);
  CHECK_CPU_FEATURE_PRESENT (AVX);
  CHECK_CPU_FEATURE_PRESENT (F16C);
  CHECK_CPU_FEATURE_PRESENT (RDRAND);
  CHECK_CPU_FEATURE_PRESENT (FPU);
  CHECK_CPU_FEATURE_PRESENT (VME);
  CHECK_CPU_FEATURE_PRESENT (DE);
  CHECK_CPU_FEATURE_PRESENT (PSE);
  CHECK_CPU_FEATURE_PRESENT (TSC);
  CHECK_CPU_FEATURE_PRESENT (MSR);
  CHECK_CPU_FEATURE_PRESENT (PAE);
  CHECK_CPU_FEATURE_PRESENT (MCE);
  CHECK_CPU_FEATURE_PRESENT (CX8);
  CHECK_CPU_FEATURE_PRESENT (APIC);
  CHECK_CPU_FEATURE_PRESENT (SEP);
  CHECK_CPU_FEATURE_PRESENT (MTRR);
  CHECK_CPU_FEATURE_PRESENT (PGE);
  CHECK_CPU_FEATURE_PRESENT (MCA);
  CHECK_CPU_FEATURE_PRESENT (CMOV);
  CHECK_CPU_FEATURE_PRESENT (PAT);
  CHECK_CPU_FEATURE_PRESENT (PSE_36);
  CHECK_CPU_FEATURE_PRESENT (PSN);
  CHECK_CPU_FEATURE_PRESENT (CLFSH);
  CHECK_CPU_FEATURE_PRESENT (DS);
  CHECK_CPU_FEATURE_PRESENT (ACPI);
  CHECK_CPU_FEATURE_PRESENT (MMX);
  CHECK_CPU_FEATURE_PRESENT (FXSR);
  CHECK_CPU_FEATURE_PRESENT (SSE);
  CHECK_CPU_FEATURE_PRESENT (SSE2);
  CHECK_CPU_FEATURE_PRESENT (SS);
  CHECK_CPU_FEATURE_PRESENT (HTT);
  CHECK_CPU_FEATURE_PRESENT (TM);
  CHECK_CPU_FEATURE_PRESENT (PBE);
  CHECK_CPU_FEATURE_PRESENT (FSGSBASE);
  CHECK_CPU_FEATURE_PRESENT (TSC_ADJUST);
  CHECK_CPU_FEATURE_PRESENT (SGX);
  CHECK_CPU_FEATURE_PRESENT (BMI1);
  CHECK_CPU_FEATURE_PRESENT (HLE);
  CHECK_CPU_FEATURE_PRESENT (AVX2);
  CHECK_CPU_FEATURE_PRESENT (SMEP);
  CHECK_CPU_FEATURE_PRESENT (BMI2);
  CHECK_CPU_FEATURE_PRESENT (ERMS);
  CHECK_CPU_FEATURE_PRESENT (INVPCID);
  CHECK_CPU_FEATURE_PRESENT (RTM);
  CHECK_CPU_FEATURE_PRESENT (RDT_M);
  CHECK_CPU_FEATURE_PRESENT (DEPR_FPU_CS_DS);
  CHECK_CPU_FEATURE_PRESENT (MPX);
  CHECK_CPU_FEATURE_PRESENT (RDT_A);
  CHECK_CPU_FEATURE_PRESENT (AVX512F);
  CHECK_CPU_FEATURE_PRESENT (AVX512DQ);
  CHECK_CPU_FEATURE_PRESENT (RDSEED);
  CHECK_CPU_FEATURE_PRESENT (ADX);
  CHECK_CPU_FEATURE_PRESENT (SMAP);
  CHECK_CPU_FEATURE_PRESENT (AVX512_IFMA);
  CHECK_CPU_FEATURE_PRESENT (CLFLUSHOPT);
  CHECK_CPU_FEATURE_PRESENT (CLWB);
  CHECK_CPU_FEATURE_PRESENT (TRACE);
  CHECK_CPU_FEATURE_PRESENT (AVX512PF);
  CHECK_CPU_FEATURE_PRESENT (AVX512ER);
  CHECK_CPU_FEATURE_PRESENT (AVX512CD);
  CHECK_CPU_FEATURE_PRESENT (SHA);
  CHECK_CPU_FEATURE_PRESENT (AVX512BW);
  CHECK_CPU_FEATURE_PRESENT (AVX512VL);
  CHECK_CPU_FEATURE_PRESENT (PREFETCHWT1);
  CHECK_CPU_FEATURE_PRESENT (AVX512_VBMI);
  CHECK_CPU_FEATURE_PRESENT (UMIP);
  CHECK_CPU_FEATURE_PRESENT (PKU);
  CHECK_CPU_FEATURE_PRESENT (OSPKE);
  CHECK_CPU_FEATURE_PRESENT (WAITPKG);
  CHECK_CPU_FEATURE_PRESENT (AVX512_VBMI2);
  CHECK_CPU_FEATURE_PRESENT (SHSTK);
  CHECK_CPU_FEATURE_PRESENT (GFNI);
  CHECK_CPU_FEATURE_PRESENT (VAES);
  CHECK_CPU_FEATURE_PRESENT (VPCLMULQDQ);
  CHECK_CPU_FEATURE_PRESENT (AVX512_VNNI);
  CHECK_CPU_FEATURE_PRESENT (AVX512_BITALG);
  CHECK_CPU_FEATURE_PRESENT (AVX512_VPOPCNTDQ);
  CHECK_CPU_FEATURE_PRESENT (RDPID);
  CHECK_CPU_FEATURE_PRESENT (KL);
  CHECK_CPU_FEATURE_PRESENT (CLDEMOTE);
  CHECK_CPU_FEATURE_PRESENT (MOVDIRI);
  CHECK_CPU_FEATURE_PRESENT (MOVDIR64B);
  CHECK_CPU_FEATURE_PRESENT (ENQCMD);
  CHECK_CPU_FEATURE_PRESENT (SGX_LC);
  CHECK_CPU_FEATURE_PRESENT (PKS);
  CHECK_CPU_FEATURE_PRESENT (AVX512_4VNNIW);
  CHECK_CPU_FEATURE_PRESENT (AVX512_4FMAPS);
  CHECK_CPU_FEATURE_PRESENT (FSRM);
  CHECK_CPU_FEATURE_PRESENT (UINTR);
  CHECK_CPU_FEATURE_PRESENT (AVX512_VP2INTERSECT);
  CHECK_CPU_FEATURE_PRESENT (MD_CLEAR);
  CHECK_CPU_FEATURE_PRESENT (RTM_ALWAYS_ABORT);
  CHECK_CPU_FEATURE_PRESENT (SERIALIZE);
  CHECK_CPU_FEATURE_PRESENT (HYBRID);
  CHECK_CPU_FEATURE_PRESENT (TSXLDTRK);
  CHECK_CPU_FEATURE_PRESENT (PCONFIG);
  CHECK_CPU_FEATURE_PRESENT (IBT);
  CHECK_CPU_FEATURE_PRESENT (AMX_BF16);
  CHECK_CPU_FEATURE_PRESENT (AVX512_FP16);
  CHECK_CPU_FEATURE_PRESENT (AMX_TILE);
  CHECK_CPU_FEATURE_PRESENT (AMX_INT8);
  CHECK_CPU_FEATURE_PRESENT (IBRS_IBPB);
  CHECK_CPU_FEATURE_PRESENT (STIBP);
  CHECK_CPU_FEATURE_PRESENT (L1D_FLUSH);
  CHECK_CPU_FEATURE_PRESENT (ARCH_CAPABILITIES);
  CHECK_CPU_FEATURE_PRESENT (CORE_CAPABILITIES);
  CHECK_CPU_FEATURE_PRESENT (SSBD);
  CHECK_CPU_FEATURE_PRESENT (LAHF64_SAHF64);
  CHECK_CPU_FEATURE_PRESENT (SVM);
  CHECK_CPU_FEATURE_PRESENT (LZCNT);
  CHECK_CPU_FEATURE_PRESENT (SSE4A);
  CHECK_CPU_FEATURE_PRESENT (PREFETCHW);
  CHECK_CPU_FEATURE_PRESENT (XOP);
  CHECK_CPU_FEATURE_PRESENT (LWP);
  CHECK_CPU_FEATURE_PRESENT (FMA4);
  CHECK_CPU_FEATURE_PRESENT (TBM);
  CHECK_CPU_FEATURE_PRESENT (SYSCALL_SYSRET);
  CHECK_CPU_FEATURE_PRESENT (NX);
  CHECK_CPU_FEATURE_PRESENT (PAGE1GB);
  CHECK_CPU_FEATURE_PRESENT (RDTSCP);
  CHECK_CPU_FEATURE_PRESENT (LM);
  CHECK_CPU_FEATURE_PRESENT (XSAVEOPT);
  CHECK_CPU_FEATURE_PRESENT (XSAVEC);
  CHECK_CPU_FEATURE_PRESENT (XGETBV_ECX_1);
  CHECK_CPU_FEATURE_PRESENT (XSAVES);
  CHECK_CPU_FEATURE_PRESENT (XFD);
  CHECK_CPU_FEATURE_PRESENT (INVARIANT_TSC);
  CHECK_CPU_FEATURE_PRESENT (WBNOINVD);
  CHECK_CPU_FEATURE_PRESENT (AVX_VNNI);
  CHECK_CPU_FEATURE_PRESENT (AVX512_BF16);
  CHECK_CPU_FEATURE_PRESENT (FZLRM);
  CHECK_CPU_FEATURE_PRESENT (FSRS);
  CHECK_CPU_FEATURE_PRESENT (FSRCS);
  CHECK_CPU_FEATURE_PRESENT (HRESET);
  CHECK_CPU_FEATURE_PRESENT (LAM);
  CHECK_CPU_FEATURE_PRESENT (AESKLE);
  CHECK_CPU_FEATURE_PRESENT (WIDE_KL);
  CHECK_CPU_FEATURE_PRESENT (PTWRITE);

  printf ("Possible CPU features:\n");
  CHECK_CPU_FEATURE_ACTIVE (SSE3);
  CHECK_CPU_FEATURE_ACTIVE (PCLMULQDQ);
  CHECK_CPU_FEATURE_ACTIVE (DTES64);
  CHECK_CPU_FEATURE_ACTIVE (MONITOR);
  CHECK_CPU_FEATURE_ACTIVE (DS_CPL);
  CHECK_CPU_FEATURE_ACTIVE (VMX);
  CHECK_CPU_FEATURE_ACTIVE (SMX);
  CHECK_CPU_FEATURE_ACTIVE (EIST);
  CHECK_CPU_FEATURE_ACTIVE (TM2);
  CHECK_CPU_FEATURE_ACTIVE (SSSE3);
  CHECK_CPU_FEATURE_ACTIVE (CNXT_ID);
  CHECK_CPU_FEATURE_ACTIVE (SDBG);
  CHECK_CPU_FEATURE_ACTIVE (FMA);
  CHECK_CPU_FEATURE_ACTIVE (CMPXCHG16B);
  CHECK_CPU_FEATURE_ACTIVE (XTPRUPDCTRL);
  CHECK_CPU_FEATURE_ACTIVE (PDCM);
  CHECK_CPU_FEATURE_ACTIVE (PCID);
  CHECK_CPU_FEATURE_ACTIVE (DCA);
  CHECK_CPU_FEATURE_ACTIVE (SSE4_1);
  CHECK_CPU_FEATURE_ACTIVE (SSE4_2);
  CHECK_CPU_FEATURE_ACTIVE (X2APIC);
  CHECK_CPU_FEATURE_ACTIVE (MOVBE);
  CHECK_CPU_FEATURE_ACTIVE (POPCNT);
  CHECK_CPU_FEATURE_ACTIVE (TSC_DEADLINE);
  CHECK_CPU_FEATURE_ACTIVE (AES);
  CHECK_CPU_FEATURE_ACTIVE (XSAVE);
  CHECK_CPU_FEATURE_ACTIVE (OSXSAVE);
  CHECK_CPU_FEATURE_ACTIVE (AVX);
  CHECK_CPU_FEATURE_ACTIVE (F16C);
  CHECK_CPU_FEATURE_ACTIVE (RDRAND);
  CHECK_CPU_FEATURE_ACTIVE (FPU);
  CHECK_CPU_FEATURE_ACTIVE (VME);
  CHECK_CPU_FEATURE_ACTIVE (DE);
  CHECK_CPU_FEATURE_ACTIVE (PSE);
  CHECK_CPU_FEATURE_ACTIVE (TSC);
  CHECK_CPU_FEATURE_ACTIVE (MSR);
  CHECK_CPU_FEATURE_ACTIVE (PAE);
  CHECK_CPU_FEATURE_ACTIVE (MCE);
  CHECK_CPU_FEATURE_ACTIVE (CX8);
  CHECK_CPU_FEATURE_ACTIVE (APIC);
  CHECK_CPU_FEATURE_ACTIVE (SEP);
  CHECK_CPU_FEATURE_ACTIVE (MTRR);
  CHECK_CPU_FEATURE_ACTIVE (PGE);
  CHECK_CPU_FEATURE_ACTIVE (MCA);
  CHECK_CPU_FEATURE_ACTIVE (CMOV);
  CHECK_CPU_FEATURE_ACTIVE (PAT);
  CHECK_CPU_FEATURE_ACTIVE (PSE_36);
  CHECK_CPU_FEATURE_ACTIVE (PSN);
  CHECK_CPU_FEATURE_ACTIVE (CLFSH);
  CHECK_CPU_FEATURE_ACTIVE (DS);
  CHECK_CPU_FEATURE_ACTIVE (ACPI);
  CHECK_CPU_FEATURE_ACTIVE (MMX);
  CHECK_CPU_FEATURE_ACTIVE (FXSR);
  CHECK_CPU_FEATURE_ACTIVE (SSE);
  CHECK_CPU_FEATURE_ACTIVE (SSE2);
  CHECK_CPU_FEATURE_ACTIVE (SS);
  CHECK_CPU_FEATURE_ACTIVE (HTT);
  CHECK_CPU_FEATURE_ACTIVE (TM);
  CHECK_CPU_FEATURE_ACTIVE (PBE);
  CHECK_CPU_FEATURE_ACTIVE (FSGSBASE);
  CHECK_CPU_FEATURE_ACTIVE (TSC_ADJUST);
  CHECK_CPU_FEATURE_ACTIVE (SGX);
  CHECK_CPU_FEATURE_ACTIVE (BMI1);
  CHECK_CPU_FEATURE_ACTIVE (HLE);
  CHECK_CPU_FEATURE_ACTIVE (AVX2);
  CHECK_CPU_FEATURE_ACTIVE (SMEP);
  CHECK_CPU_FEATURE_ACTIVE (BMI2);
  CHECK_CPU_FEATURE_ACTIVE (ERMS);
  CHECK_CPU_FEATURE_ACTIVE (INVPCID);
  CHECK_CPU_FEATURE_ACTIVE (RTM);
  CHECK_CPU_FEATURE_ACTIVE (RDT_M);
  CHECK_CPU_FEATURE_ACTIVE (DEPR_FPU_CS_DS);
  CHECK_CPU_FEATURE_ACTIVE (MPX);
  CHECK_CPU_FEATURE_ACTIVE (RDT_A);
  CHECK_CPU_FEATURE_ACTIVE (AVX512F);
  CHECK_CPU_FEATURE_ACTIVE (AVX512DQ);
  CHECK_CPU_FEATURE_ACTIVE (RDSEED);
  CHECK_CPU_FEATURE_ACTIVE (ADX);
  CHECK_CPU_FEATURE_ACTIVE (SMAP);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_IFMA);
  CHECK_CPU_FEATURE_ACTIVE (CLFLUSHOPT);
  CHECK_CPU_FEATURE_ACTIVE (CLWB);
  CHECK_CPU_FEATURE_ACTIVE (TRACE);
  CHECK_CPU_FEATURE_ACTIVE (AVX512PF);
  CHECK_CPU_FEATURE_ACTIVE (AVX512ER);
  CHECK_CPU_FEATURE_ACTIVE (AVX512CD);
  CHECK_CPU_FEATURE_ACTIVE (SHA);
  CHECK_CPU_FEATURE_ACTIVE (AVX512BW);
  CHECK_CPU_FEATURE_ACTIVE (AVX512VL);
  CHECK_CPU_FEATURE_ACTIVE (PREFETCHWT1);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_VBMI);
  CHECK_CPU_FEATURE_ACTIVE (UMIP);
  CHECK_CPU_FEATURE_ACTIVE (PKU);
  CHECK_CPU_FEATURE_ACTIVE (OSPKE);
  CHECK_CPU_FEATURE_ACTIVE (WAITPKG);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_VBMI2);
  CHECK_CPU_FEATURE_ACTIVE (SHSTK);
  CHECK_CPU_FEATURE_ACTIVE (GFNI);
  CHECK_CPU_FEATURE_ACTIVE (VAES);
  CHECK_CPU_FEATURE_ACTIVE (VPCLMULQDQ);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_VNNI);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_BITALG);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_VPOPCNTDQ);
  CHECK_CPU_FEATURE_ACTIVE (RDPID);
  CHECK_CPU_FEATURE_ACTIVE (KL);
  CHECK_CPU_FEATURE_ACTIVE (CLDEMOTE);
  CHECK_CPU_FEATURE_ACTIVE (MOVDIRI);
  CHECK_CPU_FEATURE_ACTIVE (MOVDIR64B);
  CHECK_CPU_FEATURE_ACTIVE (ENQCMD);
  CHECK_CPU_FEATURE_ACTIVE (SGX_LC);
  CHECK_CPU_FEATURE_ACTIVE (PKS);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_4VNNIW);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_4FMAPS);
  CHECK_CPU_FEATURE_ACTIVE (FSRM);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_VP2INTERSECT);
  CHECK_CPU_FEATURE_ACTIVE (MD_CLEAR);
  CHECK_CPU_FEATURE_ACTIVE (RTM_ALWAYS_ABORT);
  CHECK_CPU_FEATURE_ACTIVE (SERIALIZE);
  CHECK_CPU_FEATURE_ACTIVE (HYBRID);
  CHECK_CPU_FEATURE_ACTIVE (TSXLDTRK);
  CHECK_CPU_FEATURE_ACTIVE (PCONFIG);
  CHECK_CPU_FEATURE_ACTIVE (IBT);
  CHECK_CPU_FEATURE_ACTIVE (AMX_BF16);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_FP16);
  CHECK_CPU_FEATURE_ACTIVE (AMX_TILE);
  CHECK_CPU_FEATURE_ACTIVE (AMX_INT8);
  CHECK_CPU_FEATURE_ACTIVE (IBRS_IBPB);
  CHECK_CPU_FEATURE_ACTIVE (STIBP);
  CHECK_CPU_FEATURE_ACTIVE (L1D_FLUSH);
  CHECK_CPU_FEATURE_ACTIVE (ARCH_CAPABILITIES);
  CHECK_CPU_FEATURE_ACTIVE (CORE_CAPABILITIES);
  CHECK_CPU_FEATURE_ACTIVE (SSBD);
  CHECK_CPU_FEATURE_ACTIVE (LAHF64_SAHF64);
  CHECK_CPU_FEATURE_ACTIVE (SVM);
  CHECK_CPU_FEATURE_ACTIVE (LZCNT);
  CHECK_CPU_FEATURE_ACTIVE (SSE4A);
  CHECK_CPU_FEATURE_ACTIVE (PREFETCHW);
  CHECK_CPU_FEATURE_ACTIVE (XOP);
  CHECK_CPU_FEATURE_ACTIVE (LWP);
  CHECK_CPU_FEATURE_ACTIVE (FMA4);
  CHECK_CPU_FEATURE_ACTIVE (TBM);
  CHECK_CPU_FEATURE_ACTIVE (SYSCALL_SYSRET);
  CHECK_CPU_FEATURE_ACTIVE (NX);
  CHECK_CPU_FEATURE_ACTIVE (PAGE1GB);
  CHECK_CPU_FEATURE_ACTIVE (RDTSCP);
  CHECK_CPU_FEATURE_ACTIVE (LM);
  CHECK_CPU_FEATURE_ACTIVE (XSAVEOPT);
  CHECK_CPU_FEATURE_ACTIVE (XSAVEC);
  CHECK_CPU_FEATURE_ACTIVE (XGETBV_ECX_1);
  CHECK_CPU_FEATURE_ACTIVE (XSAVES);
  CHECK_CPU_FEATURE_ACTIVE (XFD);
  CHECK_CPU_FEATURE_ACTIVE (INVARIANT_TSC);
  CHECK_CPU_FEATURE_ACTIVE (WBNOINVD);
  CHECK_CPU_FEATURE_ACTIVE (AVX_VNNI);
  CHECK_CPU_FEATURE_ACTIVE (AVX512_BF16);
  CHECK_CPU_FEATURE_ACTIVE (FZLRM);
  CHECK_CPU_FEATURE_ACTIVE (FSRS);
  CHECK_CPU_FEATURE_ACTIVE (FSRCS);
  CHECK_CPU_FEATURE_ACTIVE (AESKLE);
  CHECK_CPU_FEATURE_ACTIVE (WIDE_KL);
  CHECK_CPU_FEATURE_ACTIVE (PTWRITE);

  return 0;
}

#include <support/test-driver.c>
