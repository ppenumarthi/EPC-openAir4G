#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59caa4c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5b3a8e4a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9ecf18e, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x98d4495f, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x6fe1f286, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa8806e07, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb01fce, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xbe7b5971, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x1172c8f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc25cf0a9, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfda649ed, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x423a11c9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x86dd282b, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x74ed7fcb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x76806fef, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5AAAB96620D0196D5EE7AF5");
