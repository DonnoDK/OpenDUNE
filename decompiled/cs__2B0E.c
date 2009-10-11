/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2B0E_0006_0049_87B1()
 *
 * @name f__2B0E_0006_0049_87B1
 * @implements 2B0E:0006:0049:87B1 ()
 *
 * Called From: 0C3A:178D:0019:CC8F
 * Called From: 0FCB:016A:0037:24E5
 * Called From: 253D:01F1:002B:4141
 * Called From: 253D:02A6:0039:AA2E
 * Called From: B483:04AE:0017:11AB
 * Called From: B495:001D:0022:1CF6
 * Called From: B495:00D8:001C:D772
 * Called From: B4B8:1831:001F:0626
 * Called From: B4B8:1CA3:001F:0626
 * Called From: B4F2:00E6:0019:2DA2
 * Called From: B4F2:0DFD:001F:AB1C
 * Called From: B4F2:0E46:001C:FAAE
 * Called From: B4F2:0EB7:0038:CF2A
 * Called From: B518:1110:001C:5029
 * Called From: B518:1133:0023:A905
 * Called From: B52A:0981:0020:CBC2
 */
void f__2B0E_0006_0049_87B1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_xorw(&emu_cx, emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_ax, 0xF000);
	if (!emu_flags.cf) {
		emu_orw(&emu_cx, 0x1);
	}
	f__2B0E_001E_0031_7223(); return;
}

/**
 * Decompiled function f__2B0E_001E_0031_7223()
 *
 * @name f__2B0E_001E_0031_7223
 * @implements 2B0E:001E:0031:7223 ()
 *
 * Called From: 2B0E:0019:0049:87B1
 */
void f__2B0E_001E_0031_7223()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_cmpw(&emu_ax, 0xF000);
	if (!emu_flags.cf) {
		emu_orw(&emu_cx, 0x2);
	}
	f__2B0E_0029_0026_299A(); return;
}

/**
 * Decompiled function f__2B0E_0029_0026_299A()
 *
 * @name f__2B0E_0029_0026_299A
 * @implements 2B0E:0029:0026:299A ()
 *
 * Called From: 2B0E:0024:0031:7223
 */
void f__2B0E_0029_0026_299A()
{
	emu_cmpw(&emu_cx, 0x0);
	if (emu_flags.zf) { f__2B0E_0068_0068_539D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_cx, 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x005E; emu_last_cs = 0x2B0E; emu_last_ip = 0x0043; emu_last_length = 0x0026; emu_last_crc = 0x299A; emu_call(); return; }
	emu_cmpw(&emu_cx, 0x3);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0054; emu_last_cs = 0x2B0E; emu_last_ip = 0x0048; emu_last_length = 0x0026; emu_last_crc = 0x299A; emu_call(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x2649; emu_ip = 0x0D40; emu_last_cs = 0x2B0E; emu_last_ip = 0x004A; emu_last_length = 0x0026; emu_last_crc = 0x299A; emu_call();
	/* Unresolved jump */ emu_ip = 0x004F; emu_last_cs = 0x2B0E; emu_last_ip = 0x004A; emu_last_length = 0x0026; emu_last_crc = 0x299A; emu_call();
}

/**
 * Decompiled function f__2B0E_0068_0068_539D()
 *
 * @name f__2B0E_0068_0068_539D
 * @implements 2B0E:0068:0068:539D ()
 *
 * Called From: 2B0E:002C:0026:299A
 */
void f__2B0E_0068_0068_539D()
{
	emu_cld();
	emu_movb(&emu_cl, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_ax);
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ds, emu_ax);
	emu_andw(&emu_si, 0xF);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_di, emu_ax);
	emu_shrw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_es, emu_ax);
	emu_andw(&emu_di, 0xF);
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_shlw(&emu_cx, 0x1);
	emu_rclw(&emu_bx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_rep_movsw(emu_ds);
	emu_adcw(&emu_cx, 0x0);
	emu_rep_movsb(emu_ds);
	emu_orw(&emu_bx, emu_bx);
	if (emu_flags.zf) { f__2B0E_00C6_000A_3DA6(); return; }
	f__2B0E_00A2_002E_524A(); return;
}

/**
 * Decompiled function f__2B0E_00A2_002E_524A()
 *
 * @name f__2B0E_00A2_002E_524A
 * @implements 2B0E:00A2:002E:524A ()
 *
 * Called From: 2B0E:00C4:0068:539D
 * Called From: 2B0E:00C4:002E:524A
 */
void f__2B0E_00A2_002E_524A()
{
	emu_movb(&emu_cl, 0x4);
	emu_movw(&emu_dx, emu_si);
	emu_shrw(&emu_dx, emu_cl);
	emu_movw(&emu_ax, emu_ds);
	emu_addw(&emu_ax, emu_dx);
	emu_movw(&emu_ds, emu_ax);
	emu_andw(&emu_si, 0xF);
	emu_movw(&emu_dx, emu_di);
	emu_shrw(&emu_dx, emu_cl);
	emu_movw(&emu_ax, emu_es);
	emu_addw(&emu_ax, emu_dx);
	emu_movw(&emu_es, emu_ax);
	emu_andw(&emu_di, 0xF);
	emu_movw(&emu_cx, 0x4000);
	emu_rep_movsw(emu_ds);
	emu_decw(&emu_bx);
	if (!emu_flags.zf) { f__2B0E_00A2_002E_524A(); return; }
	f__2B0E_00C6_000A_3DA6(); return;
}

/**
 * Decompiled function f__2B0E_00C6_000A_3DA6()
 *
 * @name f__2B0E_00C6_000A_3DA6
 * @implements 2B0E:00C6:000A:3DA6 ()
 *
 * Called From: 2B0E:00A0:0068:539D
 */
void f__2B0E_00C6_000A_3DA6()
{
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Tools_GetSmallestIP()
 *
 * @name emu_Tools_GetSmallestIP
 * @implements 2B0E:00D0:0022:EC76 ()
 *
 * Called From: 0FE4:0156:001C:39CA
 * Called From: 104B:0074:001C:39F6
 * Called From: 1082:00AF:001C:39E2
 * Called From: 10BE:0027:0020:F10F
 * Called From: 1587:00FD:0032:21EE
 * Called From: 1587:01FA:0022:74BF
 * Called From: 1587:0277:004E:CAB0
 * Called From: 1FB5:0C16:000B:B328
 * Called From: 1FB5:0DE8:001D:00AD
 * Called From: 1FB5:11DC:001D:008E
 * Called From: 23E1:00B1:000B:6351
 * Called From: 253D:01C6:0041:0D4B
 * Called From: 253D:01C6:003E:5C0F
 * Called From: 25C4:01E0:0011:FE22
 * Called From: 2903:00BD:0016:704A
 * Called From: 2AE1:009A:0009:9B4B
 * Called From: 2AE1:00A8:000E:69CD
 * Called From: B4B8:0E53:009B:1454
 * Called From: B4B8:1A71:001E:DA55
 * Called From: B4B8:1A96:0025:CBCB
 * Called From: B4B8:1AB9:0010:CE4A
 * Called From: B4B8:1ADC:0010:CE4A
 * Called From: B4B8:1AFF:0010:CE4A
 * Called From: B4B8:1B26:0014:191A
 * Called From: B4B8:1B4B:0025:9F95
 * Called From: B4FC:041C:000B:F320
 * Called From: B4FC:07FA:000B:8B29
 * Called From: B503:107E:0017:539E
 * Called From: B503:10B5:0018:95A5
 * Called From: B503:10EC:0018:95A5
 * Called From: B503:1148:0018:95A5
 * Called From: B52A:050B:0014:B383
 */
void emu_Tools_GetSmallestIP()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_dx, 0xF000);
	if (emu_flags.cf) {
		emu_push(emu_ax);
		emu_shrw(&emu_ax, 0x1);
		emu_shrw(&emu_ax, 0x1);
		emu_shrw(&emu_ax, 0x1);
		emu_shrw(&emu_ax, 0x1);
		emu_addw(&emu_dx, emu_ax);
		emu_pop(&emu_ax);
		emu_andw(&emu_ax, 0xF);
	}
	f__2B0E_00EE_0004_893F(); return;
}

/**
 * Decompiled function f__2B0E_00EE_0004_893F()
 *
 * @name f__2B0E_00EE_0004_893F
 * @implements 2B0E:00EE:0004:893F ()
 *
 * Called From: 2B0E:00DD:0022:EC76
 */
void f__2B0E_00EE_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2B0E_00F2_0016_F9EC()
 *
 * @name f__2B0E_00F2_0016_F9EC
 * @implements 2B0E:00F2:0016:F9EC ()
 *
 * Called From: 2BD6:0010:0015:24A9
 * Called From: 2BD6:001F:000F:1301
 */
void f__2B0E_00F2_0016_F9EC()
{
	emu_cmpw(&emu_dx, 0xF000);
	if (emu_flags.cf) {
		emu_push(emu_ax);
		emu_shrw(&emu_ax, 0x1);
		emu_shrw(&emu_ax, 0x1);
		emu_shrw(&emu_ax, 0x1);
		emu_shrw(&emu_ax, 0x1);
		emu_addw(&emu_dx, emu_ax);
		emu_pop(&emu_ax);
		emu_andw(&emu_ax, 0xF);
	}
	f__2B0E_0107_0001_6580(); return;
}

/**
 * Decompiled function f__2B0E_0107_0001_6580()
 *
 * @name f__2B0E_0107_0001_6580
 * @implements 2B0E:0107:0001:6580 ()
 *
 * Called From: 2B0E:00F6:0016:F9EC
 */
void f__2B0E_0107_0001_6580()
{

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
