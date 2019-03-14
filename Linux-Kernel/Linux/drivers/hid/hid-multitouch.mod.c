#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x13e75575, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x79b5cf14, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x36f3673a, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x7ec5844a, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xdcab5c07, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x83560cf8, __VMLINUX_SYMBOL_STR(hid_hw_start) },
	{ 0x8811ec8c, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xd664d17a, __VMLINUX_SYMBOL_STR(hid_hw_stop) },
	{ 0x456913ac, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x9e676b73, __VMLINUX_SYMBOL_STR(input_mt_get_slot_by_key) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x34903431, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2dd4d12, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0xb3cf96b5, __VMLINUX_SYMBOL_STR(hidinput_calc_abs_res) },
	{ 0x12212cd, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2895df09, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x16396722, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x896fd2ee, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfb2b4d1a, __VMLINUX_SYMBOL_STR(hid_report_raw_event) },
	{ 0x7095faf8, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x534dd61c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb7119874, __VMLINUX_SYMBOL_STR(hid_alloc_report_buf) },
	{ 0x1ec6decf, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0x6b51e4d1, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0xc981a76, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xff3e3628, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g0002v00000596p00000500");
MODULE_ALIAS("hid:b0003g0002v00000596p00000502");
MODULE_ALIAS("hid:b0003g0002v00000596p00000506");
MODULE_ALIAS("hid:b0018g0004v0000044Ep0000121F");
MODULE_ALIAS("hid:b0018g0004v0000044Ep00001220");
MODULE_ALIAS("hid:b0003g0004v000017EFp000060A3");
MODULE_ALIAS("hid:b0003g0002v00001130p00003101");
MODULE_ALIAS("hid:b0003g0004v00000B05p0000184A");
MODULE_ALIAS("hid:b0003g0002v000003EBp00002118");
MODULE_ALIAS("hid:b0003g0002v00002453p00000100");
MODULE_ALIAS("hid:b0003g0002v00002087p00000A01");
MODULE_ALIAS("hid:b0003g0002v00002087p00000F01");
MODULE_ALIAS("hid:b0003g0002v00002247p00000001");
MODULE_ALIAS("hid:b0003g0002v000024B8p00000020");
MODULE_ALIAS("hid:b0003g0002v000024B8p00000040");
MODULE_ALIAS("hid:b0003g0002v00001FF7p00000013");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000480D");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000480E");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007207");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000720C");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007224");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000722A");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000725E");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007262");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000726B");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072A1");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072AA");
MODULE_ALIAS("hid:b0003g*v00000EEFp000072C4");
MODULE_ALIAS("hid:b0003g*v00000EEFp000072D0");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072FA");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007302");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007349");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000073F7");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000A001");
MODULE_ALIAS("hid:b0003g0002v000003FCp000005D8");
MODULE_ALIAS("hid:b0003g0002v000025B5p00000002");
MODULE_ALIAS("hid:b0003g0002v000010C4p000081B9");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000003");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000100");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000101");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000102");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000106");
MODULE_ALIAS("hid:b0003g0002v00000DFCp0000010A");
MODULE_ALIAS("hid:b0003g0002v00000DFCp0000E100");
MODULE_ALIAS("hid:b0005g0002v000025B6p00000002");
MODULE_ALIAS("hid:b0003g0002v00001AADp0000000F");
MODULE_ALIAS("hid:b0003g0002v000022EDp00001010");
MODULE_ALIAS("hid:b0003g0002v0000222Ap00000001");
MODULE_ALIAS("hid:b0003g*v00001FD2p00006007");
MODULE_ALIAS("hid:b0003g0002v00000486p00000185");
MODULE_ALIAS("hid:b0003g0002v00000486p00000186");
MODULE_ALIAS("hid:b0003g0002v0000062Ap00007100");
MODULE_ALIAS("hid:b0003g0002v000004DAp00001044");
MODULE_ALIAS("hid:b0003g0002v000004DAp0000104D");
MODULE_ALIAS("hid:b0003g0002v00000603p00000600");
MODULE_ALIAS("hid:b0018g0004v00001B96p00001B05");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008001");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008002");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008003");
MODULE_ALIAS("hid:b0003g0002v00002087p00000703");
MODULE_ALIAS("hid:b0003g0002v00000408p00003001");
MODULE_ALIAS("hid:b0003g0002v00000483p00003261");
MODULE_ALIAS("hid:b0003g0002v00001784p00000016");
MODULE_ALIAS("hid:b0003g0002v00001E5Ep00000313");
MODULE_ALIAS("hid:b0003g0002v0000227Dp00000709");
MODULE_ALIAS("hid:b0003g0002v0000227Dp00000A19");
MODULE_ALIAS("hid:b0003g0002v00000306p0000FF3F");
MODULE_ALIAS("hid:b0003g0002v00000FB8p00001109");
MODULE_ALIAS("hid:b0003g0002v00002505p00000220");
MODULE_ALIAS("hid:b0003g0002v00001477p00001006");
MODULE_ALIAS("hid:b0003g0002v00001477p00001007");
MODULE_ALIAS("hid:b0003g0002v00001477p0000100E");
MODULE_ALIAS("hid:b0003g0002v00001477p00001021");
MODULE_ALIAS("hid:b0003g0002v00001477p00001023");
MODULE_ALIAS("hid:b0003g0002v00001477p00001022");
MODULE_ALIAS("hid:b0003g0002v00001477p00001024");
MODULE_ALIAS("hid:b0003g0002v00001477p00001026");
MODULE_ALIAS("hid:b0003g0002v00001477p00001025");
MODULE_ALIAS("hid:b*g*v000018D1p00005028");
MODULE_ALIAS("hid:b*g0002v*p*");
MODULE_ALIAS("hid:b*g0004v*p*");

MODULE_INFO(srcversion, "9A516602402410FE6284150");