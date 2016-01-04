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
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x4da8c5b6, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x5a84632f, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xbb2c2e33, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x890ba884, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc7df9a38, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa8a6f639, __VMLINUX_SYMBOL_STR(__check_region) },
	{ 0xf3f751e1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9b020f55, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x361cf348, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x7193f296, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xb524cf31, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xc9336f9, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x40665b55, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5F67F52F456F8678F8EC5C7");
