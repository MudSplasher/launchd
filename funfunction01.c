void FUN_100003738(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong unaff_x30;
  
  uVar2 = _os_map_32_count(&DAT_10007da40);
  if (uVar2 < 2000) {
    lVar3 = _os_map_str_count(&DAT_10007da28);
    if (lVar3 != 0) {
joined_r0x00010000382c:
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1000432a8("launch_service_stats_record_spawn() must not be called with a zero timestamp"
                     );
      }
      lVar3 = _os_map_32_find(&DAT_10007da40,param_1);
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1000432a8(
                     "launch_service_stats_record_spawn() must not be called twice with the same pid  (%d)"
                     );
      }
      if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0xc471,0x1000037d8);
        (*pcVar1)();
      }
      _os_map_32_insert(&DAT_10007da40,param_1,param_2);
      return;
    }
    if (DAT_10007da58 == 500) {
      _os_map_32_destroy(&DAT_10007da40);
      _os_map_32_init(&DAT_10007da40,0,1);
      DAT_10007da58 = DAT_10007da58 + 1;
    }
    else if (DAT_10007da58 < 500) {
      DAT_10007da58 = DAT_10007da58 + 1;
      goto joined_r0x00010000382c;
    }
  }
  return;
}
