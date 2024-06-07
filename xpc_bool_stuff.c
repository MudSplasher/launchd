
undefined8 FUN_10000c70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)_xpc_get_type(param_3);
  if ((puVar1 != PTR___xpc_type_dictionary_100075108) &&
     (puVar1 = (undefined *)_xpc_get_type(param_3), puVar1 != PTR___xpc_type_bool_1000750e8)) {
    FUN_1000168ec(*(undefined8 *)(param_1 + 0x28),3,
                  "Invalid item %s in PublishesEvents, expected dictionary or bool");
    *(ulong *)(*(long *)(param_1 + 0x20) + 0x538) =
         *(ulong *)(*(long *)(param_1 + 0x20) + 0x538) | 1;
    return 1;
  }
  FUN_10000bab0(*(undefined8 *)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  return 1;
}
