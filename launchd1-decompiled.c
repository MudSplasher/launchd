
void entry(void)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  pid_t pVar5;
  mach_port_t mVar6;
  kern_return_t kVar7;
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  FILE *pFVar13;
  undefined8 local_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  void *local_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  
  pcVar8 = _getenv("LAUNCH_DID_REEXEC");
  if ((pcVar8 == (char *)0x0) && (pcVar8 = _getenv("XPC_USERSPACE_REBOOTED"), pcVar8 == (char *)0x0)
     ) {
    FUN_100044368("kern.initproc_spawned",1);
  }
  *(code **)PTR___os_crash_callback_1000750c8 = _os_crash_function;
  iVar4 = _isatty(1);
  if ((iVar4 != 0) && (DAT_10007ecb9 == '\0')) {
    pFVar13 = *(FILE **)PTR____stdoutp_100075068;
    _getprogname();
    _fprintf(pFVar13,"%s cannot be run directly.\n");
    _getprogname();
                    /* WARNING: Subroutine does not return */
    FUN_1000432a8("%s cannot be run directly (stdout: %d)");
  }
  pVar5 = _getpid();
  if ((pVar5 != 1) && (DAT_10007ecb9 == '\0')) {
    pFVar13 = *(FILE **)PTR____stdoutp_100075068;
    _getprogname();
    _fprintf(pFVar13,"%s cannot be run directly.\n");
    _getprogname();
                    /* WARNING: Subroutine does not return */
    FUN_1000432a8("%s cannot be run directly (pid = %d)");
  }
  mVar6 = _mach_host_self();
  _panic_init(mVar6);
  FUN_100016560();
  if (DAT_10007ecb9 == '\0') {
    FUN_1000189c8(0,0);
    FUN_1000189c8(1,1);
    FUN_1000189c8(2,2);
  }
  FUN_1000129a8(0x22000040);
  FUN_1000122bc();
  FUN_10004c478();
  FUN_1000432a4();
  FUN_100003ce0();
  uStack_50 = 0xaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaaaa;
  local_53 = 0xaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  uVar9 = __NSGetMachExecuteHeader();
  iVar4 = __dyld_get_image_uuid(uVar9,&local_140);
  if (iVar4 == 0) {
    __os_assumes_log(0);
  }
  else {
    _uuid_unparse((uchar *)&local_140,(char *)&local_70);
  }
  FUN_100045150(5,"hello, launchd UUID: %s");
  if (DAT_10007ecd3 != '\0') {
    DAT_10007d9ac = 0xffffffff;
  }
  if (DAT_10007ec9f == '\0') {
    if ((DAT_10007d9ac != 0xffffffff) && (iVar4 = FUN_100003dc8(), iVar4 != 0)) {
      DAT_10007d9ac = DAT_10007d9ac + 2;
    }
  }
  else {
    FUN_100045150(0x10007,"Memory limit override file is present, disabling memory limits.");
    DAT_10007d9ac = 0xffffffff;
  }
  pVar5 = _getpid();
  iVar4 = _memorystatus_control(6,pVar5,DAT_10007d9ac,(void *)0x0,0);
  if (iVar4 == -1) {
    ___error();
    piVar10 = ___error();
    _strerror(*piVar10);
    FUN_100045150(0x10003,"Could not opt into %d MB Jetsam high watermark: %d: %s");
  }
  FUN_100045150(0x10005,"%s");
  local_78 = (void *)0x0;
  lVar11 = FUN_10004410c("kern.bootargs",&local_78);
  if (lVar11 != 0) {
    FUN_100045150(0x10005,"boot-args = %s");
  }
  _free(local_78);
  pVar5 = _getpid();
  iVar4 = _proc_disable_wakemon(pVar5);
  if (iVar4 == -1) {
    piVar10 = ___error();
    __os_assert_log((long)*piVar10);
    __os_crash();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100018984);
    (*pcVar3)();
  }
  if (DAT_10007ecb9 != '\0') {
    DAT_10007ed0a = 1;
    FUN_100045150(0x10005,"Lean Testing Environment starting.");
  }
  if ((DAT_10007ecbb != '\0') && (DAT_10007ecbd == '\0')) {
    DAT_10007ed0a = 1;
    FUN_100045150(0x10005,"Restore environment starting.");
  }
  if (DAT_10007ecbd != '\0') {
    DAT_10007ed0a = 1;
    FUN_100045150(0x10005,"BaseSystem environment starting.");
  }
  iVar4 = FUN_100003dc8();
  if (iVar4 != 0) {
    FUN_100045150(0x10005,"Running with Probabilistic Guard Malloc envvar");
  }
  pVar5 = _setsid();
  if ((((pVar5 == -1) && (DAT_10007ecb9 == '\0')) &&
      ((DAT_10007ecd8 == '\0' || (piVar10 = ___error(), *piVar10 != 1)))) &&
     (piVar10 = ___error(), *piVar10 != 0)) {
    __os_assert_log();
    __os_crash();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000189b8);
    (*pcVar3)();
  }
  iVar4 = _chdir("/");
  if (iVar4 == -1) {
    piVar10 = ___error();
    __os_assert_log((long)*piVar10);
    __os_crash();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100018998);
    (*pcVar3)();
  }
  iVar4 = _setlogin("root");
  if (iVar4 != -1) {
    lVar11 = 0;
    do {
      uVar1 = *(uint *)((long)&DAT_10005d560 + lVar11);
      uVar12 = (ulong)uVar1;
      DAT_10007dc18 = 1 << (ulong)(uVar1 - 1 & 0x1f) | DAT_10007dc18;
      _signal(uVar1);
      if (uVar12 == 0xffffffffffffffff) {
        piVar10 = ___error();
        __os_assumes_log((long)*piVar10);
      }
      puVar2 = PTR__mach_task_self__1000751a0;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x54);
    kVar7 = _task_set_special_port(*(task_t *)PTR__mach_task_self__1000751a0,4,0);
    if (kVar7 == 0) {
      *(undefined4 *)PTR__bootstrap_port_100075148 = 0;
      uVar9 = FUN_100018284(PTR_s_com.apple.xpc.launchd.domain.sys_10007d5e0,0x70507);
      local_140 = (undefined *)CONCAT44(local_140._4_4_,(int)uVar9);
      kVar7 = _mach_ports_register(*(task_t *)puVar2,(mach_port_array_t)&local_140,1);
      if (kVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1000432a8("could not set up inheritance port");
      }
      DAT_10007ec58 = (int)uVar9;
      DAT_10007ec60 = _xpc_mach_send_create_with_disposition(uVar9,0x11);
      DAT_10007ec18 = _mach_absolute_time();
      _uuid_generate(&DAT_10007ed20);
      DAT_10007ed30._0_4_ = _getuid();
      DAT_10007ed30._4_4_ = _geteuid();
      DAT_10007ed38._0_4_ = _getegid();
      DAT_10007ed38._4_4_ = _geteuid();
      DAT_10007ed40._0_4_ = _getegid();
      DAT_10007ed40._4_4_ = _getpid();
      DAT_10007ed48._0_4_ = FUN_100044440();
      DAT_10007ed48._4_4_ = 0;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      local_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
      pVar5 = _getpid();
      iVar4 = FUN_100043f98(pVar5,&local_140);
      if ((iVar4 != 0) && (iVar4 != 0x2d)) {
                    /* WARNING: Subroutine does not return */
        FUN_1000432a8("could not get unique pid");
      }
      DAT_10007ec20 = local_a8;
      FUN_100049418();
      FUN_10001131c();
      FUN_10003e7e8();
      FUN_100022d84();
      FUN_100030fa4();
      FUN_10003ffa8();
      FUN_1000411f0();
      FUN_10003d67c();
      FUN_100011824();
      FUN_1000158c0();
      FUN_100003540();
      FUN_100020088();
      FUN_10000f460();
      FUN_10003da2c();
      FUN_100010c2c();
      FUN_1000140b0();
      FUN_1000208b4();
      FUN_100046b28();
      FUN_100016640();
      _dispatch_activate();
      _dispatch_main();
    }
    FUN_100045150(3,"Could not neuter bootstrap port: 0x%x");
                    /* WARNING: Subroutine does not return */
    _exit(1);
  }
  piVar10 = ___error();
  __os_assert_log((long)*piVar10);
  __os_crash();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000189ac);
  (*pcVar3)();
}
