dispatch_semaphore_t * FUN_100003f20(dispatch_semaphore_t *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  dispatch_semaphore_t *ppdVar8;
  size_t sVar9;
  dispatch_semaphore_t pdVar10;
  char *extraout_x1;
  ulong uVar11;
  long lVar12;
  dispatch_semaphore_t *unaff_x19;
  long **unaff_x20;
  char *unaff_x21;
  long **unaff_x22;
  ulong unaff_x30;
  undefined auVar13 [16];
  pthread_t p_Stack_158;
  undefined auStack_150 [16];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_108;
  long **pplStack_100;
  char *pcStack_f8;
  long **pplStack_f0;
  dispatch_semaphore_t *ppdStack_e8;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  code *pcStack_38;
  
  if (((ulong)param_1[0xa7] >> 0x38 & 1) == 0) {
    return param_1;
  }
  if (DAT_10007da70 == '\0') {
    FUN_100053348();
  }
  else {
    DAT_10007da70 = '\0';
    param_1[0xa7] = (dispatch_semaphore_t)((ulong)param_1[0xa7] & 0xfeffffffffffffff);
    unaff_x22 = (long **)(param_1 + 0x79);
    unaff_x20 = unaff_x22;
    do {
      unaff_x20 = (long **)*unaff_x20;
      if (unaff_x20 == (long **)0x0) break;
      iVar4 = FUN_100017a78(unaff_x20 + 3,"MallocProbGuardViaLaunchd");
    } while (iVar4 == 0);
    unaff_x21 = "MallocProbGuardSampleRate";
    do {
      unaff_x22 = (long **)*unaff_x22;
      unaff_x19 = param_1;
      if (unaff_x22 == (long **)0x0) {
        if (unaff_x20 != (long **)0x0) goto LAB_100003fcc;
        goto LAB_100004034;
      }
      uVar7 = FUN_100017a78(unaff_x22 + 3,"MallocProbGuardSampleRate");
    } while ((uVar7 & 1) == 0);
    if (unaff_x20 != (long **)0x0) {
      FUN_100005d4c(param_1,unaff_x20);
      unaff_x20 = unaff_x22;
LAB_100003fcc:
      FUN_100005d4c(param_1,unaff_x20);
      if (2 < *(int *)((long)param_1 + 0x374)) {
        *(int *)((long)param_1 + 0x374) = *(int *)((long)param_1 + 0x374) + -2;
      }
      if (2 < *(int *)(param_1 + 0x6f)) {
        *(int *)(param_1 + 0x6f) = *(int *)(param_1 + 0x6f) + -2;
      }
      if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0xc471,0x10000402c);
        (*pcVar2)();
      }
      ppdVar8 = (dispatch_semaphore_t *)
                FUN_100020ff8(param_1,5,"Probabilistic Guard Malloc-enabled process exited");
      return ppdVar8;
    }
  }
LAB_100004034:
  ppdVar8 = (dispatch_semaphore_t *)FUN_100053364();
  if (ppdVar8 != (dispatch_semaphore_t *)0x0) {
    return ppdVar8;
  }
  pcStack_38 = FUN_100004038;
  puStack_40 = &stack0xfffffffffffffff0;
  iVar4 = FUN_100053380();
  if (iVar4 != 0) {
    return (dispatch_semaphore_t *)0x0;
  }
  pcStack_48 = FUN_100004054;
  ppuStack_50 = &puStack_40;
  ppdVar8 = (dispatch_semaphore_t *)FUN_10005339c();
  if (ppdVar8 != (dispatch_semaphore_t *)0x0) {
    return ppdVar8;
  }
  pcStack_58 = FUN_100004074;
  ppuStack_60 = (undefined **)&ppuStack_50;
  iVar4 = FUN_1000533b8();
  if (iVar4 != 0) {
    return (dispatch_semaphore_t *)0x0;
  }
  pcStack_68 = FUN_100004090;
  ppuStack_70 = (undefined **)&ppuStack_60;
  ppdVar8 = (dispatch_semaphore_t *)FUN_1000533d4();
  if (ppdVar8 != (dispatch_semaphore_t *)0x0) {
    return ppdVar8;
  }
  pcStack_78 = FUN_1000040b0;
  ppuStack_80 = (undefined **)&ppuStack_70;
  iVar4 = FUN_1000533f0();
  if (iVar4 != 0) {
    return (dispatch_semaphore_t *)0x0;
  }
  pcStack_88 = FUN_1000040cc;
  ppuStack_90 = (undefined **)&ppuStack_80;
  ppdVar8 = (dispatch_semaphore_t *)FUN_10005340c();
  if (ppdVar8 != (dispatch_semaphore_t *)0x0) {
    return ppdVar8;
  }
  pcStack_98 = FUN_1000040ec;
  ppuStack_a0 = (undefined **)&ppuStack_90;
  iVar4 = FUN_100053428();
  if (iVar4 != 0) {
    return (dispatch_semaphore_t *)0x0;
  }
  pcStack_a8 = FUN_100004108;
  ppuStack_b0 = (undefined **)&ppuStack_a0;
  ppdVar8 = (dispatch_semaphore_t *)FUN_100053444();
  if (ppdVar8 != (dispatch_semaphore_t *)0x0) {
    return ppdVar8;
  }
  pcStack_b8 = FUN_100004128;
  ppuStack_c0 = (undefined **)&ppuStack_b0;
  iVar4 = FUN_100053460();
  if (iVar4 != 0) {
    return (dispatch_semaphore_t *)0x0;
  }
  pcStack_c8 = FUN_100004144;
  ppuStack_d0 = (undefined **)&ppuStack_c0;
  iVar4 = FUN_10005347c();
  pcStack_d8 = FUN_100004164;
  lVar12 = 0;
  lStack_108 = *(long *)PTR____stack_chk_guard_100075060;
  while (pplStack_100 = unaff_x22, pcStack_f8 = unaff_x21, pplStack_f0 = unaff_x20,
        ppdStack_e8 = unaff_x19, *(int *)((long)&DAT_10007d268 + lVar12) != iVar4) {
    lVar12 = lVar12 + 0x18;
    if (lVar12 == 0x48) {
      ppuStack_e0 = (undefined **)&ppuStack_d0;
                    /* WARNING: Subroutine does not return */
      FUN_1000432a8("unrecognized launch diagnostic thread type: %u");
    }
  }
  piVar1 = (int *)((long)&DAT_10007d26c + lVar12);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  if (*(uint *)((long)&DAT_10007d278 + lVar12) < iVar3 + 1U) {
    ppuStack_e0 = (undefined **)&ppuStack_d0;
    uVar7 = FUN_100045150(4,"Exceeded max diagnostic thread count for type %s (%u)");
    ppdVar8 = (dispatch_semaphore_t *)0x0;
    *piVar1 = *piVar1 + -1;
    uVar11 = 0x54;
LAB_1000042f4:
    auVar13._8_8_ = uVar11;
    auVar13._0_8_ = uVar7;
    if (*(long *)PTR____stack_chk_guard_100075060 == lStack_108) {
      return ppdVar8;
    }
    goto LAB_100004330;
  }
  ppuStack_e0 = (undefined **)&ppuStack_d0;
  sVar9 = _strlen(extraout_x1);
  uVar7 = (ulong)(0xfffffffffffffffe < sVar9 + 0x10);
  if (((0xffffffffffffffef < sVar9) || (-uVar7 != uVar7)) || (uVar7 != 0)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100004338);
    (*pcVar2)();
  }
  ppdVar8 = (dispatch_semaphore_t *)FUN_100015494(sVar9 + 0x11);
  pdVar10 = _dispatch_semaphore_create(0);
  *ppdVar8 = pdVar10;
  *(int *)(ppdVar8 + 1) = iVar4;
  sVar9 = _strlen(extraout_x1);
  _memcpy((void *)((long)ppdVar8 + 0xc),extraout_x1,sVar9);
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  auStack_150._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
  auStack_150._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  iVar4 = _pthread_attr_init((pthread_attr_t *)auStack_150);
  if (iVar4 == 0) {
    iVar4 = _pthread_attr_setdetachstate((pthread_attr_t *)auStack_150,2);
    if (iVar4 != 0) goto LAB_100004328;
    p_Stack_158 = (pthread_t)0x0;
    uVar5 = _pthread_create(&p_Stack_158,(pthread_attr_t *)auStack_150,(void **)FUN_1000043c8,
                            ppdVar8);
    uVar6 = _pthread_attr_destroy((pthread_attr_t *)auStack_150);
    uVar7 = (ulong)uVar6;
    if (uVar6 == 0) {
      if (uVar5 == 0) {
        uVar11 = 0;
      }
      else {
        uVar7 = FUN_100004338(ppdVar8);
        ppdVar8 = (dispatch_semaphore_t *)0x0;
        uVar11 = (ulong)uVar5;
      }
      goto LAB_1000042f4;
    }
  }
  else {
    FUN_1000534d0();
LAB_100004328:
    FUN_1000534b4();
  }
  auVar13 = FUN_100053498();
LAB_100004330:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(auVar13._0_8_,auVar13._8_8_);
}
