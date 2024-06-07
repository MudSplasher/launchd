
void FUN_100003e00(long param_1)

{
  u_int32_t uVar1;
  undefined7 uStack_38;
  undefined4 local_31;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100075060;
  if (DAT_10007da70 == '\0') {
    if (*(u_int32_t *)(param_1 + 0x520) != 0) {
      uVar1 = _arc4random_uniform(*(u_int32_t *)(param_1 + 0x520));
      if (uVar1 == 0) {
        DAT_10007da70 = '\x01';
        *(ulong *)(param_1 + 0x538) = *(ulong *)(param_1 + 0x538) | 0x100000000000000;
        FUN_100005dc8(param_1,"MallocProbGuardViaLaunchd","1",1);
        if (0 < *(int *)(param_1 + 0x374)) {
          *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) + 2;
        }
        if (0 < *(int *)(param_1 + 0x378)) {
          *(int *)(param_1 + 0x378) = *(int *)(param_1 + 0x378) + 2;
        }
        if (*(int *)(param_1 + 0x51c) != 0) {
          uStack_38 = 0;
          local_31 = 0;
          _snprintf((char *)&uStack_38,0xb,"%u");
          FUN_100005dc8(param_1,"MallocProbGuardSampleRate",&uStack_38,0);
        }
        FUN_100020ff8(param_1,5,"Enabling Probabilistic Guard Malloc");
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100075060 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
