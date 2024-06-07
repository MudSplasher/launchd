
undefined8 FUN_10000d1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined *)_xpc_get_type(param_3);
  if (puVar1 == PTR___xpc_type_dictionary_100075108) {
    lVar2 = _xpc_dictionary_get_int64(param_3,"SizeLimit");
    if (lVar2 != 0) {
      FUN_10000c530(*(undefined8 *)(param_1 + 0x28),"com.apple.xpc.datastores.publish",param_2,
                    param_3);
      return 1;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = "Size limit for Datastore entry not specified: %s";
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _xpc_get_type(param_3);
    _xpc_type_get_name();
    pcVar3 = "Invalid type for a Datastores entry, should be a dictionary (key/type): %s/%s";
  }
  FUN_1000168ec(uVar4,3,pcVar3);
  *(ulong *)(*(long *)(param_1 + 0x28) + 0x538) = *(ulong *)(*(long *)(param_1 + 0x28) + 0x538) | 1;
  return 1;
}
