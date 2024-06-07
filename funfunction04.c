undefined  [16] FUN_100004038(ulong param_1)     // defined by the ios system

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  size_t sVar8;
  dispatch_semaphore_t pdVar9;
  char *extraout_x1;
  ulong uVar10;
  long lVar11;
  dispatch_semaphore_t *ppdVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  pthread_t p_Stack_128;
  undefined auStack_120 [16];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_d8;
  
  if (param_1 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  uVar4 = FUN_100053380();
  if (uVar4 != 0) {
    return ZEXT416(uVar4) << 0x40;
  }
  auVar14._0_8_ = FUN_10005339c();
  if (auVar14._0_8_ != 0) {
    auVar14._8_8_ = 0;
    return auVar14;
  }
  uVar4 = FUN_1000533b8();
  if (uVar4 != 0) {
    return ZEXT416(uVar4) << 0x40;
  }
  auVar15._0_8_ = FUN_1000533d4();
  if (auVar15._0_8_ != 0) {
    auVar15._8_8_ = 0;
    return auVar15;
  }
  uVar4 = FUN_1000533f0();
  if (uVar4 != 0) {
    return ZEXT416(uVar4) << 0x40;
  }
  auVar16._0_8_ = FUN_10005340c();
  if (auVar16._0_8_ != 0) {
    auVar16._8_8_ = 0;
    return auVar16;
  }
  uVar4 = FUN_100053428();
  if (uVar4 != 0) {
    return ZEXT416(uVar4) << 0x40;
  }
  auVar17._0_8_ = FUN_100053444();
  if (auVar17._0_8_ != 0) {
    auVar17._8_8_ = 0;
    return auVar17;
  }
  uVar4 = FUN_100053460();
  if (uVar4 != 0) {
    return ZEXT416(uVar4) << 0x40;
  }
  iVar5 = FUN_10005347c();
  lVar11 = 0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_100075060;
  while (*(int *)((long)&DAT_10007d268 + lVar11) != iVar5) {
    lVar11 = lVar11 + 0x18;
    if (lVar11 == 0x48) {
                    /* WARNING: Subroutine does not return */
      FUN_1000432a8("unrecognized launch diagnostic thread type: %u");
    }
  }
  piVar1 = (int *)((long)&DAT_10007d26c + lVar11);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + 1;
  if (*(uint *)((long)&DAT_10007d278 + lVar11) < iVar3 + 1U) {
    uVar7 = FUN_100045150(4,"Exceeded max diagnostic thread count for type %s (%u)");
    ppdVar12 = (dispatch_semaphore_t *)0x0;
    *piVar1 = *piVar1 + -1;
    uVar10 = 0x54;
LAB_1000042f4:
    auVar19._8_8_ = uVar10;
    auVar19._0_8_ = uVar7;
    if (*(long *)PTR____stack_chk_guard_100075060 == lStack_d8) {
      auVar18._8_8_ = uVar10;
      auVar18._0_8_ = ppdVar12;
      return auVar18;
    }
    goto LAB_100004330;
  }
  sVar8 = _strlen(extraout_x1);
  uVar7 = (ulong)(0xfffffffffffffffe < sVar8 + 0x10);
  if (((0xffffffffffffffef < sVar8) || (-uVar7 != uVar7)) || (uVar7 != 0)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100004338);
    (*pcVar2)();
  }
  ppdVar12 = (dispatch_semaphore_t *)FUN_100015494(sVar8 + 0x11);
  pdVar9 = _dispatch_semaphore_create(0);
  *ppdVar12 = pdVar9;
  *(int *)(ppdVar12 + 1) = iVar5;
  sVar8 = _strlen(extraout_x1);
  _memcpy((void *)((long)ppdVar12 + 0xc),extraout_x1,sVar8);
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  auStack_120._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
  auStack_120._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  iVar5 = _pthread_attr_init((pthread_attr_t *)auStack_120);
  if (iVar5 == 0) {
    iVar5 = _pthread_attr_setdetachstate((pthread_attr_t *)auStack_120,2);
    if (iVar5 != 0) goto LAB_100004328;
    p_Stack_128 = (pthread_t)0x0;
    uVar4 = _pthread_create(&p_Stack_128,(pthread_attr_t *)auStack_120,(void **)FUN_1000043c8,
                            ppdVar12);
    uVar6 = _pthread_attr_destroy((pthread_attr_t *)auStack_120);
    uVar7 = (ulong)uVar6;
    if (uVar6 == 0) {
      if (uVar4 == 0) {
        uVar10 = 0;
      }
      else {
        uVar7 = FUN_100004338(ppdVar12);
        ppdVar12 = (dispatch_semaphore_t *)0x0;
        uVar10 = (ulong)uVar4;
      }
      goto LAB_1000042f4;
    }
  }
  else {
    FUN_1000534d0();
LAB_100004328:
    FUN_1000534b4();
  }
  auVar19 = FUN_100053498();
LAB_100004330:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(auVar19._0_8_,auVar19._8_8_);
}
