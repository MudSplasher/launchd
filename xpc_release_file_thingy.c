
void FUN_10000c4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong unaff_x30;
  
  uVar2 = _xpc_dictionary_create(0,0,0);
  _xpc_dictionary_set_value(uVar2,"QueueDirectories",param_3);
  FUN_10000c530(param_2,"com.apple.fsevents.matching","com.apple.launchd.QueueDirectories",uVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0xc471,0x10000c52c);
    (*pcVar1)();
  }
  _xpc_release(uVar2);
  return;
}
