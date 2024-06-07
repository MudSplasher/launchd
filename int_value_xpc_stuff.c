
void FUN_10000cb18(char *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = _strcasecmp(param_1,"Wait");
  if (iVar2 == 0) {
    iVar2 = _xpc_bool_get_value(param_2);
    uVar1 = 0x8000;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    *(ulong *)(param_3 + 0x538) = *(ulong *)(param_3 + 0x538) & 0xffffffffffff7fff | uVar1;
  }
  else {
    iVar2 = _strcasecmp(param_1,"Instances");
    if (iVar2 == 0) {
      uVar3 = _xpc_int64_get_value(param_2);
      *(undefined4 *)(param_3 + 0x10c) = uVar3;
    }
  }
  return;
}
