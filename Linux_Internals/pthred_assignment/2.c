#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>

int counter = 0;

pthread_t tmp_thread;

void* func(void* p)
{
	while (1) {

		printf("thread number one\n");
		sleep(1); // sleep 1 second
		counter++;
		
		// for exiting if counter = = 5
		if (counter == 2) {

			// for cancel thread_two
			pthread_cancel(tmp_thread);

			// for exit from thread_one
			pthread_exit(NULL);
		}
	}
}

void* func2(void* p)
{

	// store thread_two id to tmp_thread
	tmp_thread = pthread_self();

	while (1) {
		printf("thread Number two\n");
		sleep(1); // sleep 1 second
	}
}

int main()
{

	pthread_t thread_one, thread_two;

	// create thread_one
	pthread_create(&thread_one, NULL, func, NULL);

	// create thread_two
	pthread_create(&thread_two, NULL, func2, NULL);

	// waiting for when thread_one is completed
	pthread_join(thread_one, NULL);

	// waiting for when thread_two is completed
	pthread_join(thread_two, NULL);

}

