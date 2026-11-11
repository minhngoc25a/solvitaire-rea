// Function: FUN_00435aa0
// Entry: 00435aa0
// Size: 344 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00435aa0(int param_1)

{
  if (param_1 < -0x7fff0000) {
    if (param_1 != -0x7fff0001) {
      switch(param_1) {
      case -0x7fffbfff:
        return 0xffffffe3;
      case -0x7fffbffe:
        return 0xffffff33;
      case -0x7fffbffd:
switchD_00435ab7_caseD_80004003:
        return 0xfffffffe;
      }
    }
  }
  else if (param_1 < -0x7776fffe) {
    if (param_1 == -0x7776ffff) {
switchD_00435b35_caseD_887800aa:
      return 0xfffffed4;
    }
    if (param_1 < -0x7787fff5) {
      if (param_1 == -0x7787fff6) {
        return 0xffffffe9;
      }
      if (param_1 < -0x7ff8fff9) {
        if (param_1 == -0x7ff8fffa) {
          return 0xfffffffe;
        }
        if ((param_1 != -0x7ffbfef0) && (param_1 == -0x7ff8fffb)) {
          return 0xfffffffa;
        }
      }
      else {
        if (param_1 == -0x7ff8fff2) {
          return 0xfffffffc;
        }
        if (param_1 == -0x7ff8ffa9) {
          return 0xfffffffe;
        }
      }
    }
    else if (param_1 < -0x7787ee9e) {
      if (param_1 == -0x7787ee9f) {
        return 0xffffff34;
      }
      switch(param_1) {
      case -0x7787ffe2:
      case -0x7787ffce:
      case -0x7787ffba:
      case -0x7787ff42:
        goto switchD_00435b35_caseD_8878001e;
      case -0x7787ff9c:
        goto switchD_00435b35_caseD_88780064;
      case -0x7787ff88:
        return 0xfffffe70;
      case -0x7787ff7e:
        goto switchD_00435b35_caseD_88780082;
      case -0x7787ff6a:
      case -0x7787ff24:
        goto switchD_00435b35_caseD_88780096;
      case -0x7787ff60:
        return 0xfffffffa;
      case -0x7787ff56:
        goto switchD_00435b35_caseD_887800aa;
      case -0x7787ff4c:
        return 0xffffffee;
      case -0x7787ff38:
        return 0xffffffe5;
      case -0x7787ff2e:
        goto switchD_00435ab7_caseD_80004003;
      }
    }
  }
  else if (param_1 < 1) {
    if (param_1 == 0) {
      return 0;
    }
    switch(param_1) {
    case -0x7776fffe:
switchD_00435b35_caseD_88780082:
      return 0xfffffed3;
    case -0x7776fffd:
    case -0x7776fff7:
    case -0x7776ffef:
    case -0x7776ffed:
    case -0x7776ffec:
    case -0x7776ffeb:
    case -0x7776ffea:
    case -0x7776ffe7:
    case -0x7776ffe0:
    case -0x7776ffdf:
      goto switchD_00435ab7_caseD_80004003;
    case -0x7776fffc:
switchD_00435b35_caseD_88780096:
      return 0xffffffea;
    case -0x7776fffb:
      return 0xfffffed1;
    case -0x7776fffa:
      return 0xfffffff5;
    case -0x7776fff9:
    case -0x7776fff5:
    case -0x7776fff3:
    case -0x7776ffde:
    case -0x7776ffdc:
    case -0x7776ffdb:
    case -0x7776ffd9:
    case -0x7776ffd8:
    case -0x7776ffd7:
    case -0x7776ffd0:
    case -0x7776ffc0:
switchD_00435b35_caseD_8878001e:
      return 0xfffffffd;
    case -0x7776fff8:
switchD_00435b35_caseD_88780064:
      return 0xffffff38;
    case -0x7776fff6:
      return 0xffffffed;
    case -0x7776fff4:
      return 0xfffffff9;
    case -0x7776fff2:
    case -0x7776ffee:
      return 0xffffff36;
    case -0x7776fff1:
      return 0xfffffe6f;
    case -0x7776fff0:
      return 0xffffffd1;
    case -0x7776ffdd:
      return 0xfffffffc;
    case -0x7776ffda:
      return 0xffffffdf;
    }
  }
  else if (param_1 < 0x8890003) {
    if (param_1 == 0x8890002) {
      return 0xfffffff8;
    }
    if (param_1 == 0x878000a) {
      return 0;
    }
    if (param_1 == 0x8890001) {
      return 0xffffffee;
    }
  }
  return 0xffffffff;
}


