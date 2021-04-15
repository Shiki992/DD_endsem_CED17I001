#include<linux/module.h>
///< The license type -- this affects runtime behavior
MODULE_LICENSE("GPL");
  
///< The author -- visible when you use modinfo
MODULE_AUTHOR("Hrishikesh Vedantam - CED17I001");
  
///< The description -- see modinfo
MODULE_DESCRIPTION("An integer parameter accepting LKM!");
  
///< The version of the module
MODULE_VERSION("0.1");

static int count=5;
int init_module(void){
	printk("count = %d\n",count);
	return 0;
}

void cleanup(void){
	printk("module removed\n");
}
module_param(count,int,S_IRUGO); 
/*
	module_param(name,type,permissions)
	permissions:
		0 - Does not create parameters directory
		S_IRUSR - Root can Read
		S_WRUSR - Root can write
		S_IRUGO - Anyone can Read
		S_WRUGO - Anyonw can write

*/

