#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

/* Thread experiment */

void * myfirstthread(void *arg);
void * mysecondthread(void *arg);

int main(int argc, char argv[]) 
{
  int *myint;
  int otherint;
  int err;
  pthread_t mythread1;
  pthread_t mythread2;
  myint = &otherint;
  otherint = 7;
  printf("Hello, World!\n");
  otherint = 1;
  err = pthread_create(&mythread1, NULL, &myfirstthread, (void *)&otherint);
  if (err != 0) {
    printf("\ncan't create thread :[%s]", strerror(err));
  } else {
    printf("\n Thread created successfully\n");
  }
  sleep(4);
  otherint = 2;
  err = pthread_create(&mythread2, NULL, &myfirstthread, (void *)&otherint);
  if (err != 0) {
    printf("\ncan't create thread :[%s]", strerror(err));
  } else {
    printf("\n Thread created successfully\n");
  }

  pthread_join(mythread1, NULL);
  printf("mythread1 has exited\n");
  pthread_join(mythread2, NULL);
  printf("mythread2 has exited\n");
}

void * myfirstthread(void * arg)
{
  int *threadint;
  threadint = (int *)arg;
  printf("This thread is myfirstthread%d\n", *threadint);
  while (1) {
    /* spin */
  }
  sleep(60);
}

void * mysecondthread(void * arg)
{
  int *threadint;
  threadint = (int *)arg;
  printf("This thread is mysecondthread%d\n", *threadint);
}

