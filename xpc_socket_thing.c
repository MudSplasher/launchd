
undefined8 FUN_10000cc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = (undefined *)_xpc_get_type(param_3);
  puVar3 = PTR___xpc_type_dictionary_100075108;
  if (puVar4 == PTR___xpc_type_dictionary_100075108) {
    lVar5 = (**(code **)(lVar1 + 0x228))(lVar1,param_2,param_3,uVar2,*(undefined8 *)(lVar1 + 0x238))
    ;
    if (lVar5 != 0) {
      return 1;
    }
  }
  else {
    puVar4 = (undefined *)_xpc_get_type(param_3);
    if (puVar4 == PTR___xpc_type_array_1000750e0) {
      lVar5 = _xpc_array_get_count(param_3);
      if (lVar5 == 0) {
        return 1;
      }
      uVar8 = 0;
      do {
        uVar6 = _xpc_array_get_value(param_3,uVar8);
        puVar4 = (undefined *)_xpc_get_type();
        if (puVar4 == puVar3) {
          lVar5 = (**(code **)(lVar1 + 0x228))
                            (lVar1,param_2,uVar6,uVar2,*(undefined8 *)(lVar1 + 0x238));
          if (lVar5 == 0) goto LAB_10000cd60;
        }
        else {
          FUN_100020ff8(lVar1,3,"Socket entry is not a dictionary. Skipping: %s");
LAB_10000cd60:
          *(ulong *)(lVar1 + 0x538) = *(ulong *)(lVar1 + 0x538) | 1;
        }
        uVar8 = uVar8 + 1;
        uVar7 = _xpc_array_get_count(param_3);
        if (uVar7 <= uVar8) {
          return 1;
        }
      } while( true );
    }
    FUN_100020ff8(lVar1,3,"Socket entry is not a dictionary or array. Skipping: %s");
  }
  *(ulong *)(lVar1 + 0x538) = *(ulong *)(lVar1 + 0x538) | 1;
  return 1;
}
