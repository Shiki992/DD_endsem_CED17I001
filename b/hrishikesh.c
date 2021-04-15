#include <linux/module.h>     /* Needed by all modules */
#include <linux/kernel.h>     /* Needed for KERN_INFO */
#include <linux/init.h>       /* Needed for the macros */
//#include <stdlib.h>
//#include <limits.h>  
///< The license type -- this affects runtime behavior
MODULE_LICENSE("GPL");
  
///< The author -- visible when you use modinfo
MODULE_AUTHOR("Hrishikesh Vedantam - CED17I001");
  
///< The description -- see modinfo
MODULE_DESCRIPTION("A simple Name printing LKM!");
  
///< The version of the module
MODULE_VERSION("0.1");
  
static int __init hello_start(void)
{
	printk(KERN_INFO "Loading name module...\n");
	printk(KERN_INFO "Hrishikesh Vedantam (a.k.a Shiki Brekksten)\n");
	return 0;
}
  
static void __exit hello_end(void)
{
    printk(KERN_INFO "Goodbye Mr.\n");
}
  
module_init(hello_start);
module_exit(hello_end)
