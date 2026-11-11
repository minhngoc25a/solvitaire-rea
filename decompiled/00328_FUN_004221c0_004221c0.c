// Function: FUN_004221c0
// Entry: 004221c0
// Size: 828 bytes
// Thunk: false
// External: false


void FUN_004221c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[0xf];
  while (puVar1 != (undefined4 *)0x0) {
    param_1[0xf] = *puVar1;
    puVar2 = (undefined4 *)puVar1[2];
    if (puVar2 != (undefined4 *)0x0) {
      GdipDeleteFont(*puVar2);
      GdipFree(puVar2);
      puVar1[2] = 0;
    }
    puVar2 = (undefined4 *)puVar1[3];
    if (puVar2 != (undefined4 *)0x0) {
      GdipDeletePen(*puVar2);
      GdipFree(puVar2);
      puVar1[3] = 0;
    }
    if ((undefined4 *)puVar1[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[4])(1);
      puVar1[4] = 0;
    }
    if ((undefined4 *)puVar1[6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[6])(1);
      puVar1[6] = 0;
    }
    puVar2 = (undefined4 *)puVar1[7];
    if (puVar2 != (undefined4 *)0x0) {
      GdipDeletePath(*puVar2);
      GdipFree(puVar2);
      puVar1[7] = 0;
    }
    puVar2 = (undefined4 *)puVar1[8];
    if (puVar2 != (undefined4 *)0x0) {
      GdipDeleteMatrix(*puVar2);
      GdipFree(puVar2);
      puVar1[8] = 0;
    }
    puVar2 = (undefined4 *)puVar1[9];
    if (puVar2 != (undefined4 *)0x0) {
      GdipDeleteMatrix(*puVar2);
      GdipFree(puVar2);
      puVar1[9] = 0;
    }
    HeapFree(DAT_00542264,0,puVar1);
    puVar1 = (undefined4 *)param_1[0xf];
  }
  puVar1 = (undefined4 *)param_1[0x11];
  while (puVar1 != (undefined4 *)0x0) {
    param_1[0x11] = *puVar1;
    puVar2 = (undefined4 *)puVar1[1];
    if (puVar2 != (undefined4 *)0x0) {
      GdipDeleteGraphics(*puVar2);
      GdipFree(puVar2);
      puVar1[1] = 0;
    }
    puVar2 = (undefined4 *)puVar1[2];
    if (puVar2 != (undefined4 *)0x0) {
      GdipDeleteMatrix(*puVar2);
      GdipFree(puVar2);
      puVar1[2] = 0;
    }
    if ((LPVOID)puVar1[3] != (LPVOID)0x0) {
      FUN_0047ce12((LPVOID)puVar1[3]);
      puVar1[3] = 0;
    }
    if ((undefined4 *)puVar1[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[4])(1);
      puVar1[4] = 0;
    }
    HeapFree(DAT_00542264,0,puVar1);
    puVar1 = (undefined4 *)param_1[0x11];
  }
  param_1[0x10] = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
    param_1[0x19] = 0;
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
    param_1[0x1b] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x1c];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeletePath(*puVar1);
    GdipFree(puVar1);
    param_1[0x1c] = 0;
  }
  param_1[0x1a] = 0;
  if ((LPVOID)param_1[0x14] != (LPVOID)0x0) {
    FUN_0047ce12((LPVOID)param_1[0x14]);
    param_1[0x14] = 0;
  }
  if ((LPVOID)param_1[0x15] != (LPVOID)0x0) {
    FUN_0047ce12((LPVOID)param_1[0x15]);
    param_1[0x15] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x18];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeletePen(*puVar1);
    GdipFree(puVar1);
    param_1[0x18] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x13];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeletePath(*puVar1);
    GdipFree(puVar1);
    param_1[0x13] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x16];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeleteFont(*puVar1);
    GdipFree(puVar1);
    param_1[0x16] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x17];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeleteStringFormat(*puVar1);
    GdipFree(puVar1);
    param_1[0x17] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x12];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeleteGraphics(*puVar1);
    GdipFree(puVar1);
    param_1[0x12] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x1d];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeleteMatrix(*puVar1);
    GdipFree(puVar1);
    param_1[0x1d] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x1e];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeleteMatrix(*puVar1);
    GdipFree(puVar1);
    param_1[0x1e] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x1f];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeleteMatrix(*puVar1);
    GdipFree(puVar1);
    param_1[0x1f] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x20];
  if (puVar1 != (undefined4 *)0x0) {
    GdipDeleteMatrix(*puVar1);
    GdipFree(puVar1);
    param_1[0x20] = 0;
  }
  if ((code *)param_1[0xd] != (code *)0x0) {
    (*(code *)param_1[0xd])(param_1);
    param_1[0xd] = 0;
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x22] = 0;
  return;
}


