#include <semaphore.h>
#include <stdio.h>
#define N 5
#define THINKING 2
#define HUNGRY 1
#define EATING 0
#define LEFT (phnum + 4) % N
#define RIGHT (phnum + 1) % N
int state[N];
int phil[N] = { 0, 1, 2, 3, 4 };
sem_t mutex;
sem_t S[N];
void test(int phnum)
{
 if (state[phnum] == HUNGRY
 && state[LEFT] != EATING
 && state[RIGHT] != EATING) {
 state[phnum] = EATING;
 sleep(2);
 printf("Philosopher %d takes fork %d and %d\n", phnum + 1, LEFT + 1, phnum + 1);
 printf("Philosopher %d is Eating\n", phnum + 1);
 sem_post(&S[phnum]);
 }
}
void take_fork(int phnum)
{
 sem_wait(&mutex);
 state[phnum] = HUNGRY;
 printf("Philosopher %d is Hungry\n", phnum + 1);
 test(phnum);
 sem_post(&mutex);
 sem_wait(&S[phnum]);
 sleep(1);
}