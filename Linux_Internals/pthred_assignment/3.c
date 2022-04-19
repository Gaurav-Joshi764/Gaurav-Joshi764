#include<sys/mman.h>
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

void * Proc(void* param)
{
   sleep(2);
   return 0;
}

int main()
{
   pthread_attr_t Attribute;
   pthread_t Id;
   void *Stak;
   size_t Size;
   int err;

   size_t my_stksize = 0x64;
   void * my_stack;

   pthread_attr_init(&Attribute);

   pthread_attr_getstacksize(&Attribute,&Size);
   pthread_attr_getstackaddr(&Attribute,&Stak);

   printf("Default: Address = %08x default Size=%d\n",Stak,Size);
   my_stack = (void*)malloc(my_stksize);

   printf("Malloc checking :Address = %08x default Size=%d\n",my_stack,my_stksize);

   pthread_attr_setstack(&Attribute,my_stack,my_stksize);
   pthread_create(&Id,&Attribute, Proc, NULL);

   pthread_attr_getstack(&Attribute,&Stak,&Size);
   printf("newly stack : Addr=%08x and size=%d\n",Stak,Size);

   sleep(3);

return 0;
}
